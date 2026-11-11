# Project 07: Pure C Function Chaining (Data Pipelines)

## Project Description
This project builds upon basic C functions by chaining multiple custom tools together. It demonstrates how an ESP32 microcontroller can take the returned output from one function (`add`) and feed it directly as an input into a second function (`multiply`).

## Pure C Vocabulary & Concepts Learned
* **`int multiply(int a, int b)`** -> A secondary custom function module designed to accept two integer inputs and return their multiplied product.
* **Function Chaining (Data Pipeline)** -> Capturing the `return` value of one function inside a variable (`sum`) and immediately passing that variable into another function (`multiply(sum, 2)`).

## Setup & Steps Followed
* **Expanded Modular Toolbox**: Added a second independent arithmetic function alongside the initial addition block.
* **Engineered Data Pipeline**: Connected two isolated functions inside `app_main` so data flows sequentially from step one to step two.
* **Verified Simulation**: Confirmed sequential terminal outputs matching both intermediate and final calculations.

## Expected Terminal Output
```text
--- Starting Calculator Pipeline ---
Step 1 (Addition): 15
Step 2 (Multiplied by 2): 30
```
