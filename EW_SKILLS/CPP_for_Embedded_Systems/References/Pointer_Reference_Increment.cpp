/*
1. Pointer Reference Increment
Write two C++ functions that increment an integer value using two different parameter-passing techniques commonly used in embedded and firmware development:

void incrementPtr(int* x)
 Increments the value pointed to by x.
 If x is nullptr, the function must do nothing.
void incrementRef(int& x)
 Increments the referenced value x.
The program reads an integer from standard input, calls both functions separately, and prints the results.

You only need to implement the two functions.
The main() function is provided and must not be modified.

Assumptions:

The input value fits within the range of int
Overflow behavior is not tested 
 

Example 1

Input

5
Output

After incrementPtr: 6
After incrementRef: 6
 

Example 2

Input

0
Output

After incrementPtr: 1
After incrementRef: 1
*/
