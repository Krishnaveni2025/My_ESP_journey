/*
1) Use int variables
2) Use only decimals
3) Use if/else statement.
=======================C LEVEL 3==========================================
1. Get a number from the user and check if the number equals 50. If yes, then print "SUCCESS", otherwise print "Failure"
2. Get a number from the user and check if the number is not equals to 50. If yes, then print "Success", otherwise print "Failure"
3. Get a number from the user and check if the number is less than 50. If yes, then print "Success", otherwise print "Failure"
4. Get a number from the user and check if the number is greater than 50. If yes, then print "Success", otherwise print "Failure"
5. Get a number from the user and check if the number is less than or equal to 50. IF yes, then print "Success", otherwise print "Failure"
6. Get a number from the user and check if the number is greater than or equal to 50. If yes print "Success", otherwise print "Failure"
7. Get a two-digit number from the user and check if the digit 0 and  digit 1 are identical. If yes, print "Success", otherwise print "Failure"
8. Get a two-digit number from the user and check if the digit 0 and  digit 1 are not identical. If yes, print "Success", otherwise print "Failure"
9. Get a two-digit number from the user and check if the digit 0 is less than digit 1. If yes, print "Success", otherwise print "Failure"
10. Get a two-digit number from the user and check if the digit 0 is greater than digit 1. If yes, print "Success", otherwise print "Failure"
11. Get a two-digit number from the user and check if the digit 1 is less than or equal to the digit 0. If yes, print "Success", otherwise print "Failure"
12. Get a two-digit number from the user and check if the digit 1 is greater than or equal to the digit 0. If yes, print "Success", otherwise print "Failure"
13. Get a three-digit number from the user and check if the digit 0 and digit 1 are same and if digit 1 and digit 2 are different. If yes, print "Success", otherwise print "Failure"
14. Get a four-digit number from the user and check if the first 2 digits and last two digits are same. If yes, print "Success", otherwise print "Failure"*/
#include <stdio.h>
int main()
{
    int x;
    /*printf("Enter a number: ");
    scanf("%d", &x);
    if(x == 50)
        printf("Success");
    else
        printf("Failure"); Problem 01*/
    /*if(x != 50)
        printf("Success");
    else
        printf("Failure"); Problem 02*/
    /*if(x < 50)
        printf("Success");
        else
        printf("Failure"); Problem 03*/
    /*if(x > 50)
        printf("Success");
        else
        printf("Failure"); Problem 04*/
    /*if(x <= 50)
        printf("Success");
    else
        printf("Failure"); Problem 05*/
    /*if(x >= 50)
        printf("Success");
    else
        printf("Failure"); Problem 06*/
    /*printf("Enter a Two-digit Number: ");
    scanf("%d", &x);
    if((x % 10) == (x / 10))
        printf("Success");
    else
        printf("Failure"); Problem 07*/
    /*printf("Enter a Two-digit Number: ");
    scanf("%d", &x);
    if((x % 10) != (x / 10))
        printf("Success");
    else
        printf("Failure"); Problem 08*/
    /*printf("Enter a Two-digit Number: ");
    scanf("%d", &x);
    if((x % 10) < (x / 10))
        printf("Success");
    else
        printf("Failure"); Problem 09*/
    /*printf("Enter a Two-digit Number: ");
    scanf("%d", &x);
    if((x % 10) > (x / 10))
        printf("Success");
    else
        printf("Failure"); Problem 10*/
    /*printf("Enter a Two-digit Number: ");
    scanf("%d", &x);
    if((x % 10) <= (x / 10))
        printf("Success");
    else
        printf("Failure"); Problem 11*/
    /*printf("Enter a Two-digit Number: ");
    scanf("%d", &x);
    if((x % 10) >= (x / 10))
        printf("Success");
    else
        printf("Failure"); Problem 12*/
    /* printf("Enter a Three-digit Number: ");
     scanf("%d", &x);
     if(((x % 10) == ((x / 10) % 10)) && ((x / 10) % 10) != (x / 100))
         printf("Success");
     else
         printf("Failure"); Problem 13*/
    printf("Enter a Four-digit Number: ");
    scanf("%d", &x);
    if ((x / 100) == (x % 100))
        printf("Success");
    else
        printf("Failure"); // Problem 14
}
