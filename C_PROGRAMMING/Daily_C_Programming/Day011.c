Array of Pointers to Strings in C

comments
In C, arrays are data structures that store data in contiguous memory locations. Pointers are variables that store the address of data variables. We can use an array of pointers to store the addresses of multiple elements. In this article, we will learn how to create an array of pointers to strings in C. It is a very effective technique when we want to point at different memory locations of the same data type like a string.




// C Program to Create an Array of Pointers to Strings
​
#include <stdio.h>
​
int main()
{
    // Initialize an array of pointers to strings
    char* arr[4]
        = { "C++", "Java", "Python", "JavaScript" };
    int n = sizeof(arr) / sizeof(arr[0]);
    // Print the strings using the pointers
    printf("Array Elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
    return 0;
}

Output
Array Elements:
C++
Java
Python
JavaScript
Syntax to Create an Array of Pointers to Strings in C
To create an array of pointers to strings in C we can use the following syntax:

char * arr[size] ={ "String1", "String2", ....}
Here,

char*: is the type of pointers we will store in the array.
arr: is the name of the array of pointers.
size: is the size of the array of pointers.
Each array element will act as a pointer to the first character of an individual string.

Note: Storing the strings in this array is more efficient than storing multiple strings in a 2D Array of characters as explained here.
