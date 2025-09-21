/*
Reverse an Array In-Place
You are given an array of integers and its length. Write a function to reverse the array in-place, without using another array.

Example-1

Input:  n = 5, arr = [1 2 3 4 5]  
Output: [5 4 3 2 1]

Example-2

Input:  n = 4, arr = [10 20 30 40]  
Output: [40 30 20 10]
  */
Code

#include <stdio.h>

void reverse_array(int arr[], int n) {
    // Your logic here
    int i,j = n-1;
    while(i<j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverse_array(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if(i < n-1){
        	printf(" ");
        }
    }
    return 0;
}
/*
Solving Approach
Iterate a loop from 0 to array size-1

then swap 0th index with last index using a temp variable
*/
