/*
Implement Custom strcmp function
You are given two null-terminated strings.

Your task is to:

Compare them character by character using ASCII values
Return:
 
0 if all characters are the same and both strings end at the same time
If mismatched: ASCII difference of the first mismatched characters. I.e. positive value if the first non-matching character in string a is greater than that in string b or negative value (vice-versa)
Do not use built-in functions like strcmp().

 

Example-1

Input: "apple" and "apple"
Output: 0

Example-2

Input: "cat" and "bat"
Output: 1 
(because 'c' - 'b' = 1)


Example-3

Input: "abc" and "abcd"
Output: -100 
(because 'a'-'a'=0, 'b'-'b'=0, 'c'-'c'=0, then '\0' - 'd' = -100)
#include <stdio.h>

int custom_strcmp(const char *a, const char *b) {
    int i = 0;
    while (a[i] && b[i]) {
        if (a[i] != b[i]) {
            return a[i] - b[i];  // Correct sign
        }
        i++;
    }
    return a[i] - b[i];  // Handles cases like "abc" vs "abcd"
}
int main() {
    char a[101], b[101];
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    // Remove newline
    int i = 0;
    while (a[i]) {
        if (a[i] == '\n') { a[i] = '\0'; break; }
        i++;
    }
    i = 0;
    while (b[i]) {
        if (b[i] == '\n') { b[i] = '\0'; break; }
        i++;
    }

    printf("%d", custom_strcmp(a, b));
    return 0;
}

 Implement Custom strcpy function
In C, the strcpy() function copies a null-terminated string from source to destination.

Your task is to implement a custom version of strcpy() that copies one string into another without using built-in functions.

You will be given:

A source string src
A destination buffer dest[101] (you must copy into it)
Ensure the destination is null-terminated, just like standard strcpy.

 

Example-1

Input: "firmware"
Output: firmware

Example-2

Input: "abc 123"
Output: abc 123

Example-3

Input: ""
Output: ``
*/



#include <stdio.h>

void custom_strcpy(char *dest, const char *src) {
     int i = 0;
    while (i<=101) {
        if (src[i] == '') {
            break;
        }
        dest[i] = src[i];
        i++;
    }
}

int main() {
    char src[101];
    char dest[101];
    fgets(src, sizeof(src), stdin);

 
    int i = 0;
    while (src[i] != '\0') {
        if (src[i] == '') {
            src[i] = '\0';
            break;
        }
        i++;
    }

    custom_strcpy(dest, src);
    printf("%s", dest);
    return 0;
}
