//Question: Get a number as String and 
//print the integer value of the string.
/*#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main() {
    char str[100];

    printf("Enter a number as string:");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character
    str[strcspn(str, "\n")] = 0;

    int num = atoi(str);

    printf("The integer value of the string is: %d\n", num);

    return 0;
}*/
/*--------------------------------------Using Function-----------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Functions Declarations
void remove_newline(char *str);// Declaration of the Function1 to remove newline character from a string
int convert_to_integer(char *str);//Declaration of the Function2 to convert string to integer
// Main function
int main() {
    char str[100];

    printf("Enter a number as string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character
    remove_newline(str);/*Calling Function1*/

    // Convert string to integer
    int num = convert_to_integer(str);/*Calling Function2*/

    printf("The integer value of the string is: %d\n", num);

    return 0;
}
// Defination of the Function1 to remove newline character from a string
void remove_newline(char *str) {
    str[strcspn(str, "\n")] = 0;
}

//Defination of the Function2 to convert string to integer
int convert_to_integer(char *str) {
    return atoi(str);
}

