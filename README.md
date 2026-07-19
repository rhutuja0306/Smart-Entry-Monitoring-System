# Smart-Entry-Monitoring-System
An Arduino-based Smart Entry Monitoring System using IR sensors and a 16x2 I2C LCD to automatically count people entering and exiting a room.
# Smart Entry Monitoring System

## Overview

The Smart Entry Monitoring System is an Arduino-based embedded project that automatically counts the number of people entering and leaving a room using two IR sensors. The current count is displayed on a 16×2 I2C LCD.

This project demonstrates embedded programming, sensor interfacing, LCD communication, and real-time monitoring.

---

## Features

- Automatic people counting
- Entry and exit detection
- Real-time LCD display
- Prevents negative counting
- Simple and low-cost implementation

---

## Hardware Used

- Arduino UNO
- IR Sensor ×2
- 16×2 LCD (I2C)
- Breadboard
- Jumper Wires

---

## Software Used

- Arduino IDE
- Embedded C
- Wire Library
- LiquidCrystal_I2C Library

---

## Working Principle

1. The entry IR sensor detects a person entering.
2. The people count increases by one.
3. The exit IR sensor detects a person leaving.
4. The people count decreases by one.
5. The LCD continuously displays the current count.

---

## Circuit Connections

### Entry IR Sensor

OUT → Arduino D5

### Exit IR Sensor

OUT → Arduino D4

### LCD (I2C)

SDA → A4

SCL → A5

VCC → 5V

GND → GND

---

## Code

The complete Arduino program is available in:

```
Smart_Entry_Monitoring_System.ino
```

---

## Output

The LCD displays:

People in Room:
3

---

## Applications

- Classroom Monitoring
- Office Occupancy Tracking
- Shopping Mall Entry Counting
- Library Monitoring
- Laboratory Monitoring

---

## Future Improvements

- ESP32 IoT Integration
- Cloud Data Logging
- Mobile Application
- RFID Authentication
- Face Recognition
- Automatic Door Control

---

