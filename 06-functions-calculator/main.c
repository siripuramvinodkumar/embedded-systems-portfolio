#include <stdio.h>

// 1. THIS TOOL CALLED 'ADD' TAKES TWO NUMBERS, ADDS THEM, AND HANDS BACK THE RESULT
int add(int a, int b) {
    return a + b;
}

// 2. THE CHIP ENTRY GATE
void app_main(void) {
    int total_score = 0;

    printf("--- Starting Fresh Today ---\n");

    // Use the tool to add 5 and 10, then save the answer in total_score
    total_score = add(5, 10);

    printf("The combined total is: %d\n", total_score);
}
