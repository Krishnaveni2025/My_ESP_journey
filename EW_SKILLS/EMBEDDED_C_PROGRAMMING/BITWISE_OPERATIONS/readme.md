# Bitwise Operations

Bitwise operations allow direct manipulation of individual bits within a byte, word, or register. They are essential in embedded systems for controlling MCU peripherals without disturbing unrelated bits.

## Bitwise Operators

| Operator | Name | Purpose |
|----------|------|---------|
| `\|` | OR | Set a bit |
| `&` | AND | Clear or check a bit |
| `^` | XOR | Toggle (invert) a bit |
| `~` | NOT | Flip all bits (1 → 0, 0 → 1) |
| `<<`, `>>` | Shift | Move bit positions left or right |

## Common Bit-Masking Patterns

```c
reg |= (1 << n);     // Set bit n
reg &= ~(1 << n);    // Clear bit n
reg ^= (1 << n);     // Toggle bit n
if (reg & (1 << n))  // Check if bit n is set
```

These operations target and modify only specific bits, leaving others untouched.

## 8-bit Visualization Example

| Bit | 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
|-----|---|---|---|---|---|---|---|---|
| Value | 128 | 64 | 32 | 16 | 8 | 4 | 2 | 1 |

### Operations on Example Bits

```c
// Set bit 3
reg |= (1 << 3);

// Clear bit 6
reg &= ~(1 << 6);

// Check if bit 0 is set
if (reg & (1 << 0))

// Toggle bit 3
reg ^= (1 << 3);
```

## 32-bit Register Usage

Bitwise techniques work identically for `uint32_t` types, commonly used in 32-bit MCUs for status and configuration registers.

```c
// Set bit 23 in a 32-bit control register
ctrl_reg |= (1U << 23);
```

## Common Pitfalls & Best Practices

### ❌ Forgetting Parentheses
Operator precedence matters. Always wrap bit shift operations:
```c
✅ reg |= (1 << 4)        // Correct
❌ reg |= 1 << 4 & 0xF    // Incorrect: wrong precedence
```

### ❌ Using Signed Integer Types
Never use `int` for register operations—use `uint8_t`, `uint16_t`, or `uint32_t`:
```c
// Undefined behavior: MSB used for sign in signed types
int bad = 1 << 31;

// Safe: unsigned types only
uint32_t good = 1U << 31;
```

### ❌ Shifting Beyond Data Type Width
```c
// Undefined: shifting >= data type width
uint32_t x = 1 << 32;  // ❌ Undefined behavior

// Safe: shift within limits (0-31 for 32-bit)
uint32_t y = 1 << 23;  // ✅ Correct
```

### ❌ Accidentally Overwriting Registers
```c
// WRONG: overwrites entire register
reg = (1 << 2);

// RIGHT: sets only the 2nd bit
reg |= (1 << 2);
```

### ❌ Carelessly Toggling Flags
Be cautious when toggling—ensure you intend to flip the bit:
```c
// May unintentionally clear a set flag
reg ^= (1 << n);  // Use only when you understand the current state
```

## Relevance in Embedded/Firmware

- **Peripheral Control**: MCU peripherals (timers, GPIOs, UART, ADC, interrupts) are controlled via register bits
- **Safe Modifications**: Bit masking ensures changes to specific bits without overwriting unrelated fields
- **Common Uses**:
  - Flag management
  - Control masks
  - Interrupt status checks
  - Power and clock configuration
  - Register initialization

---

**Tip**: Always use unsigned integer types (`uint*_t`) for register operations to avoid sign-extension issues during bit shifts.
