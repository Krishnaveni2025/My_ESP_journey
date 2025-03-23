//Question: Get a string and find the length of the string
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a String: ");
    scanf("%s",str);
    int length = strlen(str);
    printf("The length of the string is : %d", length);
    return 0;
}*/
/*--------------------USing Function---------------------------*/
#include <stdio.h>
#include <string.h>
/*Functions Declarations*/
void get_string(char *str, int size);/*Function1*/
int calculate_length(const char *str);/*Function2*/
// Main function
int main() {
    char str[100];
    get_string(str, sizeof(str));/*Calling Function1*/
    int length = calculate_length(str);/*Calling Function2*/
    printf("The length of the string is: %d\n", length);
    return 0;
}
// Function1 Defination to get a string from the user
void get_string(char *str, int size) {
    printf("Enter a string: ");
    scanf("%s", str);
}

// Function2 Defination to calculate the length of the string
int calculate_length(const char *str) {
    return strlen(str);
}


