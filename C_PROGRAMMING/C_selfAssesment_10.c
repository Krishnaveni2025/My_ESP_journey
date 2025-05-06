/*C PROGRAMMING SELF ASSESSMENT 10
Don't use Stuctures*/
/*1. Get an alphabet and print is ASCII value. 
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    printf("The ASCII value of %c is %d\n", ch, ch);
    return 0;
}*/
/*2. Get a single number and print its ASCII value. 
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The ASCII value of %d is %c\n", num, num);
    return 0;
}*/
/*3. Get a String and print the same. */
/*
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("The string is: %s\n", str);
    return 0;
}
*/
/*4. Get a number as a String and print the integer value of the string. 
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a number as a string: ");
    scanf("%s", str);
    //without using atoi
    int num = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        num = num * 10 + str[i] - '0';//convert the string to integer
    }
    printf("The number is: %d\n", num);//print the integer value of the string
    return 0;
}*/

/*5. Get an Integer and print it as a string. 
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    char str[100];
    int i = 0;
    while(num != 0)
    {
        str[i++] = num % 10 + '0';//convert the integer to string
        num = num / 10;
    }
    str[i] = '\0';
    for(int j = i - 1; j >= 0; j--)
    {
        printf("%c", str[j]);//print the string
    }
    printf("\n");
    return 0;
}*/
/*6. Get an integer and print each digit as a character. 
Print one character on one line. 
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    char str[100];
    int i = 0;
    while(num != 0)
    {
        str[i++] = num % 10 + '0';//convert the integer to string
        num = num / 10;
    }
    str[i] = '\0';
    for(int j = i - 1; j >= 0; j--)
    {
        printf("%c\n", str[j]);//print each digit as a character
    }
    return 0;
}*/

/*7. Get a String and Find the length of the String. 
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    printf("The length of the string is: %d\n", len);
    return 0;
}*/
/*8. Get a String of numbers up to 50 digits and
validate the number. 
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a number: ");
    scanf("%s", str);
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] < '0' || str[i] > '9')
        {
            printf("Invalid number\n");
            return 0;
        }
        i++;
    }
    printf("Valid number\n");
    return 0;
}*/
/*9. Get a string of numbers upto 50 digits and remove all leading zeros. 
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a number: ");
    scanf("%s", str);
    int i = 0;
    while(str[i] == '0')
    {
        i++;
    }
    for(int j = i; str[j] != '\0'; j++)
    {
        printf("%c", str[j]);
    }
    printf("\n");
    return 0;
}*/
/*10. Get a number up to 50 digits and reverse it. 
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a number: ");
    scanf("%s", str);
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    for(int j = i - 1; j >= 0; j--)
    {
        printf("%c", str[j]);
    }
    printf("\n");
    return 0;
}*/
/* 11. Get a number string up to 50 digits and
convert it to an integer array. 
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a number: ");
    scanf("%s", str);
    int num[50];
    int i = 0;
    while(str[i] != '\0')
    {
        num[i] = str[i] - '0';//convert the string to integer array
        i++;
    }
    for(int j = 0; j < i; j++)
    {
        printf("%d", num[j]);//print the integer array
    }
    printf("\n");
    return 0;
}*/
/*12. Convert an integer array of upto 50 digits
to a character array and print using 
"printf("%s",......);"
Example: 
Array - 1 4 5 8 7 6 3
Answer: 1458763
#include<stdio.h>
int main()
{
    int num[50];
    int n;
    printf("Enter the number of digits: ");
    scanf("%d", &n);
    printf("Enter the number: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d", num[i]);
    }
    printf("\n");
    return 0;
}*/




