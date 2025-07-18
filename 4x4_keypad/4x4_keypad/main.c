#include <avr/io.h>
#include <util/delay.h>
void keypad_init(void);
char keypad_scanning(void);
int main(void)
{

	DDRA = 0xFF;  // Output for debugging/display
	keypad_init();
	while (1)
	{

		PORTA=keypad_scanning();
	}
}

void keypad_init(void)
{
		DDRF = 0x0F;  // PF0�PF3 as output (rows), PF4�PF7 as input (unused)
		DDRK = 0x00;  // PK0�PK3 as input (columns)
}

char keypad_scanning(void)
{
	const char keymap[4][4] = {
		{'1','2','3','A'},
		{'4','5','6','B'},
		{'7','8','9','C'},
		{'*','0','#','D'}
	};

	char key = 0; // Default value if no key is pressed

	for (int row = 0; row < 4; row++) {
		PORTF = (1 << row); //scan the row
		_delay_ms(1); // Allow time for signals to settle

		uint8_t col = PINK & 0x0F;

		if (col != 0) {
			for (int colIndex = 0; colIndex < 4; colIndex++) {
				if (col & (1 << colIndex)) {
					key = keymap[row][colIndex];
					_delay_ms(200); // Debounce delay AFTER key is detected
					return key;     // Return immediately after detecting one key
				}
			}
		}
	}

	return key; // Returns 0 if no key was pressed
}
