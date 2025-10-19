/*
Implement Stack Using Array with Push and Pop Operations
In embedded systems where dynamic memory is not available, stacks are typically implemented using static arrays and index tracking.

Your task is to:

Implement a stack using a fixed-size array
Support 2 operations:
 
push x → Push value x into the stack
pop → Pop and print the top value from the stack
Print "Stack Overflow" if trying to push when full
Print "Stack Underflow" if trying to pop when empty

Example Input Format

First line: n (number of operations)

Next n lines: push x or pop

 

Example-1

Input:
5  
push 10  
push 20  
pop  
pop  
pop

Output:
20  
10  
Stack Underflow

Example-2

Input:
4  
pop  
push 5  
pop  
pop

Output:
Stack Underflow  
5  
Stack Underflow
*/
#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define MAX 10

void process_stack(int n) {
    int stack[MAX];
    int top = -1;

    char line[20];
    for (int i = 0; i < n; i++) {
        fgets(line, sizeof(line), stdin);

        if (strncmp(line, "push", 4) == 0) {
            int x;
            sscanf(line + 5, "%d", &x);  // Read value after "push "
            if (top + 1 >= MAX) {
                printf("Stack Overflow\n");
            } else {
                top++;
                stack[top] = x;
            }
        } else if (strncmp(line, "pop", 3) == 0) {
            if (top < 0) {
                printf("Stack Underflow\n");
            } else {
                printf("%d\n", stack[top]);
                top--;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    getchar(); // Consume newline after number

    process_stack(n);
    return 0;
}
/*
Solving Approach

Implement a stack using a fixed-size array

Support 2 operations:
 push x → Push value x into the stack

pop → Pop and print the top value from the stack

Print "Stack Overflow" if trying to push when full

Print "Stack Underflow" if trying to pop when empty
*/














