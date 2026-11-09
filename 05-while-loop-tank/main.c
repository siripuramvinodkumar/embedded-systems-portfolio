#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void) {
    // 1. Create a variable starting at 1 liter
    int fuel_liters = 1;

    // 2. Repeat as long as fuel is less than or equal to 3
    while (fuel_liters <= 3) {
        printf("Filling tank... Current fuel: %d Liters\n", fuel_liters);
        
        // Add 1 to our bucket so it doesn't loop forever
        fuel_liters++; 
        
        // Pause for half a second
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }

    printf("Tank is Full!\n");

    // Keep the chip stable
    while (1) {
        vTaskDelay(10 / portTICK_PERIOD_MS);
    }
}
