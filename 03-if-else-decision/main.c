#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void) {
    int current_temp = 22; 

    printf("Checking room temperature: %d C\n", current_temp);

    if (current_temp > 28) {
        printf("ALERT: Room is too hot! Turning AC ON.\n");
    } 
    else {
        printf("STATUS: Temperature is comfortable. AC stays OFF.\n");
    }

    while (1) {
        vTaskDelay(10 / portTICK_PERIOD_MS);
    }
}
