
Bit Field Operation
Bit Field Operation
In embedded systems, a single register often contains multiple fields, each controlling a different function. These fields are packed into specific bit positions.

Example: A 16-bit Control Register

Bits	Field Name
15 – 12	Mode
11 – 8	Speed
7 – 0	Flags
To work with them, we need two core skills:

Extracting a field (reading the bits at a specific position)
Replacing or updating that field (without touching other bits)
 
This is done using bit masking and bit shifting.

To extract Speed field (bits 8 to 11):

uint16_t speed = (reg >> 8) & 0x0F;
Copy
To update the Mode field (bits 12 to 15):

reg &= ~(0x0F << 12);         // Clear Mode bits
reg |= ((new_mode & 0x0F) << 12); // Set new Mode
Copy
Key Operations
Extract a bit field

value = (reg >> position) & mask;
Copy
Replace a bit field

/* Where mask is a binary mask for the number of bits in the field.
E.g., For 3-bit field → mask = 0x07 */


reg &= ~(mask << position);            // Clear the bits (mask= high bits)
reg |= ((new_value & mask) << position); // Set the new bits
Copy
Relevance in Embedded/Firmware
Most hardware registers (UART, Timer, ADC, SPI) use bit fields to define different parameters.
Peripheral setup often involves:
Extracting status bits (e.g., data ready, error)
Modifying specific bits (e.g., set baud rate, enable TX)
It’s unsafe to overwrite the entire register — instead, we update only the target bits.
This is why precise extraction and modification using bit masks is a core embedded skill.
