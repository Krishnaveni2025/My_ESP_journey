/*
Function Pointer Dispatch Table
You are building a simple math command handler. You are given two integers and a command code:

0 → Add
1 → Subtract
2 → Multiply
3 → Divide (integer division, assume non-zero)
 

Your task:

Create an array of function pointers, each pointing to one of the above operations.
Based on the command code, use the function pointer to invoke the correct operation.
Return the result.
 
❌ No if-else or switch-case
✅ Must use a function pointer array
 

Example-1

Input: a = 10, b = 5, command = 0
Output: 15


Example-2

Input: a = 20, b = 8, command = 1
Output: 12


Example-3

Input: a = 6, b = 3, command = 3
Output: 2

*/
#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }

int execute_command(int a, int b, int cmd) {
    // Your logic here using function pointer array
    // Array of function pointers
    int (*operations[4])(int, int) = { add, sub, mul, divide };

    // Direct dispatch using command code
    return operations[cmd](a, b);

}

int main() {
    int a, b, cmd;
    scanf("%d %d %d", &a, &b, &cmd);

    int result = execute_command(a, b, cmd);
    printf("%d", result);

    return 0;
}
/*
Solving Approach

Define an array of function pointers: ops[4] = {add, sub, mul, divide}

Use the command code as index: result = ops[cmd](a, b)

Return the result: return result
*/










