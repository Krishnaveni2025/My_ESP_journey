//Question: Get a string and a character from the user and find all the positions 
//where the character present and print it. 
//E.g.: string : hellosurabee 
//character : e 
//Answer : 2, 11, 12
#include <stdio.h>
#include <string.h>

// Function declarations
void get_string(char *str, int size);
char get_character();
void find_positions(const char *str, char ch);

int main() {
    char str[51];  // 50 chars + null terminator

    // Get the string from the user
    get_string(str, sizeof(str));

    // Get the character from the user
    char ch = get_character();

    // Find and print positions of the character in the string
    find_positions(str, ch);

    return 0;
}

// Function to get a string from the user
void get_string(char *str, int size) {
    printf("Enter a string: ");
    scanf("%50s", str);  // Prevent buffer overflow
}

// Function to get a character from the user
char get_character() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Space before %c to ignore whitespace
    return ch;
}

// Function to find and print positions of the character in the string
void find_positions(const char *str, char ch) {
    int len = strlen(str);
    printf("Positions: ");
    for (int i = 0; i < len; i++) {
        if (str[i] == ch) {
            printf("%d ", i + 1);  // Print position (1-indexed)
        }
    }
    printf("\n");
}
