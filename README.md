# Touch Sensor LED Control using Arduino Mega

This repository contains code to control an LED using a touch sensor connected to an Arduino Mega board. When the touch sensor is activated, the LED lights up, and when the sensor is inactive, the LED turns off.

## Features
- Uses AVR registers for efficient hardware control.
- Simple and lightweight implementation.
- Demonstrates interfacing of a touch sensor and LED with an Arduino Mega board.

## Prerequisites
1. **Hardware Required**:
   - Arduino Mega board
   - Touch sensor module
   - LED
   - Resistors (as needed)
   - Connecting wires
   - Breadboard

2. **Software Required**:
   - Arduino IDE

## Circuit Diagram
1. Connect the touch sensor's output pin to `PB4` on the Arduino Mega.
2. Connect one end of the LED to `PB7` (with a resistor in series) and the other end to the ground.
3. Ensure proper power connections for the Arduino Mega, LED, and touch sensor module.

## How to Use
### Clone this Repository
To get started, clone this repository to your local machine:
```bash
git clone https://github.com/sushmagowda12/Controlling-an-LED-using-touch-sensor-in-Arduino-Mega.git
```

### Upload the Code
1. Open the `touch_sensor_led.ino` file in the Arduino IDE.
2. Select the correct board and port:
   - Go to **Tools > Board** and select `Arduino Mega`.
   - Go to **Tools > Port** and choose the port your Arduino Mega is connected to.
3. Upload the code by clicking on the **Upload** button.

### Testing the Circuit
1. Power on the Arduino Mega board.
2. Touch the sensor to activate it.
3. The LED connected to pin `PB7` will turn on when the sensor is touched and turn off when it is not.

## Code Overview
The code directly uses AVR register programming for efficient hardware control. Here's the functionality in brief:
- `DDRB` is configured to set `PB7` as output (for the LED) and `PB4` as input (for the touch sensor).
- The main loop continuously checks the state of `PB4`. If it's active, the LED on `PB7` is turned on; otherwise, it's turned off.

## License
This project is licensed under the MIT License. You are free to use, modify, and distribute this software. See the `LICENSE` file for details.

