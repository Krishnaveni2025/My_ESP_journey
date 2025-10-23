/*
Convert Uppercase Letters to Lowercase
You are given a null-terminated string of up to 100 characters. Your task is to:

Convert all uppercase letters (A–Z) to lowercase (a–z)
Leave all other characters unchanged (lowercase, digits, symbols, spaces)
Perform the conversion in-place, using only basic character logic
Do not use standard functions like tolower()
 
Example-1

Input: "Hello Embedded"
Output: hello embedded
 

Example-2

Input: "C99 IS POWERFUL!"
Output: c99 is powerful!

 

Example-3

Input: "test123"
Output: test123


Solving Approach

🪜 Step-by-Step Algorithm

Initialize index i = 0

Loop through the string until str[i] == '\0'

For each character:If str[i] is between 'A' and 'Z':

Convert it to lowercase by adding 32: str[i] = str[i] + 32

Increment i and repeat

End when null terminator is reached



🧠 Why +32 Works

In ASCII:

'A' = 65, 'a' = 97 → difference is 32

So, 'A' + 32 = 'a', 'B' + 32 = 'b', etc.


#include <stdio.h>
#include <stdint.h>

void to_lowercase(char *str) {
    uint8_t i = 0;
    while (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
}

int main() {
    char str[101];
    fgets(str, sizeof(str), stdin);

    // Remove newline
    uint8_t i = 0;
    while (str[i]) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    to_lowercase(str);
    printf("%s", str);
    return 0;
}

Parse Comma-Separated Integers into an Array
You are given a comma-separated string of integers (e.g., "10,20,30"). Each number is in the range 0–255.

Your task is to parse the string and extract all numbers into an array of integers.

Use only basic string logic (do not use strtok() or standard tokenizing functions)
Stop at the null terminator ('\0')
Store results into an uint8_t[] array and print them
 
Example-1

Input: "10,20,30"
Output: 10 20 30
 

Example-2

Input: "5"
Output: 5
 

Example-3

Input: "1,2,3,4,5"
Output: 1 2 3 4 5

*/

#include <stdio.h>
#include <stdint.h>

void parse_csv_to_array(const char *str, uint8_t *arr, uint8_t *count) {
    // Your logic here
    uint8_t i = 0;
    while (str[i]) {
        arr[i] = str[i];
        if (str[i] == ',') {
            arr[i] = ' ';
        }
        printf("%c",arr[i]);
        i++;
    }
}

int main() {
    char str[101];
    fgets(str, sizeof(str), stdin);

    // Remove newline
    uint8_t i = 0;
    while (str[i]) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    uint8_t arr[20];
    uint8_t count = 0;

    parse_csv_to_array(str, arr, &count);

    for (uint8_t i = 0; i < count; i++) {
        printf("%u", arr[i]);
        if(i < count - 1){
            printf(" ");
        }
    }
    return 0;
}
/*
Solving Approach

iterate a loop from until string is terminates

from i = 0 

assign str[i] to arr[i]

if str[i] is ','

then assign ' ' to arr[i]

print array element

increment i until loop terminates
*/
