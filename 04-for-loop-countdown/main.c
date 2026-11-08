#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void) {
    printf("Starting Automated Sensor Countdown...\n");

    // Repeat the block inside { } 5 times
    for (int i = 1; i <= 5; i++) {
        printf("Reading sensor batch #%d...\n", i);
        
        // Wait 1000 milliseconds (1 second) between each reading
        vTaskDelay(1000 / portTICK_PERIOD_MS); 
    }

    printf("All 5 sensor batches completed!\n");

    // Keep the chip stable
    while (1) {
        vTaskDelay(10 / portTICK_PERIOD_MS);
    }
}
