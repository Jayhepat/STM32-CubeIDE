# STM32F4 I2C Communication with ADXL345 Accelerometer

## Overview
It demonstrates interfacing the **ADXL345 3-axis accelerometer** with an **STM32F411RE** microcontroller via the I2C protocol. It includes initialization, single-byte read/write, and burst read/write operations to communicate with the sensor.

The program reads acceleration data in **X, Y, and Z axes**, converts raw data to gravitational units, and stores them in floating-point variables.

---

## Hardware Connections

| STM32F4 Pin | ADXL345 Pin | Function          |
|-------------|-------------|-----------------|
| PB6         | SCL         | I2C Clock       |
| PB7         | SDA         | I2C Data        |
| 3.3V        | VCC         | Power Supply    |
| GND         | GND         | Ground          |

---

## I2C Configuration

- **Peripheral:** I2C1
- **Speed:** 100 kHz
- **Rise Time:** 17
- **GPIO Alternate Function:** AF4 for PB6 and PB7
- **Open-drain configuration** with pull-up resistors

---

## Register Definitions

| Symbol           | Address | Description                          |
|-----------------|---------|--------------------------------------|
| `DEVID_R`        | 0x00    | Device ID register                    |
| `DATA_FORMAT_R`  | 0x31    | Data format control register          |
| `POWER_CTL_R`    | 0x2D    | Power control register                |
| `DATA_START_ADDR`| 0x32    | Starting address for acceleration data |
| `DEVICE_ADDR`    | 0x53    | I2C device address                    |

---

## ADXL345 Configuration

- **Range:** ±4g (`FOUR_G`)
- **Measurement Mode:** Enabled (`SET_MEASURE_B`)
- **Initialization Steps:**
  1. Initialize I2C peripheral.
  2. Read device ID to verify connection.
  3. Set data format.
  4. Reset power control bits.
  5. Enable measurement mode.

---

## Functions

### I2C Functions

- `void I2C1_Init(void)`  
  Initializes I2C1 peripheral and GPIO pins.

- `void I2C1_ByteRead(char saddr, char maddr, char* data)`  
  Reads a single byte from a specified memory address of the I2C slave device.

- `void I2C1_BurstRead(char saddr, char maddr, int n, char* data)`  
  Reads multiple bytes (burst) from the I2C slave.

- `void I2C1_BurstWrite(char saddr, char maddr, int n, char* data)`  
  Writes multiple bytes (burst) to the I2C slave.

### ADXL345 Functions

- `void adxl_init(void)`  
  Initializes the ADXL345 accelerometer.

- `void adxl_Read_Values(uint8_t reg)`  
  Reads 6 bytes starting from the specified register (X, Y, Z axes).

- `void adxl_Write(uint8_t reg, char value)`  
  Writes a single byte to a register.

- `void adxl_read_address(uint8_t reg)`  
  Reads a single byte from a specified register.

---
## Main Program Flow

1. Initialize ADXL345 via `adxl_init()`.
2. Continuously read acceleration data using `adxl_Read_Values(DATA_START_ADDR)`.
3. Convert raw 16-bit data to signed integers:
   ```c
   x = ((data_rec[1] << 8) | data_rec[0]);
   y = ((data_rec[3] << 8) | data_rec[2]);
   z = ((data_rec[5] << 8) | data_rec[4]);
