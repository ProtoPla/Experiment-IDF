#include <stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

#define led GPIO_NUM_2

static const char *TAG = "MAIN";  // Tag used for all log messages

void app_main(void)
{

    gpio_set_direction(led, GPIO_MODE_OUTPUT);
    ESP_LOGI(TAG, "ESP32 started using ESP-IDF on PlatformIO!");

    int counter = 0;

    while (1) {
        ESP_LOGI(TAG, "Loop count: %d", counter++);
        gpio_set_level(led,1);
        vTaskDelay(pdMS_TO_TICKS(500));  // Delay half second
        gpio_set_level(led, 0);
        vTaskDelay(pdMS_TO_TICKS(500));  // Delay half second 
    }
}
