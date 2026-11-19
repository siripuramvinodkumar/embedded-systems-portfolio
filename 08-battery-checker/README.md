# ESP32 Battery Level Monitor (Pure C)

## Project Overview
A simple embedded C firmware project built using the **ESP-IDF framework** and simulated on an **ESP32 microcontroller** via Wokwi. This project demonstrates how to combine memory variables, custom functions, and conditional logic (`if / else`) to monitor battery health and trigger low-power alerts.

## Key Concepts & C Vocabulary
* **Variables (`int battery`)** -> Memory storage buckets used to hold integer sensor values.
* **Custom Functions (`void check_battery(int battery)`)** -> Reusable blocks of code that accept input data and perform diagnostic tasks without returning a value.
* **Conditional Logic (`if / else`)** -> Decision-making gates that evaluate whether the battery level is below `20%` and print the appropriate warning or status message.
* **Format Specifiers (`%d` & `%%`)** -> Placeholders used inside `printf` to display integer values alongside literal percentage signs.

## How to Run This Project
1. Open [Wokwi ESP32 Simulator](https://wokwi.com).
2. Start a blank **ESP-IDF** project.
3. Copy the code from `main.c` in this repository and paste it into the Wokwi editor.
4. Click the green **Start Simulation** button and view the output in the serial terminal.

## Expected Terminal Output
```text
--- Starting System Check ---
Battery Level: 85%
Status: Battery is Good.
Battery Level: 15%
Warning: Low Battery! Please charge.
```
