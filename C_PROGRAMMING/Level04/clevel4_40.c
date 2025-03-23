//Question: Get an integer and print it as string.
/*#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    char* str = malloc(12);  // 12 is the maximum number of digits in an int + 1 for null terminator
    sprintf(str, "%d", num);
    printf("String value of the integer is: %s\n", str);
    free(str);  // Don't forget to free the allocated memory
    return 0;
}*/
/*-------------------------using functions---------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
//Declaring Functions
char* int_to_string(int num);// Declaring a Function to convert integer to string
int get_integer_input();//Declaring a  Function to get an integer from the user
int main() {
    // Get the integer input from the user
    int num = get_integer_input();

    // Convert the integer to string
    char* str = int_to_string(num);

    // Print the string value of the integer
    if (str != NULL) {
        printf("String value of the integer is: %s\n", str);
        free(str);  // Don't forget to free the allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
// Defination of Function to convert integer to string
char* int_to_string(int num) {
    // Allocate memory for the string
    char* str = malloc(12);  // 12 is the maximum number of digits in an int + 1 for null terminator
    if (str != NULL) {
        sprintf(str, "%d", num);
    }
    return str;
}

// Defination of Function to get an integer from the user
int get_integer_input() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    return num;
}

