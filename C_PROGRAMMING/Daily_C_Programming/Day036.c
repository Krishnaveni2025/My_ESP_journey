/*
Find Maximum Element Using Pointer Walk
You are given an array of integers and its size n.
Using only pointer arithmetic:

Traverse the array
Find and print the maximum element in the array.
❌ Do not use array indexing like arr[I].
✅ Only use pointer movements and dereferencing.
 

Example-1

Input: n = 5, arr = [10 25 5 30 15]
Output: 30


Example-2

Input: n = 4, arr = [1 1 1 1]
Output: 1


Example-3

Input: n = 3, arr = [-5 -2 -9]
Output: -2
Algorithm – Find Maximum Using Pointers
- Input the size of the array n and the array elements using pointer arithmetic (arr + i).
- Initialize a pointer ptr to the start of the array.
- Set max = *ptr (first element).
- Traverse the array using a loop:
- Increment the pointer: ptr++
- Compare *ptr with max
- If *ptr > max, update max
- After traversal, print max.
*/

Code

#include <stdio.h>

int find_max_element(int *ptr, int n) {
    // Your logic here
    int max = *ptr;
    for(int i=1;i<n;i++)
    {
        ptr++;
        if(*ptr>max)
        {
            max = *ptr;
        }
    }
    return max;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = find_max_element(arr, n);
    printf("%d", result);

    return 0;
}


*/
