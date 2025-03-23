//Question: Get a number string up to 50 digits and convert it to integer array.
/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[51];  // 50 digits + 1 for null terminator
    printf("Enter a string of numbers: ");
    scanf("%s", str);
    int len = strlen(str);
    int* arr = (int*) malloc(len * sizeof(int));  // Array to store integers
    for (int i = 0; i < len; i++) {
        arr[i] = str[i] - '0';  // Convert character to integer
    }
    printf("Integer array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);  // Free allocated memory
    return 0;
}*/
/*-------------------------using Functions----------------------------------------------*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function declarations
void get_string(char *str, int size);
void convert_to_integer_array(const char *str, int *arr);
void print_integer_array(const int *arr, int len);

int main() {
    char str[51];  // 50 digits + 1 for null terminator

    // Get the string of numbers from the user
    get_string(str, sizeof(str));

    int len = strlen(str);
    int *arr = (int*) malloc(len * sizeof(int));  // Array to store integers

    // Convert string to integer array
    convert_to_integer_array(str, arr);

    // Print the integer array
    print_integer_array(arr, len);

    free(arr);  // Free allocated memory
    return 0;
}

// Function to get a string of numbers from the user
void get_string(char *str, int size) {
    printf("Enter a string of numbers: ");
    scanf("%s", str);
}

// Function to convert string to integer array
void convert_to_integer_array(const char *str, int *arr) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        arr[i] = str[i] - '0';  // Convert character to integer
    }
}

// Function to print the integer array
void print_integer_array(const int *arr, int len) {
    printf("Integer array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
