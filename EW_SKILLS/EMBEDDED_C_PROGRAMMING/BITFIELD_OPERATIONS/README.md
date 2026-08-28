# Bit Field Operations

Registers in embedded systems often pack multiple control or status fields into the same integer. Working with those fields safely means extracting and updating only the bits that belong to a specific field without disturbing the rest of the register.

## Example: 16-bit Control Register

| Bits     | Field Name |
|----------|------------|
| 15 – 12  | Mode       |
| 11 – 8   | Speed      |
| 7 – 0    | Flags      |

### Extracting a field
To read the 4-bit Speed field (bits 8..11):

```c
uint16_t speed = (reg >> 8) & 0x0F; // mask = 0b1111 = 0x0F
```

General form:

```c
value = (reg >> position) & mask;
```

Where `position` is the index of the least-significant bit in the field and `mask` has `width` low bits set (e.g. for width=4 mask=0x0F).

### Replacing/updating a field
To update the 4-bit Mode field (bits 12..15) without changing other bits:

```c
// Clear Mode bits
reg &= ~(0x0F << 12);
// Set new Mode (keep only low 4 bits of new_mode)
reg |= ((new_mode & 0x0F) << 12);
```

General steps:
1. Clear the target bits by ANDing with the inverse of the field mask shifted into position.
2. OR in the new value masked and shifted into position.

```c
/* Where mask is the low-bit mask for the field width. Example: 3-bit field -> mask = 0x07 */
reg &= ~(mask << position);                 // Clear the field
reg |= ((new_value & mask) << position);   // Set the new value
```

## Helpful macros

Use macros to reduce duplication and avoid mistakes:

```c
#include <stdint.h>

#define FIELD_MASK(width)   ((1U << (width)) - 1U)
#define GET_FIELD(reg,pos,width)   (((reg) >> (pos)) & FIELD_MASK(width))
#define SET_FIELD(reg,pos,width,val) \
    do {                              \
        (reg) = ((reg) & ~(FIELD_MASK(width) << (pos))) \
                | (((uint32_t)(val) & FIELD_MASK(width)) << (pos)); \
    } while (0)
```

Usage example:

```c
uint16_t reg = 0;
uint16_t speed = GET_FIELD(reg, 8, 4);
SET_FIELD(reg, 12, 4, new_mode);
```

## Practical notes and best practices

- Use fixed-width types (`uint8_t`, `uint16_t`, `uint32_t`) for clarity and portability.
- Mark hardware-mapped registers `volatile` to prevent compiler optimizations from removing reads/writes:
  `volatile uint16_t * const REG = (volatile uint16_t *)0x40001000;`
- Be careful with read-modify-write races on registers shared with interrupts or other masters. Disable interrupts or use atomic operations when needed.
- Avoid undefined behavior: shifting by >= width of the type is undefined. Use safe widths and macros.
- When fields cross byte boundaries, the same bit arithmetic still applies — bit positions are independent of byte layout in C arithmetic.
- Prefer macros or inline functions so the mask/position logic is centralized and easier to review.

## Why this matters in embedded/firmware
Most peripheral registers (UART, Timers, ADC, SPI, etc.) use bit fields to pack multiple settings and status bits into a single register. Overwriting an entire register risks changing unrelated bits (e.g., clearing an enable or status flag). Learning to extract and modify only the targeted bits using masks and shifts is an essential embedded programming skill.

---

References and further reading:
- Datasheet/register descriptions for your MCU/peripheral
- MISRA/C and coding standards for safe integer usage
