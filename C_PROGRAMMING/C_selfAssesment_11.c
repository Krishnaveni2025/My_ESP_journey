/*C PROGRAMMING SELF ASSESSMENT 11
1. USE POINTERS */
/*1. Get a number from user and print the same. 
Change the value without directly changing it
and print the same. 
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int *ptr = &num;
    printf("The number is: %d\n", *ptr);
    *ptr = 100;
    printf("The number is: %d\n", *ptr);
    return 0;
}*/
/*2. Pass an integer array to a function and
incerment each array element inside the function 
#include<stdio.h>
void increment(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        arr[i]++;
    }
}*/
/*3. Write a loop program to print 1 to 5 one by one. 
Write a funnction and print the result in a main  function. 
Function NAme : arrange_ascend 
Answer: 
1
2
3
4
5
#include <stdio.h>

// Function to print numbers from 1 to 5 using a pointer
void arrange_ascend(int *ptr) {
    for (int i = 1; i <= 5; i++) {
        *ptr = i;  // Assign value to where the pointer points
        printf("%d\n", *ptr);  // Print the value
    }
}

int main() {
    int num;  // Variable to hold the number
    int *ptr = &num;  // Pointer pointing to the variable
    arrange_ascend(ptr);  // Call the function with the pointer
    return 0;
}
*/
/*4. Write a function to find the two-digit odd numbers
whose sum of digits is 7. Print the results in main function. 
Function Name: find_2digit_odd_sum7
Answer: 25,43,61
USING POINTERS

//using pointers
#include <stdio.h>
void find_2digit_odd_sum7(int *ptr);//function declaration
int main()
{
    int num;
    int *ptr = &num;
    find_2digit_odd_sum7(ptr);//function call   
    return 0;
}           
void find_2digit_odd_sum7(int *ptr) {
    for (int i = 10; i < 100; i++) {
        if (i % 2 != 0 && (i / 10 + i % 10) == 7) {
            *ptr = i;
            printf("%d\n", *ptr);
        }
    }
}*/
/*5. Write a function to copy integers from one location
to another location. 
Function Name: memcopy(src,dst,size)

#include <stdio.h>
void memcopy(const int *src, int *dst, size_t size);

int main() {
    int source[] = {1, 2, 3, 4, 5};
    int destination[5]; // Ensure destination has enough space
    size_t size = sizeof(source) / sizeof(source[0]); // Number of elements

    memcopy(source, destination, size);

    // Print copied integers
    printf("Source: ");
    for (size_t i = 0; i < size; i++) {
        printf("%d ", source[i]);
    }
    printf("\nDestination: ");
    for (size_t i = 0; i < size; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");

    return 0;
}
void memcopy(const int *src, int *dst, size_t size) {
    // Copy each integer from the source to the destination
    for (size_t i = 0; i < size; i++) {
        dsy[i] = src[i];
    }
}
*/
/*6. Write a function to copy a string to another. 
Function Name: strcopy(src,dst)

#include <stdio.h>
void strcopy(const char *src, char *dst);
int main() {
    char source[] = "Hello, world!";
    char destination[50];  // Make sure destination has enough space

    strcopy(source, destination);
    
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}
void strcopy(const char *src, char *dst) {
    // Copy characters one by one until the null terminator is reached
    while (*src != '\0') {
        *dst = *src;  // Copy the character from src to dst
        src++;        // Move to the next character in src
        dst++;        // Move to the next position in dst
    }
    *dst = '\0';      // Add null terminator at the end of dst
}
*/
/*7. Write a function to compare a set of integers. 
print Success or Failure
Function Name : memcomp(src,dst,size)

#include <stdio.h>
void memcomp(int *src, int *dst, int size);
int main() {
    int src[] = {1, 2, 3, 4, 5};
    int dst1[] = {1, 2, 3, 4, 5}; // Matching array
    int dst2[] = {1, 2, 0, 4, 5}; // Non-matching array

    int size = sizeof(src) / sizeof(src[0]);

    // Test with matching arrays
    memcomp(src, dst1, size);

    // Test with non-matching arrays
    memcomp(src, dst2, size);

    return 0;
}
void memcomp(int *src, int *dst, int size) {
    for (int i = 0; i < size; i++) {
        if (*(src + i) != *(dst + i)) {
            printf("Failure\n");
            return;
        }
    }
    printf("Success\n");
}
*/
/*8. Write a function to compare two strings. 
print Success or Failure. 
Function Name : strcomp(src,dst)

#include <stdio.h>
void strcomp(const char *src, const char *dst);
int main()
{
    const char *src = "Hello";
    const char *dst1 = "Hello"; // Matching string  
    const char *dst2 = "World"; // Non-matching string
    strcomp(src, dst1);
    strcomp(src, dst2);
    return 0;
}
void strcomp(const char *src, const char *dst)
{
    while (*src != '\0' && *dst != '\0')
    {
        if (*src != *dst)
        {
            printf("Failure\n");
            return;
        }
        src++;
        dst++;
    }
    if (*src == '\0' && *dst == '\0')
    {
        printf("Success\n");
    }
    else
    {
        printf("Failure\n");
    }
}*/

/*9. WRite a function to concatenate two integer
arrays into a single array. 
Function Name: intcon(src1,size2,src2,size2,dst)

#include <stdio.h>
void intcon(int *src1, int size1, int *src2, int size2, int *dst);
int main()
{
    int src1[5] = {1, 2, 3, 4, 5};
    int src2[5] = {6, 7, 8, 9, 10};
    int dst[10];
    int i;
    intcon(src1, 5, src2, 5, dst);
    for (i = 0; i < 10; i++)
    {
        printf("%d ", dst[i]);
    }
    return 0;
}
void intcon(int *src1, int size1, int *src2, int size2, int *dst)
{
    int i;
    for (i = 0; i < size1; i++)
    {
        dst[i] = src1[i];
    }
    for (i = 0; i < size2; i++)
    {
        dst[size1 + i] = src2[i];
    }
}*/
/*10. USE POINTERS */


/*10. Write a function to concatenate two string 
to another. 
Function Name: strcon(src1,src2,dst)

#include <stdio.h>
void strcon(const char *src1, const char *src2, char *dst);
int main()
{
    char src1[20] = "Hello";
    char src2[20] = "World";
    char dst[40];
    strcon(src1, src2, dst);
    printf("%s\n", dst);
    return 0;
}
void strcon(const char *src1, const char *src2, char *dst)
{
    while (*src1 != '\0')
    {
        *dst = *src1;
        dst++;
        src1++;
    }
    while (*src2 != '\0')
    {
        *dst = *src2;
        dst++;
        src2++;
    }
    *dst = '\0';
}*/