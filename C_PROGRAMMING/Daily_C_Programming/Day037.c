/*
Calculate Array Sum Using Only Pointers
You are given an array of integers and its size n.
Using only pointer arithmetic:

Traverse the array
Find and print the sum of all elements.
❌ Do not use array indexing like arr[I].
✅ Only use pointer movements and dereferencing.

 

Example-1

Input: n = 5, arr = [1 2 3 4 5]
Output: 15


Example-2

Input: n = 4, arr = [10 20 30 40]
Output: 100


Example-3

Input: n = 3, arr = [-5 5 10]
Output: 10
  */
#include <stdio.h>

int calculate_sum(int *ptr, int n) {
    // Your logic here
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += *ptr;
        ptr++;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = calculate_sum(arr, n);
    printf("%d", result);

    return 0;
}
/*
- Start
- Declare an integer n
- Read n from user input
- Declare an integer array arr[100]
- For i from 0 to n-1, do:
- Read arr[i] from user input
- Call function calculate_sum(arr, n):
- Initialize sum ← 0
- Set pointer ptr ← arr
- For i from 0 to n-1, do:
- Add value pointed by ptr to sum
- Increment ptr to point to next element
- Return sum
- Store returned value in result
- Print result
- End
*/
