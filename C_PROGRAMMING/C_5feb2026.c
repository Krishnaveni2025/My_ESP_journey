/*=========================C LEVEL 2====================================
1) use only int variables
2) use only decimals
3) use the following operations only
    +,-,*,/,%,&, ==,>,<,!=,<=,=>
4) use only if, for, while, arrays, pointers, strings etc
1. Get a number from the user and check if the number is equals to 50. If yes, then print 1, otherwise print 0
2. Get a number from the user and check if the number is not equal to 50. If yes, then print 1, otherwise print 0
3. Get a number from the user and check if the number is less than 50. If yes, then print 1, otherwise print 0 
4. Get a number from the user and check if the number is greater than 50. If yes, then print 1, otherwise print 0
5. Get a number from the user and check if the number is less than or equal to 50. If yes then print 1, otherwise print 0
6. Get a number from the user and check if the number is greater than or equals to 50. If yes then print 1, otherwise print 0
7. Get a two-digit number from the user and check if the digit 0 and digit 1 are identical. If yes, then print 1, otherwise print 0
8. Get a two-digit number from the user and check if the digit 0 and digit 1 are not identical. If yes, then print 1, otherwise print 0
9. Get a two-digit number from the user and check if the digit 0 is less than the digit 1. If yes print 1; otherwise print 0
10. Get a two digit number from the user and check if the digit 0 is greater than digit 1. If yes print 1: otherwise print 0
11. Get a two-digit number from the user and check if the digit 1 is less than or equals to digit 0. If yes print 1; otherwise print 0
12. Get a two-digit number from the user and check if the digit 1 is greater than or equal to digit 0. If yes print 1; otherwise print 0
13. Get a three-digit number from the user and check if the digit 1 and digit 0 are same and digit 1 , digit 2 are different. If yes print 1; otherwise print 0
14. Get a four-digit number from the user and check if the first two digits and last two digits are same. If yes print 1; otherwise print 0
*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number: ");
    scanf("%d",&x);
    /*if(x==50)
        printf("1");
    else
        printf("0"); Problem 01*/
    /*if(x!=50)
        printf("1");
    else
        printf("0"); Problem 02*/
    /*if(x<50)
        printf("1");
    else
        printf("0"); Problem 03*/
    /*if(x>50)
        printf("1");
    else
        printf("0"); Problem 04*/
    /*if(x<=50)
        printf("1");
    else
        printf("0"); Problem 05*/
    /*if(x>=50)
        printf("1");
    else
        printf("0"); Problem 06*/
    /*printf("Enter a Two-digit Number: ");
    scanf("%d",&x);
    if((x%10)==(x/10))
        printf("1");
    else
        printf("0"); Problem 07*/
    /*printf("Enter a Two-digit Number: ");
    scanf("%d",&x);
    if((x%10)!=(x/10))
        printf("1");
    else
        printf("0"); Problem 08*/
    /*printf("Enter a Two-digit Number: ");
    scanf("%d",&x);
    if((x%10)<(x/10))
        printf("1");
    else
        printf("0"); Problem 09*/
    /*printf("Enter a Two-digit Number: ");
    scanf("%d",&x); 
    if((x%10)>(x/10))
        printf("1");
    else
        printf("0"); Problem 10*/
    /*printf("Enter a Two-digit Number: ");
    scanf("%d",&x);
    if((x/10)<(x%10))
        printf("1");
    else
        printf("0"); Problem 11*/
    /*printf("Enter a Two-digit Number: ");
    scanf("%d",&x);
    if((x/10)>=(x%10))
        printf("1");
    else
        printf("0"); Problem 12*/
    /*printf("Enter a Three-digit Number: ");
    scanf("%d",&x);
    if(((x/10)%10)==(x%10) && ((x/100)!=(x%10)))
        printf("1");
    else
        printf("0"); Problem 13*/
    /*printf("Enter a Four-digit Number: ");
    scanf("%d",&x);
    if(((x/100)==(x%100)))
        printf("1");
    else
        printf("0"); Problem 14*/
}