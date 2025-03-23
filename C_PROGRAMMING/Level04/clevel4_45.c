//Question: Get a number up to 50 digits and reverse it.
//E.g.: 12345678912345 Answer: 54321987654321
/*#include <stdio.h>
#include <string.h>

int main() {
    char str[51];  // 50 digits + 1 for null terminator
    printf("Enter a string of numbers: ");
    scanf("%s", str);
    int len = strlen(str);
    char rev[len+1];  // Array to store reversed string
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];  // Assign reversed character
    }
    rev[len] = '\0';  // Add null terminator
    printf("Reversed string: %s\n", rev);
    return 0;
}*/
/*-----------------------Using Function----------------------------------*/
#include <stdio.h>
#include <string.h>

// Function declarations
void get_string(char *str, int size);
void reverse_string(const char *input, char *output);

// Main function
int main() {
    char str[51];  // 50 digits + 1 for null terminator
    char rev[51];  // Array to store reversed string

    // Get the string of numbers from the user
    get_string(str, sizeof(str));

    // Reverse the string
    reverse_string(str, rev);

    // Print the reversed string
    printf("Reversed string: %s\n", rev);

    return 0;
}

// Function to get a string of numbers from the user
void get_string(char *str, int size) {
    printf("Enter a string of numbers: ");
    scanf("%s", str);
}

// Function to reverse the string
void reverse_string(const char *input, char *output) {
    int len = strlen(input);
    for (int i = 0; i < len; i++) {
        output[i] = input[len - i - 1];
    }
    output[len] = '\0';  // Add null terminator
}
