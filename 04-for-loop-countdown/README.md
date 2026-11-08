# Project 04: Pure C Loops (`for` Loop & FreeRTOS Delays)

## Project Description
This project demonstrates automated repetition in pure C using the official **ESP-IDF** framework on an ESP32 microcontroller. It executes a timed 5-batch sensor reading simulation using a `for` loop and non-blocking FreeRTOS task delays.

## Pure C Vocabulary & Concepts Learned
* **`for (int i = 1; i <= 5; i++)`:** A controlled loop structure that initializes a counter variable (`i = 1`), checks a stop condition (`i <= 5`), and increments the counter (`i++`) after every cycle.
* **`vTaskDelay(1000 / portTICK_PERIOD_MS);`:** A FreeRTOS system function that pauses the task for an exact duration (1,000 milliseconds / 1 second) between loop iterations without crashing the processor.
* **`while (1)`:** An infinite loop keeping the ESP32 active and stable after the finite `for` loop finishes.

## Setup & Steps Followed
* **Initialized ESP-IDF Workspace:** Opened a pure C (`main.c`) project template on Wokwi.
* **Built the `for` Loop:** Structured a 5-cycle loop printing each batch number dynamically using the `%d` format specifier.
* **Added 1-Second Timing:** Placed `vTaskDelay` inside the loop braces `{ }` so each batch prints exactly one second apart.
* **Verified Execution:** Compiled and ran the simulation to confirm sequential terminal output from batch #1 through #5.

## Expected Terminal Output
```text
Starting Automated Sensor Countdown...
Reading sensor batch #1...
Reading sensor batch #2...
Reading sensor batch #3...
Reading sensor batch #4...
Reading sensor batch #5...
All 5 sensor batches completed!
```
