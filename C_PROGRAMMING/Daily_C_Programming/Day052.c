/*
 Circular Buffer Insert
You are implementing a circular buffer using a C struct.

The buffer is defined as:

typedef struct {
    int buffer[100];   // Fixed memory for data
    int head;          // Write index
    int tail;          // Read index (not used here)
    int count;         // Number of elements in buffer
    int capacity;      // Maximum number of elements buffer can hold
} CircularBuffer;
Copy
 

Implement the function:

void insert_circular(CircularBuffer *cb, int value);
Copy
This function should:

Insert the value at the current head index in the buffer
Advance head with wrap-around using modulo
Increment count after insertion
If buffer is full (count == capacity), do not insert anything
Constraints

1 ≤ n ≤ 100
Insert up to k values (input)
You do not need to manage the reading logic in this problem
 
Example-1

Input: n = 5, values = [10, 20, 30, 40, 50]
Output: buffer = 10 20 30 40 50

Example-2

Input: n = 3, values = [1, 2, 3, 4]
Output: buffer = 1 2 3

(4 is ignored as the buffer is full)

*/
Code

#include <stdio.h>

typedef struct {
    int buffer[100];
    int head;
    int tail;
    int count;
    int capacity;
} CircularBuffer;

void insert_circular(CircularBuffer *cb, int value) {
    // Your logic using only pointer access
    if(cb->count!=cb->capacity){
    cb->buffer[cb->head] = value;
    cb->head = (cb->head+1) % 100;
    cb->count++;    
    }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    CircularBuffer cb = { .head = 0, .tail = 0, .count = 0, .capacity = n };

    for (int i = 0; i < k; i++) {
        int val;
        scanf("%d", &val);
        insert_circular(&cb, val);
    }

    for (int i = 0; i < cb.count; i++) {
        printf("%d", cb.buffer[i]);
        if(i < cb.count-1){
           printf(" "); 
        }
    }

    return 0;
}
/*
Solving Approach

Insert the value at the current head index in the buffer

Advance head with wrap-around using modulo

Increment count after insertion

If buffer is full (count == capacity), do not insert anything
*/


























