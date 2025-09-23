/*
Find Duplicate in Range 0 and n-1
You are given an array of n integers. Each number is guaranteed to be in the range [0, n-1], and exactly one number is repeated once. Write a program to find and print the repeated number.

You cannot modify the array and cannot use extra memory (O(1) space).


Example-1

Input: n = 5 , arr = [0 1 2 3 2]
Output: 2

Example-2

Input: n = 6, arr = [5 4 3 2 1 3]
Output: 3

 

Example-3

Input: n = 4, arr = [1 0 2 0]
Output: 0
*/
Code

#include <stdio.h>

int find_duplicate(int arr[], int n) {
    int freq[100] = {0};  // assuming max value < 100

    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 1)
            return arr[i];  // found duplicate
        freq[arr[i]]++;
    }

    return -1;  // no duplicate found
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int result = find_duplicate(arr, n);
    printf("%d\n", result);
    return 0;
}
/*
Solving Approach



Here’s a clean algorithm-style breakdown to find a repeated element in an array of size n, where elements are in the range [0, n-1] and exactly one number is repeated once:

🔁 Algorithm: Find Duplicate in Array

Input: Array arr[] of size n
Output: The repeated number

✅ Step 1: Initialize two pointers

Let slow = arr[0]
Let fast = arr[0]


✅ Step 2: Detect cycle (Floyd’s Tortoise and Hare)

Repeat:
    slow = arr[slow]
    fast = arr[arr[fast]]
Until slow == fast


✅ Step 3: Find entry point of cycle (duplicate)

Set slow = arr[0]
Repeat:
    slow = arr[slow]
    fast = arr[fast]
Until slow == fast

Return slow as the duplicate


*/
