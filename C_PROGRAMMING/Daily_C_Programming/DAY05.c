/*30.
#include <stdio.h>
void first()
{
    printf("first");
}
void second()
{
    first();
}
void third()
{
    second();
}
void main()
{
    void (*ptr)();// Declare a function pointer
    ptr = third;// Assign the address of the function 'third' to the pointer
    ptr();// Call the function using the pointer
    // Output: first
}
// Question 29:
#include <stdio.h>
struct student// Define a structure named 'student'
{
    char *name;// Pointer to a character string (name)
};
struct student s[2];// Declare an array of 2 'student' structures
void main()
{
    s[0].name = "alan";// Assign the string "alan" to the name of the first student
    s[1] = s[0];// Copy the first student's data to the second student
    // Now both s[0] and s[1] point to the same name "alan"
    printf("%s%s", s[0].name, s[1].name);   // Print the names of both students
    s[1].name = "turing";// Assign the string "turing" to the name of the second student
    printf("\n%s%s", s[0].name, s[1].name);// Print the names again
    // Output: alanturing
}
//Question 28:
       #include <stdio.h>
        struct point// Define a structure named 'point'
        {
            int x;// Declare an integer member 'x'
            int y;// Declare an integer member 'y'
        };
        struct notpoint// Define another structure named 'notpoint'
        {
            int x;// Declare an integer member 'x'
            int y;// Declare an integer member 'y'
        };
        int main()
        {
            struct point p = {1};// Initialize a 'point' structure with x = 1 and y = 0
            // Note: 'y' is not initialized, so it may contain garbage value
            struct notpoint p1 = p;
            printf("%d\n", p1.x);
        }
Assignment of p to p1:
You attempt to assign p (of type struct point) to p1 (of type struct notpoint) with struct notpoint p1 = p;.
This is invalid in C because struct point and struct notpoint are different types,
even though their members are the same.
C does not allow direct assignment between different structure types,
so this line should cause a compilation error
(e.g., "incompatible types when initializing type 'struct notpoint' using type 'struct point'"

   #include <stdio.h>
struct point {
    int x;
    int y;
};
struct notpoint {
    int x;
    int y;
};
int main() {
    struct point p = {1}; // p.x = 1, p.y = 0
    struct point p1 = p;  // Now compatible, p1.x = 1, p1.y = 0
    printf("%d\n", p1.x); // Prints 1
    return 0;
}
// Question 27:
#include <stdio.h>
struct point
{
    int x;
    int y;
};
struct notpoint
{
    int x;
    int y;
};
struct point foo();
int main()
{
    struct point p = {1};
    struct notpoint p1 = {2, 3};
    p1 = foo();
    printf("%d\n", p1.x);
}
struct point foo()
{
    struct point temp = {1, 2};
    return temp;
}
p1 = foo();:
 Attempts to assign the return value of foo() (a struct point) to p1 (a struct notpoint).
 This is problematic because struct point and struct notpoint are incompatible types in C.
  This line should cause a compilation error
(e.g., "incompatible types when assigning to type 'struct notpoint' from type 'struct point'")..
Issue
The critical issue is the assignment p1 = foo();. Since foo() returns a struct point and p1 is a struct notpoint, this assignment is invalid due to type incompatibility. C does not allow direct assignment between different struct types, even if their members are identical.
Expected Behavior
The code will fail to compile due to the type mismatch in the assignment p1 = foo();.
If the types were compatible (e.g., if p1 were a struct point),
the assignment would be valid, and the program would print 1
(the value of p1.x after assigning temp from foo).
//#include <stdio.h>
struct point {
    int x;
    int y;
};
struct notpoint {
    int x;
    int y;
};
struct point foo();
int main() {
    struct point p = {1}; // p.x = 1, p.y = 0
    struct notpoint p1 = {2, 3}; // p1.x = 2, p1.y = 3
    struct point temp = foo(); // Get struct point from foo
    p1.x = temp.x; // Manually copy x
    p1.y = temp.y; // Manually copy y
    printf("%d\n", p1.x); // Prints 1
    return 0;
}
struct point foo() {
    struct point temp = {1, 2};
    return temp;
}
//#include <stdio.h>
struct point {
    int x;
    int y;
};
struct notpoint {
    int x;
    int y;
};
struct point foo();
int main() {
    struct point p = {1}; // p.x = 1, p.y = 0
    struct point p1 = {2, 3}; // p1.x = 2, p1.y = 3
    p1 = foo(); // Now valid, assigns temp (1, 2) to p1
    printf("%d\n", p1.x); // Prints 1
    return 0;
}
struct point foo() {
    struct point temp = {1, 2};
    return temp;
}
// Question 26:
#include <stdio.h>
struct point
{
    int x;
    int y;
};
int main()
{
    struct point p = {1};
    struct point p1 = {1};
    if (p == p1)
        printf("equal\n");
    else
        printf("not equal\n");
}
Expected Behavior
The code will fail to compile because the == operator is not defined for comparing entire structures in C.
To compare p and p1, you must compare their individual members explicitly.
//#include <stdio.h>
struct point {
    int x;
    int y;
};
int are_points_equal(struct point a, struct point b) {
    return a.x == b.x && a.y == b.y;
}
int main() {
    struct point p = {1}; // p.x = 1, p.y = 0
    struct point p1 = {1}; // p1.x = 1, p1.y = 0
    if (are_points_equal(p, p1))
        printf("equal\n");
    else
        printf("not equal\n");
    return 0;
}
//Question 25:
#include <stdio.h>
struct student
{
    char *name;
};
void main()//return type should be int main()
{
    struct student s, m;// Declare two variables of type struct student
    s.name = "st";// Assign the string "st" to the name of the first student
    m = s;// Copy the data from s to m, so m.name now points to "st"
    printf("%s%s", s.name, m.name);// Output: stst
  }
//Question 24:
       #include <stdio.h>
        struct student
        {
            char *name;
        };
        struct student s;
        struct student fun(void)
        {
            s.name = "newton";// Assign the name "newton" to the first student
            printf("%s\n", s.name);// Print the name of the first student
            s.name = "alan";// Change the name to "alan"
            return s;// Return the modified student structure
        }
        void main()//return type should be int main()
        {
            struct student m = fun();// Call the function and store the returned student structure in m
            printf("%s\n", m.name);// Print the name of the second student
            m.name = "turing";// Change the name to "turing"
            printf("%s\n", s.name);// Print the name of the first student again
        }

//Question 23: Write the program to swap two variables value
//without third number using pointer
#include <stdio.h>

void swap(int *a, int *b) {
    *a = *a + *b;// Add the values of a and b and store in a
    //5+10 = 15
    *b = *a - *b;// Subtract the new value of a by b to get the original value of a
    //15-10 = 5
    // Now b contains the original value of a
    *a = *a - *b;// Subtract the new value of b from a to get the original value of b
    //15-5 = 10
    // Now a and b are swapped
}

int main() {
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);//5, 10
    swap(&x, &y);// Call the swap function with the addresses of x and y
    printf("After swap: x = %d, y = %d\n", x, y);//10, 5
    // Output: After swap: x = 10, y = 5
    return 0;
}
Question 22:
Explain void pointer, NULL pointer, dangling pointer and wild pointer

1. Void Pointer:
   - A void pointer is a special type of pointer that can point to any data type.
   - It is declared using the keyword `void` and does not have a specific data type associated with it.
   - Example: `void *ptr;` can point to an int, float, or any other data type.
   - To dereference a void pointer, it must be cast to the appropriate data type.

2. NULL Pointer:
   - A NULL pointer is a pointer that does not point to any valid memory location.
   - It is often used to indicate that the pointer is not initialized or is not currently pointing to a valid object.
   - In C, NULL is defined as `((void *)0)`.
   - Example: `int *ptr = NULL;` means ptr is not pointing to any integer.

3. Dangling Pointer:
   - A dangling pointer is a pointer that points to a memory location that has been freed or deallocated.
   - Accessing a dangling pointer can lead to undefined behavior, as the memory it points to may no longer be valid.
   - Example: If a pointer points to a local variable and the function returns, the pointer becomes dangling.
    - Example:
    `int *ptr = malloc(sizeof(int));
    free(ptr);`
    After freeing, ptr becomes a dangling pointer if not set to NULL.

4. Wild Pointer:
   - A wild pointer is a pointer that has not been initialized to point to a valid memory location.
   - It may point to any random memory location, leading to unpredictable behavior if dereferenced.
   - Example: `int *ptr;` without initialization makes ptr a wild pointer.
   Question 21:

#include <stdio.h>
int main()
{
    int x = 0b1010^0b010;//10^2;//0xa ^ 0b10;
    printf("%d", x);
    return 0;
}
//Question 20:
#include <stdio.h>
int main()
{
    char flag=0x0f;
    flag &= ~0x02;// Clear the second bit (0x02) of flag
    // After this operation, flag will be 0x0d (00001101 in binary)
    // The bitwise AND operation with the negation of 0x02 (00000010)
    // effectively clears the second bit of flag.
    printf("%d",flag);
return 0;
}
//Question 19:
 #include <stdio.h>
int main() {
int x[5] = {1, 2, 3, 4, 5};
int* ptr;
ptr = &x[2];// Point ptr to the third element of the array x (which is 3)
printf("*ptr = %d \n", *ptr);
printf("*(ptr+1) = %d \n", *(ptr+1));// Access the next element (which is 4)
printf("*(ptr-1) = %d", *(ptr-1));// Access the previous element (which is 2)
return 0;
}
Question 18:

#include <stdio.h>
struct p
{
    int x;
    int y;
};
int main()
{
    struct p p1[] = {1, 2, 3, 4, 5, 6};
    // p1 is an array of struct p with 6 elements
    // Each element has two members: x and y
    // p1[0] = {1, 2}, p1[1] = {3, 4}, p1[2] = {5, 6}
    // p1[0].x = 1, p1[0].y = 2
    // p1[1].x = 3, p1[1].y = 4
    // p1[2].x = 5, p1[2].y = 6
    struct p *ptr1 = p1;
    printf("%d %d\n", ptr1->x, (ptr1 + 2)->x);
    // ptr1->x accesses the x value of the first element (1)
    // (ptr1 + 2)->x accesses the x value of the third element (5)
}
 Question 17:
    #include <stdio.h>
    int x = 0;
    int f()
    {
        if (x == 0)//t
            return x + 1;//1
        else
            return x - 1;
    }
    int g()
    {
        return x++;// Post-increment x,
        //returns the current value of x (0), then increments it to 1
    }
    int main()
    {
        int i = (f() + g()) | g(); //bitwise or
        // f() returns 1, g() returns 0 (x becomes 1), g() returns 1 (x becomes 2)
        int j = g() | (f() + g()); //bitwise or
        // g() returns 1 (x becomes 2), f() returns 2, g() returns 2 (x becomes 3)
    }
        Question 16:
#include <stdio.h>
void reverse(int i);
int main()
{
    reverse(1);
}
void reverse(int i)
{
    if (i > 5)  // t t t t t f
        return; // Base case: if i is greater than 5, return
    printf("%d ", i);
    return reverse((i++, i)); // 1 2 3 4 5
    // Recursive call with incremented i
}
Question 15:*/
#include <stdio.h>
void solve() {
    int x = printf("Hello");
    // The printf function returns the number of characters printed
    // In this case, it prints "Hello" which has 5 characters   
    printf(" %d", x);// Prints the number of characters printed by the previous printf
    // So, it will print "Hello 5"
}
int main() {
	solve();
    return 0;
}
/*Question 14:
Explain dynamic memory allocation concept malloc, calloc, realloc, free.
Dynamic memory allocation in C allows you to allocate memory at runtime, which is useful when the size of data structures is not known at compile time. The main functions for dynamic memory allocation are `malloc`, `calloc`, `realloc`, and `free`.

1. `malloc`: Allocates a specified number of bytes and returns a pointer to the allocated memory. The memory is not initialized.
   ```c
   int *arr = (int *)malloc(5 * sizeof(int));
   ```

2. `calloc`: Allocates memory for an array of elements, initializes all bytes to zero, and returns a pointer to the allocated memory.
   ```c
   int *arr = (int *)calloc(5, sizeof(int));
   ```

3. `realloc`: Resizes previously allocated memory. It can increase or decrease the size of the memory block.
   ```c
   arr = (int *)realloc(arr, 10 * sizeof(int));
   ```

4. `free`: Deallocates previously allocated memory, making it available for future allocations.
   ```c
   free(arr);
   ```*/
