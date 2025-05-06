/*------C PROGRAMMING------*/
/*============ ASSESMENT 3 ======================*/
/*1. Get a number from the user check if the
number equals 50 . If yes ,Then print "Success", otherwise
"Failure".
Example:
Input:50 Output:Success
Input:56789 Output:Failure

#include<stdio.h>
int main()
{
    int input_num;
    scanf("%d",&input_num);
    if(input_num == 50)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}*/
/*2. Get a number from the user check if the
number not equals 50 . If yes ,Then print "Success", otherwise
"Failure".
Example:
Input:50 Output:Failure
Input:56789 Output:Success

#include<stdio.h>
int main()
{
    int input_num;
    scanf("%d",&input_num);
    if(input_num != 50)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}*/
/*3. Get a number from the user check if the
number is less than 50 . If yes ,Then print "Success", otherwise
"Failure".
Example:
Input:50 Output:Failure
Input:56789 Output:Success

#include<stdio.h>
int main()
{
    int input_num;
    scanf("%d",&input_num);
    if(input_num < 50)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}*/
/*2. Get a number from the user check if the
number greater than 50 . If yes ,Then print "Success", otherwise
"Failure".
Example:
Input:50 Output:Failure
Input:56789 Output:Success

#include<stdio.h>
int main()
{
    int input_num;
    scanf("%d",&input_num);
    if(input_num > 50)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}*/

/*5. Get a number from the user check if the
number less than equals 50 . If yes ,Then print "Success", otherwise
"Failure".
Example:
Input:45 Output:Success
Input:56789 Output: Failure

#include<stdio.h>
int main()
{
    int input_num;
    scanf("%d",&input_num);
    if(input_num <= 50)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}*/
/*6. Get a number from the user check if the
number greater than equals 50 . If yes ,Then print "Success", otherwise
"Failure".
Example:
Input:45 Output:Failure
Input:56789 Output:Success

#include<stdio.h>
int main()
{
    int input_num;
    scanf("%d",&input_num);
    if(input_num >= 50)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}*/
/*7. Get a two-digit number from the user and
check if the digit 1 and 0 are identical.
If yes, then print "Success",
else print "Failure".
Example:
Input:55 Output:success
Input:56 Output:Failure

#include<stdio.h>
int main()
{
    int input_num,ones,tens;
    scanf("%d",&input_num);
    ones=input_num%10;
    tens=input_num/10;
    if(ones == tens)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}*/
/*8. Get a two-digit number from the user and
check if the digit 1 and 0 are non-identical.
If yes, then print "Success",
else print "Failure".
Example:
Input:55 Output:Failure
Input:56 Output:success

#include<stdio.h>
int main()
{
    int input_num,ones,tens;
    scanf("%d",&input_num);
    ones=input_num%10;
    tens=input_num/10;
    if(ones != tens)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}*/
/*9. Get a two-digit number from the user and
check if the digit 0 is less than digit 1 .
If yes, then print "Success",
else print "Failure".
Example:
Input:54 Output:success 
Input:45 Output:Failure

#include<stdio.h>
int main()
{
    int input_num,ones,tens;
    scanf("%d",&input_num);
    ones=input_num%10;
    tens=input_num/10;
    if(ones < tens)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}*/
/*10. Get a two-digit number from the user and
check if the digit 0 is greater than digit 1 .
If yes, then print "Success",
else print "Failure".
Example:
Input:45 Output:success
Input:76 Output:Failure

#include<stdio.h>
int main()
{
    int input_num,ones,tens;
    scanf("%d",&input_num);
    ones=input_num%10;
    tens=input_num/10;
    if(ones > tens)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}*/
/*11. Get a two-digit number from the user and
check if the digit 01is less than or equals to digit 0 .
If yes, then print "Success",
else print "Failure".
Example:
Input:66 Output:success 
Input:67 Output:success
Input:98 Output:Failure

#include<stdio.h>
int main()
{
    int input_num,ones,tens;
    scanf("%d",&input_num);
    ones=input_num%10;
    tens=input_num/10;
    if(tens<=ones)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}*/
/*12. Get a two-digit number from the user and
check if the digit 01is greater than or equals to digit 0 .
If yes, then print "Success",
else print "Failure".
Example:
Input:66 Output:success 
Input:67 Output:Failure
Input:98 Output:success

#include<stdio.h>
int main()
{
    int input_num,ones,tens;
    scanf("%d",&input_num);
    ones=input_num%10;
    tens=input_num/10;
    if(tens>=ones)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}*/
/*14.Get a four-digit number from the user and
check if the first 2 digits ans last 2 digits are same.
If yes, Print "Success",
Otherwise Print "Failure".
Example:
Input:1919 Output:Success
Input:6567 Output:Failure
*/
#include<stdio.h>
int main()
{
    int input_num,first_2,last_2;
    printf("Enter a four-digit number: ");
    scanf("%d",&input_num);
    first_2 = input_num%100;
    last_2 = input_num/100;
    if(first_2 == last_2)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}