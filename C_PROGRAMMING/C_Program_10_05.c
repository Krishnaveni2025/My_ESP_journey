/* C LEVEL 10 Problem 05
  Don't use structures
  Question: Get an integer and print it as a string
*/
#include <stdio.h>

int main() {
    int number,j,i = 0;
    char str[100];   // array to hold string output
    printf("Enter a Number: ");
    scanf("%d",&number);
    while(number)
    {
        str[i] = (number%10)+'0';
        number /= 10;
        i++;
    }
    str[i] = '\0';  // null terminate

    // Reverse the string (since digits were added backwards)
    for (j = 0; j < i / 2; j++) {
        char temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }
    printf("String = %s",str);

    return 0;
}
