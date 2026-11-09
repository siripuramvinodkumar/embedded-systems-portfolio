# Project 05: Pure C Conditionals (`while` Loop Automation)

## Project Description
This project demonstrates dynamic conditional tracking in pure C using the official **ESP-IDF** framework on an ESP32 microcontroller. It simulates an automated fuel tank filling system that continues running instructions as long as a target condition evaluates to true.

## Pure C Vocabulary & Concepts Learned
* **`while (condition)`:** A control loop that checks a specific rule *before* executing the block. It continues repeating execution indefinitely until the given expression evaluates to false.
* **`fuel_liters++`:** An increment loop-control step. Failing to advance this bucket would trap the hardware in an infinite execution loop, freezing system states.
* **`vTaskDelay(500 / portTICK_PERIOD_MS);`:** Implements a half-second clock delay to space out data logs stably.

## Setup & Steps Followed
* **Initialized Workspace:** Formatted a blank ESP-IDF template inside the Wokwi terminal dashboard.
* **Programmed State Tracking:** Declared a baseline storage value (`int fuel_liters = 1;`) to track numerical levels.
* **Configured Exit Criteria:** Controlled loop bounds (`while (fuel_liters <= 3)`) to cleanly break out of the automation loop when memory indexes overflow the maximum target limit.
* **Verified Simulation:** Successfully tracked sequential console updates before hitting the terminal flag.

## Expected Terminal Output
```text
Filling tank... Current fuel: 1 Liters
Filling tank... Current fuel: 2 Liters
Filling tank... Current fuel: 3 Liters
Tank is Full!
```
