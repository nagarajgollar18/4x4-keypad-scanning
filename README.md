# 4x4 keypad scanning
# 4x4 Keypad Scanning with ATmega2560

This project demonstrates how to interface a **4x4 matrix keypad** with the **ATmega2560 microcontroller** using direct port manipulation in C (bare-metal programming). It includes keypad scanning logic and optional key mapping to ASCII characters.

## 🔧 Features

- 4x4 Keypad matrix interfaced using GPIO (PORTF and PORTK)
- Debounced key detection using polling method
- ASCII key mapping for all 16 keys (0–9, A–D, *, #)
- Output displayed via `PORTA` for debugging
- Clean modular structure with a separate key scan function

## 🧰 Hardware Used

- ATmega2560 development board
- 4x4 matrix keypad
- Pull-down or pull-up resistors (as needed)
- Jumper wires
- Power supply (5V)
- Optional: LEDs, logic analyzer, serial output, or LCD for visualization

## 🔌 Pin Connections

| Keypad Pin | Connected To | Direction |
|------------|--------------|-----------|
| Row 0–3    | PF0–PF3      | Output    |
| Col 0–3    | PK0–PK3      | Input     |
| Debug Out  | PORTA        | Output    |

*Note: Internal pull-ups can be enabled on PORTK if no external resistors are used.*

## 📂 File Structure
4x4-keypad-scanning/
├── main.c # Main code with keypad logic
├── README.md # Project documentation
└── Makefile (optional)


## 🧠 How It Works

- The microcontroller scans one row at a time by driving it HIGH.
- Then it checks which column inputs are HIGH, indicating which key was pressed.
- A debounce delay is added to avoid false triggers.
- Detected key is mapped using a 2D character array and output via `PORTA`.

## 🚀 Getting Started

1. Clone the repo:
   ```bash
   git clone https://github.com/nagarajgollar18/4x4-keypad-scanning.git
   cd 4x4-keypad-scanning

Open main.c in your IDE (e.g., Atmel Studio, PlatformIO, AVR-GCC).

Connect your hardware as described above.

Compile and flash the code to the ATmega2560 board.

🧪 Output
When a key is pressed, its ASCII value is sent to PORTA.

You can connect LEDs or check PORTA via logic analyzer or serial monitor (if extended).

🧱 Future Improvements
Add USART serial output to display key via terminal

Add support for keypad interrupts

Port to other microcontrollers like STM32 or ESP32

Add LCD display support

📜 License
This project is open-source and free to use under the MIT License.

🙋‍♂️ Author
Nagaraj Gollar
Embedded Systems Enthusiast
