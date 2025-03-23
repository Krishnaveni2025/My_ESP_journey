//Question: Get a main string and sub string. 
//Check the sub string in main string 
//and print the position.
//E.g.: string : hellosurabee
// substring : sura
//Answer : 6
/*#include <stdio.h>
#include <string.h>

int main() {
    char main_str[51];  // 50 chars + null terminator
    char sub_str[51];  // 50 chars + null terminator
    printf("Enter main string: ");
    scanf("%50s", main_str);  // Prevent buffer overflow
    printf("Enter substring: ");
    scanf("%50s", sub_str);  // Prevent buffer overflow

    char *pos = strstr(main_str, sub_str);
    if (pos != NULL) {
        printf("Position: %d\n", pos - main_str + 1);  // Print position (1-indexed)
    } else {
        printf("Substring not found\n");
    }

    return 0;
}*/
/*---------------------------------Using Functions---------------------------------------------*/
#include <stdio.h>
#include <string.h>

// Function declarations
void get_string(char *str, int size, const char *prompt);
int find_substring(const char *main_str, const char *sub_str);
void print_position(int pos);

int main() {
    char main_str[51];  // 50 chars + null terminator
    char sub_str[51];  // 50 chars + null terminator

    // Get the main string from the user
    get_string(main_str, sizeof(main_str), "Enter main string: ");
    
    // Get the substring from the user
    get_string(sub_str, sizeof(sub_str), "Enter substring: ");

    // Find the substring position
    int position = find_substring(main_str, sub_str);

    // Print the position
    print_position(position);

    return 0;
}

// Function to get a string from the user
void get_string(char *str, int size, const char *prompt) {
    printf("%s", prompt);
    scanf("%50s", str);  // Prevent buffer overflow
}

// Function to find the position of the substring in the main string
int find_substring(const char *main_str, const char *sub_str) {
    char *pos = strstr(main_str, sub_str);
    if (pos != NULL) {
        return pos - main_str + 1;  // Return 1-indexed position
    } else {
        return -1;  // Indicate substring not found
    }
}

// Function to print the position
void print_position(int pos) {
    if (pos != -1) {
        printf("Position: %d\n", pos);
    } else {
        printf("Substring not found\n");
    }
}
