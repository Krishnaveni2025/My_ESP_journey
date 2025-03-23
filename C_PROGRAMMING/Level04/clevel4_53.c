//Question: Get a string using gets function and count all the words in it.
//E.g.: string : Welcome to ECEN Academy
//Answer : 4
/*#include <stdio.h>
#include <string.h>

int main() {
    char str[51];  // 50 chars + null terminator
    printf("Enter a string: ");
    gets(str);  // Use gets to read the string

    int count = 0;
    char *token = strtok(str, " ");  // Split the string into tokens using space as delimiter
    while (token != NULL) {
        count++;  // Increment word count
        token = strtok(NULL, " ");  // Get the next token
    }

    printf("Number of words: %d\n", count);

    return 0;
}*/
/*---------------------------------------------Using Functions---------------------------------------------*/
#include <stdio.h>
#include <string.h>

// Function declarations
void get_string(char *str, int size);
int count_words(char *str);

int main() {
    char str[51];  // 50 chars + null terminator

    // Get the string from the user
    get_string(str, sizeof(str));

    // Count the number of words in the string
    int word_count = count_words(str);

    // Print the number of words
    printf("Number of words: %d\n", word_count);

    return 0;
}

// Function to get a string from the user
void get_string(char *str, int size) {
    printf("Enter a string: ");
    gets(str);  // Use gets to read the string
}

// Function to count words in the string
int count_words(char *str) {
    int count = 0;
    char *token = strtok(str, " ");  // Split the string into tokens using space as delimiter
    while (token != NULL) {
        count++;  // Increment word count
        token = strtok(NULL, " ");  // Get the next token
    }
    return count;
}
