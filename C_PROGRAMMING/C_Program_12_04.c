/* C LEVEL 12 - Problem 04
Use Pointers
  Question: Get a string using gets function and count all the words in it.
  Example:
  string: welcome to etalvis learning
  Answer: 4
*/
/* C LEVEL 12 - Problem 04
Use Pointers
  Question: Get a string using gets function and count all the words in it.
  Example:
  string: welcome to etalvis learning
  Answer: 4
*/
#include <stdio.h>

// Function prototypes
void get_string(char *src);
int count_words(char *src);

int main() {
    char input[200];   // buffer for string
    get_string(input);
    int words = count_words(input);
    printf("Word Count: %d\n", words);
    return 0;
}

void get_string(char *src) {
    printf("Enter a string: ");
    gets(src);   // as per problem statement (unsafe, but required here)
}

int count_words(char *src) {
    int count = 0;
    int inWord = 0;   // flag to track if we are inside a word

    while (*src != '\0') {
        if (*src != ' ' && *src != '\t') {
            if (!inWord) {
                count++;     // new word starts
                inWord = 1;
            }
        } else {
            inWord = 0;      // space ends the current word
        }
        src++;               // move pointer forward
    }
    return count;
}
