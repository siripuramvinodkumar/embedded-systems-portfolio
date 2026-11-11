#include <stdio.h>

// 1. FIRST TOOL: ADDS TWO NUMBERS
int add(int a, int b) {
    return a + b;
}

// 2. SECOND TOOL: MULTIPLIES TWO NUMBERS
int multiply(int a, int b) {
    return a * b;
}

// 3. THE CHIP ENTRY GATE
void app_main(void) {
    printf("--- Starting Calculator Pipeline ---\n");

    // Step A: Add 5 and 10 (Result is 15)
    int sum = add(5, 10);
    printf("Step 1 (Addition): %d\n", sum);

    // Step B: Take that 'sum' (15) and multiply it by 2
    int final_total = multiply(sum, 2);
    printf("Step 2 (Multiplied by 2): %d\n", final_total);
}
