void Pointer in C

comments
A void pointer is a pointer that has no associated data type with it. A void pointer can hold an address of any type and can be typecasted to any type.

Example of Void Pointer in C



// C Program to demonstrate that a void pointer
// can hold the address of any type-castable type
​
#include <stdio.h>
int main()
{
    int a = 10;
    char b = 'x';
​
    // void pointer holds address of int 'a'
    void* p = &a;
    // void pointer holds address of char 'b'
    p = &b;
}

Time Complexity: O(1)
Auxiliary Space: O(1)

If you're looking to master pointers, including how they work with data structures, the C Programming Course Online with Data Structures covers pointers extensively with practical use cases.

Properties of Void Pointers
1. void pointers cannot be dereferenced.

Example

The following program doesn't compile.




// C Program to demonstrate that a void pointer
// cannot be dereferenced
​
#include <stdio.h>
int main()
{
    int a = 10;
    void* ptr = &a;
    printf("%d", *ptr);
​
    return 0;
}

Output

Compiler Error: 'void*' is not a pointer-to-object type
The below program demonstrates the usage of a void pointer to store the address of an integer variable and the void pointer is typecasted to an integer pointer and then dereferenced to access the value. The following program compiles and runs fine.




// C program to dereference the void
// pointer to access the value
​
#include <stdio.h>
​
int main()
{
    int a = 10;
    void* ptr = &a;
    // The void pointer 'ptr' is cast to an integer pointer
    // using '(int*)ptr' Then, the value is dereferenced
    // with `*(int*)ptr` to get the value at that memory
    // location
    printf("%d", *(int*)ptr);
    return 0;
}

Output
10
Time Complexity: O(1)
Auxiliary Space: O(1)

2. The C standard doesn't allow pointer arithmetic with void pointers. However, in GNU C it is allowed by considering the size of the void as 1.

Example

The below C program demonstrates the usage of a void pointer to perform pointer arithmetic and access a specific memory location. The following program compiles and runs fine in gcc.




// C program to demonstrate the usage
// of a void pointer to perform pointer
// arithmetic and access a specific memory location
​
#include <stdio.h>
​
int main()
{
    // Declare and initialize an integer array 'a' with two
    // elements
    int a[2] = { 1, 2 };
    // Declare a void pointer and assign the address of
    // array 'a' to it
    void* ptr = &a;
​
    // Increment the pointer by the size of an integer
    ptr = ptr + sizeof(int);
​
    // The void pointer 'ptr' is cast to an integer
    // pointer using '(int*)ptr' Then, the value is
    // dereferenced with `*(int*)ptr` to get the value at
    // that memory location
    printf("%d", *(int*)ptr);
​
    return 0;
}

Output
2
Time Complexity: O(1)
Auxiliary Space: O(1)

Note: The above program may not work in other compilers.

Advantages of Void Pointers in C
Following are the advantages of void pointers

malloc() and calloc() return void * type and this allows these functions to be used to allocate memory of any data type (just because of void *).
void pointers in C are used to implement generic functions in C. For example, compare function which is used in qsort().
void pointers used along with Function pointers of type void (*)(void) point to the functions that take any arguments and return any value.
void pointers are mainly used in the implementation of data structures such as linked lists, trees, and queues i.e. dynamic data structures.
void pointers are also commonly used for typecasting.
