/*
Implement a Simple Shell Command Parser
In embedded CLI (command-line interface) systems, you often need to parse commands typed by the user into tokens (like command and its arguments). A lightweight parser is used to extract each word (separated by spaces) into an array of strings.

Your task is to:

Read a single input line (up to 100 characters)
Split it into words separated by one or more spaces
Print each token on a new line
Do not use strtok() or any string library function (except gets() or scanf())

Example-1

Input:
led set 3 on

Output:
led  
set  
3  
on

Example-2

Input:
 uart   config 9600 8N1

Output:
uart  
config  
9600  
8N1

Example-3

Input:
status

Output:
status
*/


#include <stdio.h>
#include <ctype.h>

void parse_shell_input(char *line) {
    char token[101];
    int i = 0, j = 0;

    while (line[i] != '\0') {
        if (line[i] != ' ' && line[i] != '\n') {
            token[j++] = line[i];
        } else {
            if (j > 0) {
                token[j] = '\0';
                printf("%s\n", token);
                j = 0;
            }
            // Skip multiple spaces
        }
        i++;
    }

    // Print last token if any
    if (j > 0) {
        token[j] = '\0';
        printf("%s\n", token);
    }
}

int main() {
    char line[101];
    fgets(line, sizeof(line), stdin);

    parse_shell_input(line);
    return 0;
}
/*
Solving Approach

Step-by-Step Solving Algorithm

Read input lineUse fgets() to read up to 100 characters into a buffer

Remove the trailing newline ('\n') if present

Initialize indicesi: scans the input character by character

j: builds each token into a temporary buffer

Loop through each characterIf the character is not a space:Copy it into token[j++]

If the character is a space:

If j > 0, terminate the token with '\0', print it, and reset j = 0

Skip consecutive spaces

After the loop ends

If j > 0, print the final token
*/
