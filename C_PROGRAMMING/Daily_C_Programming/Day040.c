/*
Add Two Integers Using Void Pointers
Write a function that receives two void pointers, each pointing to an integer. Return sum of the two integer.

Note: Function arguments are passed as void * and can’t be changed.

Example-1

Input: a = 10, b = 20
Output: 30


Example-2

Input: a = -5, b = 15
Output: 10


Example-3

Input: a = 100, b = 200
Output: 300

*/
Code

#include <stdio.h>

int add_two_void_pointers(void *a, void *b) {
    // Your logic here
    //cast dereference
    //add and return
    return ((*(int*)a)+(*(int*)b));
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int result = add_two_void_pointers(&x, &y);
    printf("%d", result);

    return 0;
}
/*
Solving Approach

1.cast
2.Dereference
3.Add then return result
 */
