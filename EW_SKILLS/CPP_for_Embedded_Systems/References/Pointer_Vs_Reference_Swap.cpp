/*
2. Pointer vs Reference Swap
Implement two functions that swap the values of two integers using different parameter-passing mechanisms in C++.

void swapPtr(int* a, int* b);

Swaps the values pointed to by a and b using pointers.

void swapRef(int& a, int& b);

Swaps the values of a and b using references.
 

The main() function will:

Read two 32-bit signed integers from standard input
Call swapPtr using one copy of the input values
Call swapRef using a separate fresh copy of the same input values
Print the results after each swap
You only need to implement the two swap functions.

 

Constraints & Notes

Input integers are 32-bit signed integers
Pointers passed to swapPtr are guaranteed to be non-null
Swapping must be done manually (do not use std::swap)
Swaps must occur in-place
Do not allocate dynamic memory
 

Example 1

Input

5 10
Output

After swapPtr: a=10 b=5
After swapRef: a=10 b=5
 

Example 2

Input

-3 7
Output

After swapPtr: a=7 b=-3
After swapRef: a=7 b=-3
*/
#include <iostream>

// Define swapPtr(int* a, int* b)
void swapPtr(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Define swapRef(int& a, int& b)
void swapRef(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int x, y;
    std::cin >> x >> y;

    int a = x, b = y;
    swapPtr(&a, &b);
    std::cout << "After swapPtr: a=" << a << " b=" << b << "\n";

    int c = x, d = y;
    swapRef(c, d);
    std::cout << "After swapRef: a=" << c << " b=" << d;

    return 0;
}
