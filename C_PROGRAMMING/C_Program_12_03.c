/* C LEVEL 12 - Problem 03
Use Pointers
  Question: Get a check string and substring. check the substring in the main string and print the position.
  Example:
  string: helloetalvislearning
  sub-striing: etal
  Answer: 6
*/

#include <stdio.h>

// Function prototypes
void get_strings(char *src, char *sub);
void find_substring(char *src, char *sub);

int main() {
    char mainstr[100], substr[50];
    get_strings(mainstr, substr);
    find_substring(mainstr, substr);
    return 0;
}

void get_strings(char *src, char *sub) {
    printf("Enter Main String: ");
    scanf("%99s", src);
    printf("Enter Substring: ");
    scanf("%49s", sub);
    printf("Main String: %s\n", src);
    printf("Substring: %s\n", sub);
    printf("____________________________________________________________\n");
}

// Manual length function
int mystrlen(char *s) {
    int len = 0;
    while (*s != '\0') {
        len++;
        s++;
    }
    return len;
}

void find_substring(char *src, char *sub) {
    int len1 = mystrlen(src);
    int len2 = mystrlen(sub);
    int i, j, found;

    for (i = 0; i <= len1 - len2; i++) {
        found = 1;
        for (j = 0; j < len2; j++) {
            if (src[i + j] != sub[j]) {
                found = 0;
                break;
            }
        }
        if (found) {
            printf("Substring found at position: %d\n", i + 1); // 1-based index
            return;
        }
    }
    printf("Substring not found\n");
}
