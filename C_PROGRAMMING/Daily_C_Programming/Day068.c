/*
 Sort an Array in Ascending Order
You are given an array of n unsigned 8-bit integers (uint8_t). Your task is to:

Sort the array in ascending order
Print the sorted array as space-separated values 
Do not use any standard library sort functions.

Use only loop and comparison logic (firmware-safe implementation).


Example-1

Input: n = 5, arr = [10 3 5 2 7]
Output: 2 3 5 7 10

Example-2

Input: n = 3, arr = [255 0 128]
Output: 0 128 255

Example-3

Input: n = 1, arr = [42]
Output: 42*/

#include <stdio.h>
#include <stdint.h>

void bubble_sort(uint8_t *arr, uint8_t n) {
    for (uint8_t i = 0; i < n - 1; i++) {
        for (uint8_t j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                uint8_t temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
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

    bubble_sort(arr, n);

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

If arr[j] > arr[j + 1], swap them

After each outer loop pass, the largest unsorted element bubbles to the end

Repeat until the array is sorted

*/
