//Question: Convert an integer array of up to 50 digits to character array and print 
 //using print using “printf(“%s”, ….);”
//E.g.: Array – 1 4 5 8 7 6 3 Answer: 1458763
/*#include <stdio.h>
#include <string.h>

int main() {
    int len;
    printf("Enter length of array: ");
    scanf("%d", &len);
    int arr[len];
    printf("Enter elements of array: ");
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    char str[len + 1];
    for (int i = 0; i < len; i++) {
        str[i] = arr[i] + '0';  // Convert integer to character
    }
    str[len] = '\0';  // Add null terminator

    printf("%s\n", str);

    return 0;
}*/
/*-----------------------------------Using Functions---------------------------------------*/
#include <stdio.h>
#include <string.h>

// Function declarations
void get_array(int *arr, int len);
void convert_to_char_array(const int *arr, char *str, int len);
void print_char_array(const char *str);

int main() {
    int len;
    printf("Enter length of array: ");
    scanf("%d", &len);
    int arr[len];

    // Get the elements of the array
    get_array(arr, len);

    char str[len + 1];

    // Convert integer array to character array
    convert_to_char_array(arr, str, len);

    // Print the character array
    print_char_array(str);

    return 0;
}

// Function to get elements of the array from the user
void get_array(int *arr, int len) {
    printf("Enter elements of array: ");
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to convert integer array to character array
void convert_to_char_array(const int *arr, char *str, int len) {
    for (int i = 0; i < len; i++) {
        str[i] = arr[i] + '0';  // Convert integer to character
    }
    str[len] = '\0';  // Add null terminator
}

// Function to print the character array
void print_char_array(const char *str) {
    printf("%s\n", str);
}
