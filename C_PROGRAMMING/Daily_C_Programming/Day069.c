/*
Sort an Array in Descending Order
You are given an array of n unsigned 8-bit integers (uint8_t). Your task is to:

Sort the array in descending order using the bubble sort algorithm
Print the sorted array as space-separated values
Do not use any built-in sort functions. Use only loops and comparisons.

Example-1

Input: n = 5, arr = [10 3 5 2 7]
Output: 10 7 5 3 2

Example-2

Input: n = 3, arr = [0 128 255]
Output: 255 128 0

Example-3

Input: n = 1, arr = [42]
Output: 42
  */


#include <stdio.h>
#include <stdint.h>

void bubble_sort_desc(uint8_t *arr, uint8_t n) {
    // Your logic here
    for (uint8_t i = 0; i < n; i++) {
        for(uint8_t j = 0; j < n-i-1; j++)
        {
            if(arr[j]<arr[j+1])
            {
                uint8_t temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    uint8_t n;
    scanf("%hhu", &n);
    uint8_t arr[100];

    for (uint8_t i = 0; i < n; i++) {
        scanf("%hhu", &arr[i]);
    }

    bubble_sort_desc(arr, n);

    for (uint8_t i = 0; i < n; i++) {
        printf("%hhu", arr[i]);
        if(i < n-1){
            printf(" ");
        }
    }

    return 0;
}
/*
Solving Approach

Loop i from 0 to n - 2:

Loop j from 0 to n - i - 2:

If arr[j] < arr[j + 1], swap them

After each outer loop pass, the smallest unsorted element bubbles to the end

Repeat until the array is sorted

*/
