/*
Find Minimum and Maximum in an Array
You are given an array of n unsigned 8-bit integers (uint8_t). Your task is to:

Find the minimum and maximum values in the array
Print both values in a single line: first the minimum, then the maximum
 
Example-1

Input: n = 5, arr = [10 20 5 30 15]
Output: 5 30
 

Example-2

Input: n = 3, arr = [255 0 128]
Output: 0 255
 

Example-3

Input: n = 1, arr = [42]
Output: 42 42
  */
Code

#include <stdio.h>
#include <stdint.h>

void find_min_max(uint8_t *arr, uint8_t n, uint8_t *min, uint8_t *max) {
    // Your logic here
    *min = arr[0];
    *max = arr[0];
    for (uint8_t i = 1; i < n; i++) {
        if(arr[i]<*min)
        {
            *min = arr[i];
        }
        if(arr[i]>*max)
        {
            *max = arr[i];
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

    uint8_t min_val, max_val;
    find_min_max(arr, n, &min_val, &max_val);

    printf("%hhu %hhu", min_val, max_val);
    return 0;
}
/*
Solving Approach

Initialize both *min and *max to the first element.

Loop through the array from index 1 to n - 1.

For each element:If it's less than *min, update *min.

If it's greater than *max, update *max.

 After the loop, *min and *max hold the correct values.
*/


