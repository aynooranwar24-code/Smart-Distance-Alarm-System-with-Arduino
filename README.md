# Smart-Distance-Alarm-System-with-Arduino
A Smart Distance Alarm System built using Arduino Uno, HC-SR04 Ultrasonic Sensor, I2C LCD Display, LEDs, and a Buzzer.

## Features
* Real-time distance measurement
* LCD distance display
* Green, Yellow, and Red LED indicators
* Dynamic buzzer alerts
* Multiple safety zones
* Beginner-friendly Arduino project

## Components Required
* Arduino Uno
* HC-SR04 Ultrasonic Sensor
* 16x2 I2C LCD Display
* Green LED
* Yellow LED
* Red LED
* Buzzer
* 220Ω Resistors
* Breadboard
* Jumper Wires

## Wiring

### HC-SR04
* VCC → 5V
* GND → GND
* TRIG → D9
* ECHO → D10

### LCD I2C
* VCC → 5V
* GND → GND
* SDA → A4
* SCL → A5

### LEDs
* Green LED → D2
* Yellow LED → D3
* Red LED → D4

### Buzzer
* Positive → D5
* Negative → GND

## How It Works
The ultrasonic sensor continuously measures the distance to nearby objects.
* Safe Zone (Green LED)
* Caution Zone (Yellow LED)
* Warning Zone
* Danger Zone (Red LED)

As an object gets closer, the buzzer beeps faster and the LCD displays the current system status.

## Arduino Code

Upload the provided Arduino sketch using the Arduino IDE.

## Project Demo

Watch the project demonstration video and test the system by moving an object toward the sensor.

## Author
ProjectVerse
## License
MIT License

