/* C LEVEL 12 - Problem 02
Use Pointers
  Question: Get a string and a character from the user, find the all the positions where the character is present, and print it.
  Example:
  string: helloetalvislearning
  character: e
  Answer: 2,6,14
*/

#include <stdio.h>

void get_string_char(char *src, char *letter);
void get_char_pos(char *src, char letter);

int main() {
    char input_string[100], letter;
    get_string_char(input_string, &letter);
    get_char_pos(input_string, letter);
    return 0;
}

void get_string_char(char *src, char *letter) {
    printf("Enter String: ");
    scanf("%99s", src);
    printf("Enter Character: ");
    scanf(" %c", letter);   // space skips newline
    printf("Entered String: %s\n", src);
    printf("Entered Character: %c\n", *letter);
    printf("________________________________________________________________\n");
}

void get_char_pos(char *src, char letter) {
    int i = 0, found = 0;
    printf("Positions: ");
    while (src[i] != '\0') {
        if (src[i] == letter) {
            if (found) printf(",");   // add comma between positions
            printf("%d", i + 1);      // 1-based index
            found = 1;
        }
        i++;
    }
    if (!found) {
        printf("Character not found");
    }
    printf("\n");
}
