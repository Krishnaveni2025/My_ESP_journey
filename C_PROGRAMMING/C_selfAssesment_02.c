/* ***************CPROGRAMMING****************/
/**ASSESSMENT 2**/
/**
 1.Get a number from the user and check if the
 number is equals 50. If yes, then print 1, Otherwise print 0.
 Example:
 Input:50 Output: 1
 Input:56789 Output:0

#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter a Number: ");
    scanf("%d",&x);
    //your code here
    //y = (x == 50) ? 1 : 0;//Ternary Operator checks if x is equal to 50, if yes then y = 1, otherwise y = 0
    if(x == 50)
    {
        y = 1;
    }
    else
    {
        y = 0;
    }
    printf("%d",y);
    return 0;
}*/
/*2.Get a number from the user and check
if the number is not equal to 50.
If yes, then print 1 otherwise,print 0.
 Example:
 Input:50 Output: 0
 Input:56789 Output:1
#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter a Number: ");
    scanf("%d",&x);
    //your code here
    //y = (x != 50) ? 1 : 0;//Ternary Operator checks if x is not equal to 50, if yes then y = 1, otherwise y = 0
    if(x != 50)
    {
        y = 1;
    }
    else
    {
        y = 0;
    }
    printf("%d",y);
    return 0;
}
*/
/*3.Get a number from the user and check if the number is less than 50.
If yes, then print 1 otherwise, print 0.
 Example:
 Input:45 Output: 1
 Input:56789 Output:0

#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter a Number: ");
    scanf("%d",&x);
    //your code here
    //y = (x < 50) ? 1 : 0;//Ternary Operator checks if x is less than 50, if yes then y = 1, otherwise y = 0
    if(x < 50)
    {
        y = 1;
    }
    else
    {
        y = 0;
    }
    printf("%d",y);
    return 0;
}*/
/*4.Get a number from the user and check if the number is greater than 50.
If yes, then print 1 otherwise, print 0.
 Example:
 Input:45 Output: 0
 Input:56789 Output:1
#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter a Number: ");
    scanf("%d",&x);
    //your code here
    //y = (x > 50) ? 1 : 0;//Ternary Operator checks if x is greater than 50, if yes then y = 1, otherwise y = 0
    if(x > 50)
    {
        y = 1;
    }
    else
    {
        y = 0;
    }
    printf("%d",y);
    return 0;
}*/
/*5.Get a number from the user and check if the number is less than or equal to 50.
If yes, then print 1 otherwise, print 0.
 Example:
 Input:45 Output: 1
 Input:56789 Output:0
#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter a Number: ");
    scanf("%d",&x);
    //your code here
    //y = (x <= 50) ? 1 : 0;//Ternary Operator checks if x is less than or equal to 50, if yes then y = 1, otherwise y = 0
    if(x <= 50)
    {
        y = 1;
    }
    else
    {
        y = 0;
    }
    printf("%d",y);
    return 0;
}*/
/*6.Get a number from the user and check if the number is greater than or equal to 50.
If yes, then print 1 otherwise, print 0.
 Example:
 Input:45 Output: 0
 Input:56789 Output:1
#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter a Number: ");
    scanf("%d",&x);
    //your code here
    //y = (x >= 50) ? 1 : 0;//Ternary Operator checks if x is greater than or equal to 50, if yes then y = 1, otherwise y = 0
    if(x >= 50)
    {
        y = 1;
    }
    else
    {
        y = 0;
    }
    printf("%d",y);
    return 0;
}*/
/*7.Get a two-digit number from the user
and check if the digit 1 and digit 0 are identical.
If Yes, print 1; otherwise print 0 .
Example:
Input:55 Output:1
Input:56 Output:0

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a Two-Digit Number: ");
    scanf("%d",&x);
    //your code here
    y=x/10;
    if(y == (x%10))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}*/
/*8. Get a two-digit from the user and
check if the digit 0 and digit 1 are not identical.
If yes, print 1; Otherwise, print 0.
EXample:
Input:55 Output:0
Input:56 Output:1

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a Two-Digit Number: ");
    scanf("%d",&x);
    //your code here
    y=x/10;
    if(y != (x%10))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}*/
/*9. Get a two-digit number from the user and
check if the digit 0 is less than the digit 1.
If yes, print 1; Otherwise print 0.
Example:
Input:54 Output:1
Input:45 Output:0

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a two-digit number: ");
    scanf("%d",&x);
    //your code here
    y=x%10;
    if(y < (x/10))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}*/
/*10. Get a two-digit number from the user and
check if the digit 0 is greater than the digit 1.
If yes, print 1; Otherwise print 0.
Example:
Input:45 Output:1
Input:76 Output:0

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a two-digit number: ");
    scanf("%d",&x);
    //your code here
    y=x%10;
    if(y > (x/10))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
*/
/*11. Get a two-digit number from the user and
check if the digit 1 is less than or equals to the digit 0.
If yes, print 1; Otherwise print 0.
Example:
Input:66 Output:1
Input:67 Output:1
Input:98 Output:0

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a two-digit number: ");
    scanf("%d",&x);
    //your code here
    y=x/10;
    if(y <= (x%10))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
*/
/*12. Get a two-digit number from the user and
check if the digit 1 is greater than or equals to the digit 0.
If yes, print 1; Otherwise print 0.
Example:
Input:66 Output:1
Input:67 Output:0
Input:98 Output:1

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a two-digit number: ");
    scanf("%d",&x);
    //your code here
    y=x/10;
    if(y >= (x%10))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}*/
/*13. Get a four-digit number from the user and
check if the digit 1 and digit 0 are different.
If yes, print 1; Otherwise print 0.
Example:
Input:1988 Output:1
Input:1567 Output:1

#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter a four-digit number: ");
    scanf("%d", &x);
    // your code here
    y = (x % 100) / 10;
    if (y == (x % 10))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}*/
/*14. Get a Four digit number from the user and
check if the first 2 digits and last 2 digits are the same.
If yes, print 1: Otherwise print 0.
Example:
Input:1919 Output:1
Input:6567 Output:0
*/
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a Four-Digit Number: ");
    scanf("%d",&x);
    //your code here
    y=x/100;
    if(y==(x%100))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}