/*
Reverse a String In-Place
You are given a null-terminated string (maximum 100 characters). Your task is to reverse the string in-place without using any additional array or library functions like strrev().

You must swap characters from both ends until the string is reversed. The null-terminator must remain at the end.

Example-1

Input: "firmware"
Output: erawmrif


Example-2

Input: "abc 123"
Output: 321 cba


Example-3

Input: ""
Output: ``


#include <stdio.h>
#include<string.h>
void reverse_string(char *str) {
    // Your logic here
    int i = 0;
    int z = strlen(str)-1;
    char temp;
    while(i<z)
    {
        temp = str[i];
        str[i] = str[z];
        str[z] = temp;
        i++;
        z--;
    }
}

int main() {
    char str[101];
    fgets(str, sizeof(str), stdin);

    // Remove newline
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    reverse_string(str);
    printf("%s", str);
    return 0;
}

Remove Duplicate Characters from a String
You are given a null-terminated string containing lowercase and uppercase letters, digits, symbols, or spaces.

Your task is to:

Remove all duplicate characters from the string
Keep only the first occurrence of each character
The order of characters must be preserved.
 

Example-1

Input: "programming"
Output: progamin


Example-2

Input: "aabbcc"
Output: abc


Example-3

Input: "C language"
Output: C langue*/
Code

#include <stdio.h>
#include <stdint.h>

void remove_duplicates(char *str) {
    uint8_t i = 0, j = 0;
    char seen[256] = {0};  // ASCII character map

    while (str[i]) {
        if (!seen[(uint8_t)str[i]]) {
            seen[(uint8_t)str[i]] = 1;
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';  // Null-terminate the result
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

    remove_duplicates(str);
    printf("%s", str);
    return 0;
}
/*
Solving Approach

1. Track seen characters

Use a fixed-size array seen[256] to represent all possible ASCII characters.

Each index corresponds to a character (seen['e'], seen['m'], etc.).

Initialize all entries to 0.

2. Iterate through the input string

Use two pointers:

i: scans the original string

j: builds the result in-place

3. Check if character is already seen

If seen[str[i]] == 0, it’s the first time we’ve seen this character:Set seen[str[i]] = 1

Copy str[i] to str[j]

Increment j

If seen[str[i]] == 1, skip it.

4. Terminate the result

After the loop, set str[j] = '\0' to properly end the string.



🧩 Embedded-Friendly Notes

No dynamic memory

No string libraries

Works in-place — no extra string buffer

Uses only char, uint8_t, and fixed-size arrays

Count Alphabets Digits and Symbols in a String
You are given a null-terminated string containing alphabets, digits, symbols, and spaces. Your task is to:

Count the number of:
Alphabets (A–Z, a–z)
Digits (0–9)
Other symbols (anything that is not alphabet, digit, or space)
Avoid using standard library functions like isalpha(), isdigit().

 

Example-1

Input: "C99_Firmware!"
Output:
Alphabets = 9  
Digits = 2  
Symbols = 2
 

Example-2

Input: "123@hello#"
Output:
Alphabets = 5  
Digits = 3  
Symbols = 2
*/

#include <stdio.h>
#include <stdint.h>

void classify_chars(const char *str, uint8_t *alpha, uint8_t *digit, uint8_t *symbol) {
    // Your logic here
    uint8_t i = 0;
    while (str[i]) {
        char temp = str[i];
        if (temp == ' ') {
            i++;
            continue;  // Skip spaces
        }

        if((temp >= 'A' && temp <= 'Z')  || (temp>='a' && temp<='z')){
            (*alpha)++;
        }                    
        else if(temp >= '0' && temp <= '9'){
            (*digit)++;
        }            
        else{
            (*symbol)++;
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

    uint8_t alpha = 0, digit = 0, symbol = 0;
    classify_chars(str, &alpha, &digit, &symbol);
    printf("Alphabets = %u\nDigits = %u\nSymbols = %u", alpha, digit, symbol);
    return 0;
}



















