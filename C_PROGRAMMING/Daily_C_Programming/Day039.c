/*
Swap Two Pointers Using Double Pointers
You are given two pointers, each pointing to different integer variables.

Task:

Write a function that swaps the pointers themselves (not the values).
After swapping, each pointer should now point to the other’s original variable.
 You must use double pointers (int **p1, int **p2) to swap addresses.
 

Example-1

Input: a = 10, b = 20
Output: a points to 20, b points to 10


Example-2

Input: a = 5, b = 15
Output: a points to 15, b points to 5
*/
Code

#include <stdio.h>

void swap_pointers(int **p1, int **p2) {
    // Your logic here
    int *temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int *p1 = &a;
    int *p2 = &b;

    swap_pointers(&p1, &p2);

    printf("%d %d", *p1, *p2);

    return 0;
}
/*
Solving Approach

swap two pointers using double pointer

1.Store *p1 in a temporary pointer: temp = *p1

2.Assign *p1 = *p2

3.Assign *p2 = temp
*/
