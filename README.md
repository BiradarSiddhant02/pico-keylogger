# Raspberry Pi Pico Keylogger Project

This project utilizes the Raspberry Pi Pico microcontroller to create a simple keylogger that connects to a computer via USB. The Pico reads characters from the computer's serial monitor and lights up LEDs based on the ASCII values of the entered letters.

## Table of Contents

- [Features](#features)
- [Prerequisites](#prerequisites)
- [Setup](#Setup)
- [Getting Started](#getting-started)
- [License](#license)

## Features

- Connects to a computer via USB.
- Reads characters from the serial monitor.
- Lights up LEDs based on the ASCII values of entered letters.

## Prerequisites

Before you begin, ensure you have the following:

- Raspberry Pi Pico board
- USB cable
- [Raspberry Pi Pico C/C++ SDK](https://github.com/raspberrypi/pico-sdk)

## Setup

- [Windows](https://www.raspberrypi.com/news/raspberry-pi-pico-windows-installer)
- [Linux](https://www.raspberrypi.com/documentation/microcontrollers/c_sdk.html)

## Getting Started

1. Clone the repository:

   ```bash
   git clone https://github.com/BiradarSiddhant02/pico-keylogger.git

2. Pin connections:

- GP2 - LED_1
- GP3 - LED_2
- GP4 - LED_3
- GP5 - LED_4
- GP6 - LED_5
- GP7 - LED_6
- GP8 - LED_7
- GP9 - LED_8

- LED1 is the LSB and LED8 is the MSB

3. Build the binaries and the .uf2 file

4. Open device manager and check the port number the pico is connected at

5. Open [PuTTY](https://www.putty.org/) and connect to the port with a baud rate of 115200

## License

This project is licensed under the [MIT License](LICENSE) - see the [LICENSE](LICENSE) file for details.

