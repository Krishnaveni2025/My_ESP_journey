/*
Binary Search in Sorted Array
You are given a sorted array of n unsigned 8-bit integers (uint8_t) and a key to search. Your task is to:

Perform a binary search to find the key
Print the index of the key if found
If not found, print -1 
Important:

The array is guaranteed to be sorted in ascending order
Use only loop-based (iterative) binary search — no recursion

Example-1

Input: n = 6, arr = [5 10 15 20 25 30], key = 20
Output: 3

Example-2

Input: n = 5, arr = [2 4 6 8 10], key = 1
Output: -1

Example-3

Input: n = 4, arr = [100 150 200 250], key = 250
Output: 3
  */

#include <stdio.h>
#include <stdint.h>

int binary_search(uint8_t *arr, uint8_t n, uint8_t key) {
    // Your logic here
    // let array be 5,10,15,20,25,30 and key is 20
    int low = 0, high = n-1;//5
    while(low<=high){//t t
        int mid = (low + high) / 2;//2 3
        if(arr[mid]==key)//f t
            return mid;//3
        else if(arr[mid]<key)//t
            low = mid + 1;//1
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    uint8_t n, key;
    scanf("%hhu", &n);
    uint8_t arr[100];

    for (uint8_t i = 0; i < n; i++) {
        scanf("%hhu", &arr[i]);
    }
    scanf("%hhu", &key);

    int index = binary_search(arr, n, key);
    printf("%d", index);//3
    return 0;
}
/*
Solving Approach

🪜 Step-by-Step Solving Algorithm

InputRead n: number of elements in the array

Read arr[]: a sorted array of n unsigned 8-bit integers

Read key: the value to search for

Initialize Search BoundsSet low = 0 (start of array)

Set high = n - 1 (end of array)

Binary Search LoopWhile low <= high:Compute mid = (low + high) / 2

If arr[mid] == key: return mid (key found)

If arr[mid] < key: search right half → low = mid + 1

If arr[mid] > key: search left half → high = mid - 1

If Loop Ends Without MatchReturn -1 (key not found)

🧪 Example

Input:

n = 6  
arr = [5, 10, 15, 20, 25, 30]  
key = 20


Steps:

low = 0, high = 5 → mid = 2 → arr[2] = 15 < 20 → low = 3

low = 3, high = 5 → mid = 4 → arr[4] = 25 > 20 → high = 3

low = 3, high = 3 → mid = 3 → arr[3] = 20 == key → return 3

Output:

3


🔍 Notes

Time complexity: O(log n)

Works only on sorted arrays

Efficient for large datasets compared to linear search

*/
