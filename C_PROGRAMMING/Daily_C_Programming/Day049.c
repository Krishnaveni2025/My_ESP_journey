/*=================================C LEVEL 5=======================================
1)Use only 'int' variables
2)Use only Decimals
3)Use 'for' statements to solve problems, 'if' also  can be used to decision making but not for loop
4)Don't use arrays, pointers, strings, etc.
1. Write a loop program to print 1 to 5 on one by one
2. Write a loop program to print 5 to 1 on one by one
3. Write a loop program to print sum from 1 to 5
4. Write a loop program to print sum of 6 to 1
5. Write a loop progam to print odd numbers between 1 and 9
6. Write a loop program to print the two-digit odd numbers, below 20
7. Write a loop program to print the two-digit odd numbers whose sum of digits are 7
8. Write a loop program to print the two-digit even numbers whose sum of digits are 6
9. Write a loop program to print the sum of two-digit numbers whose one's digit is 5
10. Write a loop program to print sum of digit two-digit odd numbers whose ten's digit is 7
11. Write a program to get a number from the user and print the total number of digits in that number
12. Write a program to get a number from the user and print the sum of all digits
13. Write a program to get a number from the user and print the reverse of that number
14. Write a program to get a number from the user and interchange the first and last digits and print the result

*/
#include <stdio.h>
int main()
{
    int x;
    // your code here
    
    printf("Enter a number: ");
    scanf("%d", &x);
    int first, last = 0, temp, multiplier = 1, middle, result;
    first = (x % 10);
    temp = x;
    for (;;)
    {
    loop:
        if (temp > 10)
        {
            temp /= 10;
            multiplier *= 10;
            goto loop;
        }
        last = temp;
        middle = (x % multiplier) / 10;
        result = first * multiplier + middle * 10 + last;
        printf("%d", result);
        break;
    }
 //Question 14
#if 0
printf("Enter a Number: ");
scanf("%d",&x);
int rev = 0;
for(;;)
{
    loop:
    if(x)
    {
        rev = (rev*10)+(x%10);
        x/=10;
        goto loop;
    }
    printf("%d",rev);
    break;
}
#endif // Question 13
#if 0
printf("Enter a Number: ");
scanf("%d",&x);
int sum = 0;
for(;;)
{
    loop:
    if(x)
    {
        sum += (x%10);
        x/=10;
        goto loop;
    }
    printf("%d",sum);
    break;
}
#endif // Question 12
#if 0
printf("Enter a number: ");
scanf("%d",&x);
int digits = 0;
for(;;)
{
    loop:
    if(x)
    {
        digits++;
        x/=10;
        goto loop;
    }
    printf("%d",digits);
    break;
}
#endif // Question 11
#if 0
x = 10;
int sum = 0;
for(;;)
{
    loop:
    if(x<100)
    {
        if(x%2)
        {
            if((x/10)==7)
                    sum += x;
        }
        x++;
        goto loop;
    }
    printf("%d",sum);
    break;
}
#endif // Question 10
#if 0
    x = 15;
    int sum = 0;
for(;;)
{
    loop:
    if(x<100)
    {
        if((x%10)==5)
            sum += x;
        x++;
        goto loop;
    }
    printf("%d",sum);
    break;
}
#endif // Question 9
#if 0
    x = 10;
    for (;;)
    {
    loop:
        if (x < 100)
        {
            if (!(x % 2))
            {
                if (((x % 10) + (x / 10)) == 6)
                    printf("%d\n", x);
            }
            x++;
            goto loop;
        }
        break;
    }
#endif // Question 8
#if 0
x = 11;
for(;;)
{
    loop:
    if(x<100)
    {
        if(x%2)
        {
            if(((x/10)+(x%10))==7)
                    printf("%d\n",x);
        }
        x++;
        goto loop;
    }
            break;
}
#endif // Question 7
#if 0
    x = 11;
    for (;;)
    {
    loop:
        if (x < 20)
        {
            if (x % 2)
            {
                printf("%d\n", x);
            }
            x++;
            goto loop;
        }
                break;
    }
#endif // Question 6
#if 0
    x = 1;
    for (;;)
    {

    loop:
        if (x < 10)
        {
            if (x % 2)
            {
                printf("%d\n", x);
            }
            x++;
            goto loop;
        }
            break;
    }
#endif // Question 5
#if 0
    x = 6;
    int sum = 0;
    for (;;)
    {
    loop:
        if (x == 0)
            break;
        sum += x;
        x--;
        goto loop;
    }
    printf("%d", sum);
    break;
#endif // Question 4
#if 0
x = 1;
int sum = 0;
for(;;)
{
    loop:
    if(x==6)
        break;
    sum += x;
    x++;
    goto loop;
}
printf("%d",sum);
break;
#endif // Question 3
#if 0
x=5;
for(;;)
    {
        //your code here
        loop:
        if(x==0)
            break;
        printf("%d\n",x);
        x--;
        goto loop;
    }
#endif // Question 2

#if 0
x=1;
for(;;)
    {
        //your code here
        loop:
        if(x==6)
            break;
        printf("%d\n",x);
        x++;
        goto loop;
    }
#endif // Question 1
    return 0;
}
