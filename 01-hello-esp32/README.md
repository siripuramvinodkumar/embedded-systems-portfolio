# Project 01: Hello ESP32 (Serial Communication Baseline)

## Project Description
This project acts as the foundational baseline for learning embedded systems. It configures the ESP32 microcontroller to open a secure diagnostic serial communication channel with a connected computer terminal and print a startup confirmation message.

## Setup & Steps Followed
1. **Created Project Structure:** Launched a clean ESP32 development board template using the online Wokwi hardware simulator.
2. **Initialized Serial Channel:** Declared the `Serial.begin(115200);` command inside the `setup()` function block to open a transmission pipeline operating at a baud rate of 115,200 bits per second.
3. **Programmed the Output:** Utilized the `Serial.println()` function to command the chip's central processing unit to transmit a plain-text confirmation greeting.
4. **Optimized CPU Cycle Rates:** Integrated a protective 10-millisecond window (`delay(10);`) inside the infinite execution loop (`loop()`) to restrict empty processing iterations and optimize background engine execution.
5. **Executed Simulation:** Successfully compiled the script and ran the simulation to verify vocabulary accuracy and trace physical device terminal outputs.

## Hardware Components Used
* **Microcontroller Unit:** Virtual ESP32 Development Board (NodeMCU style Architecture)
* **Interface Link:** Simulated USB-to-UART Serial Bridge Interface

## Expected Terminal Output
When the ESP32 chip receives power or a system hardware reset signal occurs, the chip initializes its bootloader diagnostics followed by our custom print message:

```text
ets Jul 29 2019 12:21:46

rst:0x1 (POWERON_RESET),boot:0x13 (SPI_FAST_FLASH_BOOT)
configsip: 0, SPIWP:0xee
clk_drv:0x00,q_drv:0x00,d_drv:0x00,cs0_drv:0x00,hd_drv:0x00,wp_drv:0x00
mode:DIO, clock div:2
load:0x3fff0030,len:1156
load:0x40078000,len:11456
ho 0 tail 12 room 4
load:0x40080400,len:2972
entry 0x400805dc
Hello, ESP32!
```
