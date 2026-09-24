/*
3. Reference Alias Update
Given two signed 32-bit integers a and b, create a C++ reference that aliases a.
Update the value of a by adding b only through this reference.

Do not modify a directly after the reference is created.

Print the updated value of a.

Example 

Input:

5 3
Output:

8
 

Constraints:

a and b are signed 32-bit integers (int32_t)
Modification of a must occur only through a C++ reference
Do not use pointers
Assume no integer overflow occurs
*/
#include <iostream>

// Define incrementPtr(int* x)
// Increment the value pointed to by x
// Do nothing if x is nullptr
void incrementPtr(int* x){
    if(x)
            (*x)++;
    else
            return;
}
// Define incrementRef(int& x)
// Increment the referenced value
void incrementRef(int& x){
    x++;
}
int main() {
    int n;
    std::cin >> n;

    int a = n;
    incrementPtr(&a);
    std::cout << "After incrementPtr: " << a << "\n";

    int b = n;
    incrementRef(b);
    std::cout << "After incrementRef: " << b;

    return 0;
}
