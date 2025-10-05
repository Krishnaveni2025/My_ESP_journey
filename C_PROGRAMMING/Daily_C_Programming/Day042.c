/*
State Machine Using Function Pointers
You are simulating a system boot-up sequence using function pointers. 

There are 4 states:

void state_init()    { printf("Init"); }
void state_load()    { printf("Load"); }
void state_execute() { printf("Execute"); }
void state_exit()    { printf("Exit"); }
Copy code
Your Task

Implement the function run_state_sequence(int start)
It should execute three states in sequence, starting from the given start index:
If start = 1 → print Load, Execute, Exit
If start = 3 → wrap around → print Exit, Init, Load
✅You must use a function pointer array
❌ Do not use if or switch-case
 
Constraints

start ∈ [0, 3]
Always execute exactly three states
Output each state on a new line

Example-1

Input: 0
Output:
Init
Load
Execute


Example-2

Input: 2
Output:
Execute
Exit
Init


Example-3

Input: 3
Output:
Exit
Init
Load

## 🧠 General Approach to Function Pointer Dispatch Problems

### 🔹 1. **Understand the Domain**
- What are the **states**, **commands**, or **operations**?
- How many are there? Are they fixed or dynamic?
- What does each one do?

> Example: Boot-up sequence with 4 states: Init, Load, Execute, Exit.

---

### 🔹 2. **Define Each Action as a Function**
- Write each state or command as a separate function with a consistent signature.

```c
void state_init()    { printf("Init\n"); }
void state_load()    { printf("Load\n"); }
...
```

---

### 🔹 3. **Create a Function Pointer Array**
- Store all functions in an array indexed by their logical order.

```c
void (*states[4])() = { state_init, state_load, state_execute, state_exit };
```

---

### 🔹 4. **Use Indexing + Modulo for Wraparound**
- Use a loop to iterate through the required number of steps.
- Use `(start + i) % total_states` to wrap around.

```c
for (int i = 0; i < 3; i++) {
    states[(start + i) % 4]();
}
```

---

### 🔹 5. **Avoid Branching**
- No `if`, no `switch`. Let the array and indexing do the work.

---

## 🧪 Debugging Tips

- Print the index before calling the function to trace execution.
- Use `%p` to print function addresses if needed.
- Validate `start` range before using it.

---

## 🧰 Where This Applies

- **Embedded systems**: ISR tables, peripheral command handlers.
- **Protocol parsers**: Handling message types.
- **UI state machines**: Menu navigation, input modes.
- **Game engines**: Entity behavior dispatch.
*/

#include <stdio.h>

void state_init()    { printf("Init\n"); }
void state_load()    { printf("Load\n"); }
void state_execute() { printf("Execute\n"); }
void state_exit()    { printf("Exit\n"); }

// Your logic here
void run_state_sequence(int start) {
    // Implement using function pointer array
   
    void (*sequence[4])() = {state_init,state_load, state_execute,state_exit};
    for(int i=0; i<3; i++)
    {
        sequence[((start+i)%4)]();
    }
    
}

int main() {
    int start;
    scanf("%d", &start);
    run_state_sequence(start);
    return 0;
}


