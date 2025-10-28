/*
Split a String Using Delimiter
You are given a null-terminated string containing words separated by a delimiter character (like comma , or space ' ').

Your task is to:

Split the string into individual tokens based on the delimiter
Store the tokens in a 2D array of characters (char tokens[10][20])
Print each token on a new line
Do not use strtok() or any string library functions.

 

Example-1

Input:
str = "cmd1,cmd2,cmd3"
delimiter = ','
Output:
cmd1  
cmd2  
cmd3

Example-2

Input:
str = "ON OFF RESET"
delimiter = ' '
Output:
ON  
OFF  
RESET
*/



#include <stdio.h>
#include <stdint.h>

void split_string(const char *str, char delimiter, char tokens[10][20], uint8_t *count) {
    uint8_t i = 0, t = 0, j = 0;

    while (str[i] && t < 10) {
        if (str[i] == delimiter) {
            tokens[t][j] = '\0';  // End current token
            t++;
            j = 0;
        } else if (j < 19) {
            tokens[t][j++] = str[i];
        }
        i++;
    }

    tokens[t][j] = '\0';  // Terminate last token
    *count = t + 1;
}

int main() {
    char str[101];
    char delimiter;
    fgets(str, sizeof(str), stdin);
    scanf(" %c", &delimiter);

    // Remove newline
    uint8_t i = 0;
    while (str[i]) {
        if (str[i] == '\n') { str[i] = '\0'; break; }
        i++;
    }

    char tokens[10][20];
    uint8_t count = 0;

    split_string(str, delimiter, tokens, &count);

    for (uint8_t i = 0; i < count; i++) {
        printf("%s\n", tokens[i]);
    }

    return 0;
}
/*
Solving Approach

Step-by-Step Solving Algorithm

Initialize indicesi: scans the input string

t: tracks the current token index (0–9)

j: tracks character position within each token (0–19)

Loop through each character in strIf the character is not the delimiter:Copy it to tokens[t][j] if j < 19

Increment j

If the character is the delimiter:Terminate current token with '\0'

Move to next token: t++, reset j = 0

After the loop endsTerminate the last token with '\0'

Set *count = t + 1 to reflect total tokens

Boundary checksLimit tokens to 10 (t < 10)

Limit each token to 19 characters (j < 19)

*/
