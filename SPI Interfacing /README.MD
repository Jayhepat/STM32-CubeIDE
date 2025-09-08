# STM32F4 + ADXL345 Accelerometer (SPI Interface)

## Overview
It demonstrates how to interface the **ADXL345 accelerometer** with an **STM32F4 microcontroller** using the **SPI protocol**.  
The firmware initializes SPI, configures the ADXL345 registers, and continuously reads acceleration data (X, Y, Z axes) in the main loop.

---

## Features
- Configures **SPI1** peripheral on STM32F4.
- Communicates with **ADXL345 accelerometer** over SPI.
- Reads acceleration data for **X, Y, Z axes**.
- Converts raw data to **g-units** (gravity).

---

## Connections to Hardware
| STM32F4 Pin | ADXL345 Pin | Description       |
|-------------|------------|-------------------|
| PA5         | SCL/SCLK   | SPI Clock         |
| PA6         | MISO       | SPI Data (Master In) |
| PA7         | MOSI       | SPI Data (Master Out) |
| PA9         | CS         | Chip Select (Slave Enable) |
| VCC (3.3V)  | VCC        | Power             |
| GND         | GND        | Ground            |

---

## Software Setup
1. **IDE**: [STM32CubeIDE](https://www.st.com/en/development-tools/stm32cubeide.html)  
2. **MCU**: STM32F4 series  
3. **Driver**: Custom low-level SPI driver implemented in `main.c`.  

---

## Code Structure

---
## How It Works
1. **SPI Initialization**  
   - Configures GPIO pins for alternate function (SPI).  
   - Initializes SPI1 in **Master mode**, CPOL=1, CPHA=1.  

2. **ADXL345 Initialization**  
   - Configures data format to ±4g range.  
   - Enables measurement mode.  

3. **Data Acquisition**  
   - Reads 6 bytes (X, Y, Z axis data).  
   - Combines MSB + LSB into 16-bit signed integers.  
   - Converts raw values into **g-units** (`raw_value * 0.0078`).  

---

## Example Output (variables in main loop)
- `xg` → Acceleration in X-axis (g)  
- `yg` → Acceleration in Y-axis (g)  
- `zg` → Acceleration in Z-axis (g)   
