/*
Find Top 3 Largest Values in an Array
You are given an array of n unsigned 8-bit integers (uint8_t). Your task is to:

Find the top 3 largest values from the array
Print the values in descending order
If n < 3, print all available values in descending order
Do not use any built-in sort functions. Use simple logic.


Example-1

Input: n = 6, arr = [10 90 20 80 70 30]
Output: 90 80 70

Example-2

Input: n = 2, arr = [5 200]
Output: 200 5

Example-3

Input: n = 3, arr = [1 2 3]
Output: 3 2 1
*/


#include <stdio.h>
#include <stdint.h>

void find_top_3(uint8_t *arr, uint8_t n) {
    // Simple selection sort for top 3
    for (uint8_t i = 0; i < 3 && i < n; i++) {
        uint8_t max_idx = i;
        for (uint8_t j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        // Swap arr[i] and arr[max_idx]
        uint8_t temp = arr[i];
        arr[i] = arr[max_idx];
        arr[max_idx] = temp;
    }

    // Print top 3 elements
    for (uint8_t i = 0; i < 3 && i < n; i++) {
        printf("%hhu", arr[i]);
        if (i < 2 && i < n - 1) {
            printf(" ");
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

    find_top_3(arr, n);
    return 0;
}
/*
Solving Approach

Partial Selection Sort:Loop i from 0 to 2 (or n-1 if n < 3)

In each pass, find the maximum element from i to n-1 and swap it to position i

Print the first 3 elements, which are now the top 3 largest values in descending order



*/
