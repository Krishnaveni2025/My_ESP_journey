/*
Find Kth Smallest and Kth Largest Element
You are given an array of n unsigned 8-bit integers (uint8_t) and a number k. Your task is to:

Find the k-th smallest and k-th largest values from the array
Output both values in a single line: smallest largest
Important Notes:

Assume: 1 ≤ k ≤ n
Do not use built-in sort functions
Use a simple sorting approach (bubble/selection) and pick elements by index
 
Example-1

Input: n = 5, arr = [10 3 5 2 7], k = 2
Output: 3 7

Example-2

Input: n = 4, arr = [8 1 9 6], k = 1
Output: 1 9

Example-3

Input: n = 3, arr = [10 20 30], k = 3
Output: 30 10
*/


#include <stdio.h>
#include <stdint.h>

void sort_array(uint8_t *arr, uint8_t n) {
    for (uint8_t i = 0; i < n - 1; i++) {
        uint8_t min_idx = i;
        for (uint8_t j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap arr[i] and arr[min_idx]
        uint8_t temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

void find_kth_elements(uint8_t *arr, uint8_t n, uint8_t k, uint8_t *smallest, uint8_t *largest) {
    sort_array(arr, n);
    *smallest = arr[k - 1];     // k-th smallest
    *largest = arr[n - k];      // k-th largest
}
int main() {
    uint8_t n, k;
    scanf("%hhu", &n);
    uint8_t arr[100];
    
    for (uint8_t i = 0; i < n; i++) {
        scanf("%hhu", &arr[i]);
    }

    scanf("%hhu", &k);

    uint8_t smallest, largest;
    find_kth_elements(arr, n, k, &smallest, &largest);

    printf("%hhu %hhu", smallest, largest);
    return 0;
}
/*
Solving Approach

1.Sort the array in ascending order using selection sort.

2.Pick elements by index:

k-th smallest = arr[k - 1]

k-th largest = arr[n - k]
*/
