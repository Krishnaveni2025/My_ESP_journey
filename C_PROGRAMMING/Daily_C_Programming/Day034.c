/*
Print Sum of Even Numbers
You are given an array of integers and its size. Using only pointer arithmetic:

Traverse the array
Find the sum of all even numbers
Print the sum 
❌ Do not use arr[ i ] indexing.
✅ Use only pointer movement and dereferencing.
 

Example-1

Input: n = 5, arr = [10 21 32 43 50]
Output: Sum = 92


Example-2

Input: n = 4, arr = [11 13 15 17]
Output: Sum = 0


Example-3

Input: n = 6, arr = [2 4 6 8 10 12]
Output: Sum = 42
  */
Code

#include <stdio.h>

int sum_even_numbers(int *ptr, int n) {
    // Your logic here
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        if((ptr[i])%2==0)
        {
            sum += ptr[i];
        }
        
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

    int result = sum_even_numbers(arr, n);

    printf("Sum = %d", result);

    return 0;
}
/*
Solving Approach

1.Loop through array and access each element and check if it is even
2. if so add and store in sum 
3. Finally return the sum
*/
/*
Pointer- Swap Value
You are given two integers a and b. Write a function that swaps their values using pointers. You must pass the addresses of both variables to the function. After swapping, print their updated values in main().
 

Example-1

Input: a = 10, b = 20
Output: a = 20, b = 10


Example-2

Input: a = -5, b = 15
Output: a = 15, b = -5*/
#include <stdio.h>

void swap(int *p1, int *p2) {
    // Your logic here
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("a = %d ", a);
    printf("b = %d", b);

    return 0;
}

