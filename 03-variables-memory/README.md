# Project 03: Variables & Memory Storage (Data Buckets)

## Project Description
This project acts as Day 1 of my structured C language learning track. It demonstrates how an ESP32 microcontroller allocates physical space inside its random-access memory (RAM) chip to store and modify different types of data during operation.

## Hardware Data Buckets Explained
* **`int` (Integer):** Allocates a continuous track of 32 tiny electrical switches (4 bytes of physical memory) to store whole numbers.
* **`float` (Decimal):** Allocates 32 switches configured with floating-point math properties to store accurate fractional decimal numbers.
* **`char` (Character):** Reserves exactly 8 switches (1 byte of memory) to store a single letter or symbol based on the universal numeric ASCII dictionary layout chart.

## Setup & Steps Followed
* **Initialized Pipeline:** Opened the secure USB diagnostic serial communication pipeline operating at a baud rate speed of 115,200 bits per second.
* **Memory Allocation:** Declared and assigned initial value layouts to `roomTemperature`, `exactVoltage`, and `deviceStatus` variables.
* **Overwriting State Switches:** Commanded the central processing unit to send a new burst of electricity to those exact memory slot addresses, modifying the trapped data states.
* **Diagnostic Verification:** Logged all memory changes directly out to the computer terminal window to confirm runtime accuracy.

## Expected Terminal Output
When execution begins, the microcontroller tracks data changes and displays the following sequence:

```text
Initial Temperature: 25
Target Board Voltage: 3.33
Device Operation Code: A
--- MODIFIED VALUES DOWN BELOW ---
Updated Temperature: 30
Updated Voltage: 5.00
Updated Operation Code: B
```
