/*
Implement Custom strlen Function
In C, strings are terminated by a null character '\0'. Your task is to implement a custom strlen() function that calculates the length of a string without using any built-in functions.

You will be given a string of maximum of 100 characters. Return the number of characters before the null terminator.

 

Example-1

Input: "Embedded"
Output: 8
 

Example-2

Input: "C is powerful"
Output: 13


Example-3

Input: ""
Output: 0

  */

#include <stdio.h>

int custom_strlen(const char *str) {
    // Your logic here
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            break;
        }
        i++;
    }
    return i;
}

int main() {
    char str[101];
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    printf("%d", custom_strlen(str));
    return 0;
}
/*
Solving Approach

initialize a counter to zero if the given string  have a new line print count otherwise increment the counter
*/

