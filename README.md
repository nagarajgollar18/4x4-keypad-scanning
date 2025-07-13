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


