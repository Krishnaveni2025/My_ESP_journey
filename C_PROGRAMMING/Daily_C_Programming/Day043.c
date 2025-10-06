/*
Simulate memcpy function Using Pointer Walk
You are given two memory buffers:

A source array of n integers
A destination array of the same size (pre-allocated, uninitialized)
Your task:

Implement the function simulate_memcpy() to copy all elements from the source to destination
✅ You must use pointer arithmetic only
❌ Do not use array indexing (arr[i])
 

Constraints

1 ≤ n ≤ 100
Data type: int
 
Example-1

Input: n = 5, source = [10, 20, 30, 40, 50]
Output: dest = 10 20 30 40 50


Example-2

Input: n = 3, source = [-5, 0, 5]
Output: dest = -5 0 5
SOLVING APPROACH
- Initialize two pointers: one to source, one to destination.
- Use a loop: while (n--) *dest++ = *src++; — copy and advance both pointers.
*/


#include <stdio.h>
void simulate_memcpy(int *dest, int *src, int n) {
    // Your logic here
   // int *d = dest;
    //int *s = src;
    while(n--)
    {
       // *d++ = *s++;
       *dest++ = *src++;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int src[100], dest[100];

    for (int i = 0; i < n; i++) {
        scanf("%d", &src[i]);
    }

    simulate_memcpy(dest, src, n);

    for (int i = 0; i < n; i++) {
        printf("%d", dest[i]);
        if(i < n-1){
           printf(" "); 
        }
    }

    return 0;
}
/*
Scan Memory for Three Consecutive Increasing Values
You are given a block of memory (as an integer array) of size n.

Your task is to write a function that scans the memory using pointers and detects the first occurrence of three consecutive increasing integers — for example: [4, 5, 6] or [10, 11, 12].

Return the starting index of the first such pattern. If no such pattern is found, return -1.You must use pointer logic only, not array indexing.
 

Example-1

Input: n = 8, memory = [2, 4, 5, 6, 9, 11, 12, 14]
Output: 1


Example-2

Input: n = 6, memory = [10, 20, 30, 40, 50, 60]
Output: -1


Example-3

Input: n = 7, memory = [1, 2, 3, 5, 6, 7, 8]
Output: 0*/
Code

#include <stdio.h>

int find_pattern(int *mem, int n) {
    int *p = mem;
    for (int i = 0; i <= n - 3; i++) {
        if (*(p + 1) == *p + 1 && *(p + 2) == *(p + 1) + 1)
            return i;
        p++;
    }
    return -1;
}

int main() {
    int n, arr[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int res = find_pattern(arr, n);
    printf("%d", res);

    return 0;
}
/*
Solving Approach

Walk through memory with a pointer: Start from the first element and check each group of three consecutive integers using pointer arithmetic.

Check the pattern: At each step, verify if *(p+1) == *p + 1 and *(p+2) == *(p+1) + 1. If true, return the current index; else, continue.
*/

