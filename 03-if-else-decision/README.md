# Project 03: Pure C Control Flow (`if` / `else` Decision Making)

## Project Description
This project marks my transition from the Arduino C++ wrapper to **100% pure C** using the official **ESP-IDF (Espressif IoT Development Framework)**. It demonstrates how an ESP32 microcontroller evaluates sensor variables and branches into different logical execution paths using `if` and `else` statements.

## Pure C Vocabulary & Concepts Learned
* **`void app_main(void)`:** The primary execution entry gate for ESP-IDF applications managed by FreeRTOS.
* **`printf("... %d\n", var)`:** Standard C formatted output function from `<stdio.h>` used to print integers (`%d`) to the hardware terminal.
* **`if (condition)` & `else`:** Conditional branching logic that compares variable values using relational operators (`>`) to simulate a smart thermostat deciding whether to activate an Air Conditioner.

## Setup & Steps Followed
* **Initialized ESP-IDF Template:** Opened a pure C (`main.c`) project workspace in the Wokwi simulator.
* **Declared Temperature Variable:** Created an integer bucket (`int current_temp = 32;`) in RAM to simulate a room temperature reading.
* **Programmed Decision Logic:** Built an `if (current_temp > 28)` condition to trigger an AC alert, paired with an `else` fallback for comfortable temperatures.
* **Verified Execution:** Compiled the C source file and verified the terminal output logs.

## Expected Terminal Output
```text
Checking room temperature: 32 C
ALERT: Room is too hot! Turning AC ON.
```
