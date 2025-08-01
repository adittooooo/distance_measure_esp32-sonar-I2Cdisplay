# Sonar Distance Meter with ESP32 & I2C 16x2 Display
---

## Author

**Aditto Ahsanul Kabir**  
- 📧 Email: akaditto.kushtia@gmail.com  
- 🐙 GitHub: [AdittoAhsanul](https://github.com/Adittooooo)  
- 💼 LinkedIn: [Aditto Ahsanul](https://www.linkedin.com/in/aditto-ahsanul/)  

If you find this project useful, don’t forget to ⭐ the repo!


A simple project that measures distance using an ultrasonic sensor and displays the result on an I2C 16x2 LCD using an ESP32. Ideal for learning basic sensor interfacing, I2C, and microcontroller I/O.

Features

- Distance measurement via ultrasonic (e.g., HC-SR04 / similar)
- Real-time display on I2C 16x2 LCD
- ESP32 as the controller
- Easy wiring and calibration
- Optional: Visual and/or serial logging for debugging

Hardware

- ESP32 development board  
- Ultrasonic distance sensor (e.g., HC-SR04, or specify your model)  
- I2C 16x2 LCD display (with PCF8574 backpack or equivalent)  
- Jumper wires  
- Breadboard / power supply
 
Wiring

### Ultrasonic Sensor (example HC-SR04)
| Sensor Pin | ESP32 Pin |
|------------|-----------|
| VCC        | 3.3V or 5V (depending on sensor spec) |
| GND        | GND       |
| TRIG       | GPIO xx (e.g., GPIO 5) |
| ECHO       | GPIO yy (use a voltage divider if needed for 5V echo) |

I2C LCD
| LCD Pin | ESP32 Pin |
|---------|-----------|
| SDA     | GPIO 21   |
| SCL     | GPIO 22   |
| VCC     | 3.3V      |
| GND     | GND       |

> Adjust GPIO numbers to whatever you physically used; document that here.

## 🧪 Software / Code

### Dependencies
- Arduino core for ESP32 (if using Arduino IDE / PlatformIO)
- `LiquidCrystal_I2C` (or compatible) library
- No extra library needed for HC-SR04 if using direct pulse timing, or you can use a helper library
