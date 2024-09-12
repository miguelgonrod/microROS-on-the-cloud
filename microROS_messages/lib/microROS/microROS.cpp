#include "microROS.h"
#include "esp_camera.h"

sensor_micro_msgs__msg__CompressedImage img_msg;
rcl_publisher_t publisher;
rcl_subscription_t choosed_option_subscriber;
rcl_allocator_t allocator;
rcl_node_t node;
rcl_timer_t timer;
std_msgs__msg__UInt8 choosed_option_msg;

static const char *TAG = "camera_pub";

static camera_config_t camera_config = {
    .pin_pwdn = CAM_PIN_PWDN,
    .pin_reset = CAM_PIN_RESET,
    .pin_xclk = CAM_PIN_XCLK,
    .pin_sscb_sda = CAM_PIN_SIOD,
    .pin_sscb_scl = CAM_PIN_SIOC,
    .pin_d7 = CAM_PIN_D7,
    .pin_d6 = CAM_PIN_D6,
    .pin_d5 = CAM_PIN_D5,
    .pin_d4 = CAM_PIN_D4,
    .pin_d3 = CAM_PIN_D3,
    .pin_d2 = CAM_PIN_D2,
    .pin_d1 = CAM_PIN_D1,
    .pin_d0 = CAM_PIN_D0,
    .pin_vsync = CAM_PIN_VSYNC,
    .pin_href = CAM_PIN_HREF,
    .pin_pclk = CAM_PIN_PCLK,
    .xclk_freq_hz = 20000000,
    .ledc_timer = LEDC_TIMER_0,
    .ledc_channel = LEDC_CHANNEL_0,
    .pixel_format = PIXFORMAT_JPEG,
    .frame_size = FRAMESIZE_QVGA,
    .jpeg_quality = 4,
    .fb_count = 2,
    .grab_mode = CAMERA_GRAB_WHEN_EMPTY
};

microROS::microROS() : choosed_option_value(0) {}

void microROS::initialize() {
    Serial.begin(115200);
    ESP_LOGI(TAG, "Initializing micro-ROS for image publishing and subscribing.");

    // Connect to WiFi and setup micro-ROS
    IPAddress agent_ip(192, 168, 0, 5); // Replace with your IP address
    size_t agent_port = 8888;
    char ssid[] = "SSID";  // Replace with your WiFi SSID
    char psk[] = "PASSWORD";  // Replace with your WiFi Password

    set_microros_wifi_transports(ssid, psk, agent_ip, agent_port);

    allocator = rcl_get_default_allocator();
    rclc_support_init(&support, 0, NULL, &allocator);
    rclc_node_init_default(&node, "esp32_cam_node", "", &support);

    // Initialize the publisher
    rclc_publisher_init_default(
        &publisher,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_micro_msgs, msg, CompressedImage),
        "image/compressed"
    );

    // Initialize the subscriber
    rclc_subscription_init_default(
        &choosed_option_subscriber,
        &node,
        ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, UInt8),
        "/choosed_option"
    );

    // Initialize the executor with 2 handles (publisher and subscriber)
    rclc_executor_init(&executor, &support.context, 2, &allocator);

    // Add the subscriber to the executor
    rclc_executor_add_subscription(&executor, &choosed_option_subscriber, &choosed_option_msg, microROS::choosed_option_callback, ON_NEW_DATA);

    // Initialize the camera
    esp_err_t err = esp_camera_init(&camera_config);
    if (err != ESP_OK) {
        ESP_LOGE(TAG, "Camera Init Failed");
    }

    // Allocate initial memory for the img_msg (will be resized later if needed)
    img_msg.data.data = nullptr;
    img_msg.data.capacity = 0;
    img_msg.data.size = 0;

    ESP_LOGI(TAG, "Initialization complete.");
}

void microROS::start_receiving_msgs() {
    camera_fb_t *pic = esp_camera_fb_get();
    if (pic) {
        // Resize the buffer dynamically based on image size
        if (pic->len > img_msg.data.capacity) {
            // Free previously allocated memory, if any
            if (img_msg.data.data != nullptr) {
                free(img_msg.data.data);
            }

            // Allocate new memory for the image data
            img_msg.data.data = (uint8_t *)malloc(pic->len * sizeof(uint8_t));
            img_msg.data.capacity = pic->len;
        }

        // Copy image data to the buffer
        img_msg.data.size = pic->len;
        memcpy(img_msg.data.data, pic->buf, pic->len);

        // Assign frame_id and format
        img_msg.header.frame_id.data = (char *)malloc(10 * sizeof(char));
        strcpy(img_msg.header.frame_id.data, "camera_frame");
        img_msg.header.frame_id.size = strlen("camera_frame");
        img_msg.header.frame_id.capacity = 10;
        img_msg.format.data = (char *)malloc(5 * sizeof(char));
        strcpy(img_msg.format.data, "jpeg");
        img_msg.format.size = strlen("jpeg");
        img_msg.format.capacity = 5;

        // Publish the image
        RCSOFTCHECK(rcl_publish(&publisher, &img_msg, NULL));
        ESP_LOGI(TAG, "Image published, size: %zu bytes", pic->len);

        // Free the captured frame buffer
        esp_camera_fb_return(pic);
    } else {
        ESP_LOGE(TAG, "Failed to capture image");
    }

    delay(20);  // Add some delay to avoid flooding
}

void microROS::choosed_option_callback(const void *msg_recv) {
    const std_msgs__msg__UInt8 *received_msg = (const std_msgs__msg__UInt8 *)msg_recv;
    ESP_LOGI(TAG, "Received option: %d", received_msg->data);
    if (xSemaphoreTake(playerOptionMutex, portMAX_DELAY)){
        playerOption = received_msg->data;
        xSemaphoreGive(playerOptionMutex);
    }
    Serial.print("Choosed option: ");
    Serial.println(playerOption);
    // Store the received option for further use
}