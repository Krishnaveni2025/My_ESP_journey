/********* C PROGRAMMING FOUNDATION COURSE ********** */
/*C Programming Self Assessment test 1*/

/*1. Get a number from the user and 
add 2 to that number and print the result*/
/*Example: 
Input :  45 Output: 47
Input : 56789 Output: 56791*/
/*#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    //your code here
    y=x+2;
    printf("Result: %d\n",y);
    return 0;
}*/
/*2. Get a number from the user and 
subtract 5 from that number and print the result*/
/*Example: 
Input :  45 Output: 40
Input : 56789 Output: 56784*/
/*#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    //your code here
    y=x-5;
    printf("Result: %d\n",y);
    return 0;
}*/
/*3. Get a number from the user and 
mulrtiply 3 by that  number and print the result*/
/*Example: 
Input :  45 Output: 135
Input : 1200  Output:3600 */
/*#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    //your code here
    y=x*3;
    printf("Result: %d\n",y);
    return 0;
}*/
/*4. Get a number from the user and 
divide that number by 6 and print the result*/
/*Example: 
Input :  45 Output: 7
Input : 143 Output: 23 */
/*#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    //your code here
    y=x/6;
    printf("Result: %d\n",y);
    return 0;
}
*/
/*5. Get a number from the user and 
divide that number by 8 and print the remainder*/
/*Example: 
Input :  45 Output: 5
Input : 143 Output: 7 */
/*#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    //your code here
    y=x%8;
    printf("Result: %d\n",y);
    return 0;
}*/
/*6.Get a two digit number from the user and print the ones digit
Exampple: Input:45 Output:5
Input:56 Output:6

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    //your code here
    y=x%10;
    printf("Result: %d\n",y);
    return 0;
}*/
/*7.Get a two digit number from the user and print the tens digit
Exampple: Input:45 Output:4
Input:56 Output:5
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    //your code here
    y=x/10;
    printf("Result: %d\n",y);
    return 0;
}*/
/*8.Get a three digit number from the user and print the ones digit
Exampple: Input:456 Output:6
Input:569 Output:9
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    //your code here
    y=x%10;
    printf("Result: %d\n",y);
    return 0;
}*/
/*9.Get a three digit number from the user and print the hundred's digit
Example: Input:456 Output:4
Input:569 Output:5
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    //your code here
    y=x/100;
    printf("Result: %d\n",y);
    return 0;
}*/
/*10. Get a three digit number from user and print the result 
Examle: Input:456 Output:5
Input: 569  Output:6 
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    //your code here
    y=(x/10)%10;
    printf("Result: %d\n",y);
    return 0;
}*/
/*12. Get a three digit number from user and print the sum of its digits
Example: Input:562 Output:13
Input: 469  Output:19
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    //your code here
    y=(x/100)+(x/10)%10+x%10;//(x/100) gives the hundred's digit, (x/10)%10 gives the tens digit and x%10 gives the ones digit
    printf("Result: %d\n",y);
    return 0;
}*/
/*13.GEt a TWO digit number from the user and print the reverse of it.
Example: Input:56 Output:65
Input:59 Output:95

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    //your code here
    y=(x%10)*10+(x/10);
    printf("Result: %d\n",y);
    return 0;
}*/
/*14. Get a THREE digit number from the user and print the reverse of it.
Example: Input:561 Output:165
Input: 859  Output:958

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    //your code here
    y=(x%10)*100+((x/10)%10)*10+(x/100);
    printf("Result: %d\n",y);
    return 0;
}*/
/*15. Get a four digit number from the user and 
only  reverse the first two digits of the number 
and print the RESULT.
Example: Input:9561 Output:9516
Input:3859 Output:3895
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    //your code here
    y = ((x/100)*100)+((x%100)%10)*10+((x%100)/10);
    printf("Result: %d\n",y);
    return 0;
}*/
/*17.Get a two - digit number from the user 
make the one's digit 0, then print the Result.
Example: input:95 Output:90
input:18 Output:10
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    //your code here
    y = x/10*10;
    printf("Result: %d\n",y);
    return 0;
}*/
/*18.Get a two - digit number from the user 
make the ten's digit 1, then print the Result.
Example: input:95 Output:15
input:82 Output:12
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    //your code here
    y = x%10+10;
    printf("Result: %d\n",y);
    return 0;
}*/
/* 19. Get a three-digit number from the user 
and make it's one's digit 2 , and then print the result.
Example: Input :695 Output:692
Input:181 Output:182
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    //your code here
    y = x/10*10+2;//x/10*10 gives the tens digit and 2 is the new ones digit
    printf("Result: %d\n",y);
    return 0;
}*/
/*21.Get a number from the user and subtract 5 from that number
if the number is ODD then print the result.
Do not use 'if'.
Example: 
Input :695 Output:690
Input :182 Output:182*/
/*#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter a Number: ");
    scanf("%d",&x);
    while(x%2==1)
    {
        y=x-5;
        break;
    }
    while (x%2==0)
    {
        y = x;
        break;
    }
    
    printf("RESULT = %d",y);
    return 0;
}*/
/*22.Get a number from the user and subtract 5 from that number
if the number's ten's position  is ODD then print the result.
Do not use 'if'.
Example: 
Input :685 Output:685
Input :89172 Output:89167
#include<stdio.h>
int main()
{
    int x, y,z;
    printf("Enter a Number: ");
    scanf("%d",&x);
    while(x!=0)
    {
        z=(x/10)%10;
        break;
    }
    while(z%2==1)
    {
        y=x-5;
        break;
    }
    while (z%2==0)
    {
        y = x;
        break;
    }
    
    printf("RESULT = %d",y);
    return 0;
}*/
/*23. Get a two-digit number from the user and
subtract 5 from that number if the sum of its digits is ODD
then print the result. Do not use "if"
Example: 
Input: 95 Output:95
Input:72  Output:67
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a Two-Digit Number: ");
    scanf("%d",&x);
    y=(x/10)+(x%10);
    //printf("%d",y);
    while(y%2==1)
    {
        printf("Result=%d",x-5);
        break;
    }
    while(y%2==0)
    {
        printf("Result=%d",x);
        break;
    }
    
}*/
/*24. Get a Three-digit number from the user
and subtract 5 from that number
if the one's and 100's digit numbers are ODD
then print the Result.
Do not use "if"
Example: 
Input:795 Output:790
Input:372 Output:372

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a Three-Digit number: ");
    scanf("%d",&x);
    y=x-5;
    while((x%10)%2==1)
    {
        while ((x/100)%2==1)
        {
            printf("Result= %d",y);
            break;
        }
        break;
    }
    while((x%10)%2==0)
    {
        printf("Result=%d",x);
        break;
    }
}*/
/*11.Get a two digit number from the user and
print the sum of the digits.
Example:
Input:56 Output:11
Input:69 Output:15
#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter a Two- Digit Number: ");
    scanf("%d",&x);
    y = (x/10)+(x%10);
    printf("Result=%d",y);
    return 0;
}*/
/*16. Get a Four-Digit number from the user
and only reverse the last two digits of the number
then print the number.
Example: 
Input:9561 Output:5961
Input:3859 Output:8359

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a four-digit number: ");
    scanf("%d",&x);
    y=(((x/100)%10)*1000)+(((x/100)/10)*100)+(x%100);
    printf("Result=%d",y);
    return 0;

}*/
/*20.Get a Three - Digit number from the user
and then make the ten's digit as 0,
then ptrint the result.
Example:
Input:695 Output:605
Input:182 Output:102

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a Three-Digit Number: ");
    scanf("%d",&x);
    y=((x/100)*100)+(x%10);
    printf("Result=%d",y);
    return 0;
}*/
/*25. Get a THREE-DIGIT number from the user.
If the sum of its digits is less than 10,
then print the sum.
Otherwise add the digits of the sum.
If the sum of the digits is less than 10,
then print the sum.
Otherwise add the digits of the sum.
If the sum of the digits is less than 10,
then print the sum.
NOTE: The result shouold always be a single digit only.
Example:
Input:123 Output:6
Input:149 Output:5(149:1+4+9=14:1+4=5)
Input:991 Output:1(199:1+9+9=19:1+9=10:1+0=1)
*/
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a Three-digit number: ");
    scanf("%d",&x);
    y=0;
    while(x!=0)
    {
        int digit=x%10;
        y=y+digit;
        x=x/10;
    }
    while(y>9)
    {
        y=(y/10)+(y%10);
    }
    printf("Result=%d",y);
    return 0;
}
