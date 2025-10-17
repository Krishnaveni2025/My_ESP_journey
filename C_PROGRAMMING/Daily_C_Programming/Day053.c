/*
Circular Buffer Read
You are working with a pre-filled circular buffer of 10 elements.

The buffer is structured as:

typedef struct {
    int buffer[10];
    int head;        // Write pointer
    int tail;        // Read pointer
    int count;       // Number of unread bytes
    int capacity;    // Always 10
} CircularBuffer;
Copy
Your Task

Implement this function:

void read_bytes(CircularBuffer *cb, int n);
Copy
This function should:

Read and print n values from the buffer
If there are fewer than n values, print "NULL" in place of missing ones
Advance the tail properly with wrap-around
Decrease count after each successful read
After reading, print the new value of the tail index on a new line

 
Example-1

Input: n = 4
Initial Buffer:
buffer = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]
head = 3
tail = 7
count = 6
Output:
80 90 100 10
Tail: 1

 

Example-2

Input: n = 5
Same setup, but count = 2
Output:
80 90 NULL NULL NULL
Tail: 9
  */


#include <stdio.h>

typedef struct {
    int buffer[10];
    int head;
    int tail;
    int count;
    int capacity;
} CircularBuffer;

void read_bytes(CircularBuffer *cb, int n) {
    for (int i = 0; i < n; i++) {
        if (cb->count > 0) {
            printf("%d", cb->buffer[cb->tail]);
            cb->tail = (cb->tail + 1) % cb->capacity;
            cb->count--;
        } else {
            printf("NULL");
        }

        if (i < n - 1) {
            printf(" ");  // Add space only between values
        }
    }
    printf("\nTail: %d\n", cb->tail);
}
int main() {
    CircularBuffer cb = {
        .buffer = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100},
        .head = 3,
        .tail = 7,
        .count = 6,
        .capacity = 10
    };

    int n;
    scanf("%d", &n);
    read_bytes(&cb, n);

    return 0;
}
/*
Solving Approach

Read and print n values from the buffer

If there are fewer than n values, print "NULL" in place of missing ones

Advance the tail properly with wrap-around

Decrease count after each successful read

After reading, print the new value of the tail index on a new line



*/


