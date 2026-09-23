# C++ References for Embedded Systems

A **reference** is an alias for an existing object. It provides direct access to that object without pointer-style syntax and is useful when an API requires a valid object rather than an optional one.

> A reference must be initialized when it is declared and cannot later be reseated to refer to another object.

## 1. Basic references

```cpp
int value = 10;
int& ref = value;       // ref aliases value

ref = 20;               // value is now 20
```

The reference does not create a second `int`; it provides another name for the same object.

## 2. Pass by reference

A non-const reference allows a function to modify the caller's object:

```cpp
void update(int& value) {
    value = 50;
}

int number = 10;
update(number);         // number is now 50
```

The call is concise because the function receives the object directly:

| Pointers | References |
| --- | --- |
| `void update(int* value)` | `void update(int& value)` |
| `*value = 50;` | `value = 50;` |
| `update(&number);` | `update(number);` |

Use a reference when the argument is required and must always refer to a valid object. Use a pointer when `nullptr` is a meaningful value or when the function needs pointer arithmetic.

## 3. Const references

A `const` reference is an efficient way to pass a large object without copying it while preventing modification through the parameter:

```cpp
struct SensorData {
    float x;
    float y;
    float z;
    uint32_t timestamp;
};

void processData(const SensorData& data) {
    // data.x = 0.0f;   // Compile-time error
    printf("%.2f", data.x);
}
```

This is especially useful for read-only configuration data, sensor readings, buffers, and driver objects.

## 4. References and arrays

Returning a reference can provide direct, writable access to an existing array element:

```cpp
int& elementAt(int (&buffer)[10], std::size_t index) {
    return buffer[index];
}
```

The returned reference aliases the selected element. It is not a temporary, so assigning through it updates the original array.

## 5. Returning references safely

Never return a reference to a local variable. A local object is destroyed when the function returns, leaving a dangling reference:

```cpp
// Unsafe: do not use
int& invalid() {
    int local = 10;
    return local;
}
```

A reference may safely refer to an object whose lifetime extends beyond the function call, such as a caller-owned object, a static object, or an element of a caller-owned array.

## 6. Embedded-systems applications

### Driver APIs

References provide clear syntax for required driver objects and avoid copying them:

```cpp
void logMessage(UART_Driver& uart, const char* message) {
    uart.send(message);
}
```

Use `const UART_Driver&` when the function only reads the driver object.

### Range-based loops

A reference avoids copying each element and can update the original buffer:

```cpp
for (uint8_t& byte : rx_buffer) {
    byte = 0;
}
```

Use `const uint8_t&` when iteration must be read-only, or a value when the element is small and copying is intentional.

### Operator overloading

Reference return types are commonly used by operators such as `operator[]` and assignment operators so that operations can work with the original object:

```cpp
buffer[index] = value;
```

## 7. Pointer versus reference

| Feature | Pointer (`T*`) | Reference (`T&`) |
| --- | --- | --- |
| Can be null | Yes | No valid null reference exists |
| Must be initialized | No | Yes |
| Can be reseated | Yes | No |
| Access syntax | `*pointer` or `pointer->member` | `reference` or `reference.member` |
| Supports pointer arithmetic | Yes | No |
| Best suited to | Optional objects, arrays, low-level memory | Required objects and aliases |

A reference should not be implemented by dereferencing a possibly null pointer. Creating or using such a reference results in undefined behavior.

## 8. Practical rules

- Use `T&` when a function must modify a required caller-owned object.
- Use `const T&` for efficient read-only access to larger objects.
- Use `T*` when `nullptr` is meaningful or pointer arithmetic is required.
- Do not return references to local variables.
- Do not use references to bit-fields; bit-fields do not have independently addressable storage.
- Include the appropriate fixed-width headers, such as `<cstdint>`, when portability matters.
- Keep object lifetimes in mind: a reference is only valid while the object it aliases remains alive.
