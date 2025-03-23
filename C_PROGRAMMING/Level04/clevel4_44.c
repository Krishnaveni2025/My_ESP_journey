
//Question: Get a string of numbers up to 50 digits and remove all leading zeros. 
//E.g.: 00000012345 Answer: 12345
/*#include <stdio.h>
#include <string.h>

int main() {
    char str[51];  // 50 digits + 1 for null terminator
    printf("Enter a string of numbers: ");
    scanf("%s", str);
    int len = strlen(str);
    int i;
    for (i = 0; i < len; i++) {
        if (str[i] != '0') {
            break;
        }
    }
    if (i == len) {
        printf("0\n");  // All zeros, print single zero
    } else {
        printf("%s\n", str + i);  // Print from first non-zero digit
    }
    return 0;
}*/
/*-----------------------Using function-------------------------------------*/
#include <stdio.h>
#include <string.h>
/*Functions Declarations*/
void get_string(char *str, int size);
int find_first_non_zero_index(const char *str) ;
void print_processed_string(const char *str, int index) ;
// Main function
int main() {
    char str[51];  // 50 digits + 1 for null terminator

    // Get the string of numbers from the user
    get_string(str, sizeof(str));

    // Find the index of the first non-zero character
    int index = find_first_non_zero_index(str);

    // Print the processed string
    print_processed_string(str, index);

    return 0;
}
// Function to get a string of numbers from the user
void get_string(char *str, int size) {
    printf("Enter a string of numbers: ");
    scanf("%s", str);
}

// Function to find the index of the first non-zero character in the string
int find_first_non_zero_index(const char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] != '0') {
            return i;
        }
    }
    return len;
}

// Function to print the processed string based on the first non-zero character
void print_processed_string(const char *str, int index) {
    if (index == strlen(str)) {
        printf("0\n");  // All zeros, print single zero
    } else {
        printf("%s\n", str + index);  // Print from the first non-zero digit
    }
}

