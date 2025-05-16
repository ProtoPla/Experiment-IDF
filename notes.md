# Sensor Pin Connections for ESP32

This document describes the GPIO pin connections for the GY-271 magnetometer and the BMI160 IMU modules connected to an ESP32 development board.

---

## GY-271 (Magnetometer)

| GY-271 Pin | Connected ESP32 Pin | Notes                      |
|------------|---------------------|----------------------------|
| VCC        | 3.3V                | Power supply (3.3V)        |
| GND        | GND                 | Ground                     |
| SDA        | GPIO22              | I2C Data line               |
| SCL        | GPIO21              | I2C Clock line             |

---

## BMI160 (IMU)

| BMI160 Pin | Connected ESP32 Pin | Notes                                |
|------------|---------------------|------------------------------------|
| VIN or 3V3 | 3.3V                | Power supply                       |
| GND        | GND                 | Ground                             |
| SCL        | GPIO22              | I2C Clock line                     |
| SDA        | GPIO21              | I2C Data line                     |
| CS         | GPIO05              | SPI Chip Select                      |
| INT1       | GPIO17              | Interrupt 1 from BMI160 (data ready) |
| INT2       | (optional)          | Interrupt 2 from BMI160            |

---