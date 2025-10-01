/*
Double Pointer
You are given two integer variables: n1 and n2.

Task:

Initially, a pointer points to n1.
Pass the address of this pointer (int **pp) to a function.
Inside the function, decide:
If the value at pointer is even, reassign it to point to n2.
If the value is odd, keep pointing to n1.
Finally, print the value where pointer points.
 
Example-1

Input: n1 = 10, n2 = 50
Output: 50

(10 is even ➔ reassign to n2)


Example-2

Input: n1 = 7, n2 = 100
Output: 7

(7 is odd ➔ keep pointing to n1)


Example-3

Input: n1 = 22, n2 = 88
Output: 88

(22 is even ➔ reassign to n2)

*/
#include <stdio.h>

void reassign_based_on_value(int **pp, int *n2_ptr) {
    if (**pp % 2 == 0) {
        *pp = n2_ptr;  // Reassign to point to n2 if value is even
    }
    // Else, keep pointing to n1
}

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int *p = &n1;

    reassign_based_on_value(&p, &n2);

    printf("%d", *p);  // Print the value where p points

    return 0;
}
