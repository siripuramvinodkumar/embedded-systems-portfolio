#include <stdio.h>

// 1. CUSTOM SHORTCUT BUTTON (Function)
void check_battery(int battery) {
    printf("Battery Level: %d%%\n", battery);

    // 2. THE SECURITY GUARD (if / else)
    if (battery < 20) {
        printf("Warning: Low Battery! Please charge.\n");
    } else {
        printf("Status: Battery is Good.\n");
    }
}

// 3. THE CHIP ENTRY GATE
void app_main(void) {
    printf("--- Starting System Check ---\n");

    // Press the shortcut button with a high battery number
    check_battery(85);

    // Press the shortcut button again with a low battery number
    check_battery(15);
}
