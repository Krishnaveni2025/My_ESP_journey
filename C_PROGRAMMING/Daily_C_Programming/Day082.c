/*
Self Assessment 06
C LEVEL 6
1. Use 'int' variables
2. Use only decimals
3. Use 'while' statements to solve problems. "if" also can be used to decision making but not for loop
4. Do not use arrays, pointers, strings, etc.
Template:
#include<stdio.h>
int main()
{
    int x;
    // Your Code Here
    whille()
    {
    //your code here
    goto loop;
    }
    return 0;
}
    1. Write a loop program to print 1 to 5 on one by one.
    answer:
    1
    2
    3
    4
    5

    2. Write a loop program to print 5 to 1 on one by one.
    answer:
    5
    4
    3
    2
    1
    3. Write a loop program to  print sum of 1 to 5
    answer: 15
    4. Write a loop program to print sum of 6 to 1
    answer: 21
    5. Write a loop program to print odd numbers between 1 and 9
    answer:
    1
    3
    5
    7
    9
    6. Write a loop program to two digit odd numbers below 20
    answer:
    11
    13
    15
    17
    19
    7. Write a loop program to print two digit odd numbers whose sum of digits are 7
    answer:
    25
    43
    61
    8. Write a loop to print two digit even numbers whose sum of digits are 6
    answer:
    24
    42
    60
    9. Write a loop program to print the sum of two digit numbers whose one's digit is 5
    answer: 495
    10. Write a loop program ro print sum of two digit odd numbers whose ten's digit is 7
    answer: 375 
    11. Write a program to get a number from the user and print the total number of digits in that number
    answer:
    Input: 123456    - Output- 6
    Input: 76895439  - Output- 8
    Input: 675       - Output- 3
    12. Write a program to get a number from the user and print the sum of all digits
    answer:
    Input: 123456    - Output- 21
    Input: 76895439  - Output- 51
    Input: 675       - Output- 18
    13. Write a program to get a number from the user and print hte reverse of that number
    answer:
    Input: 123456    - Output- 654321
    Input: 76895439  - Output- 93459867
    Input: 675       - Output- 576s
    */
#include <stdio.h>
int main()
{
    int x;
    // Your Code Here
    #if 0
    printf("Enter a Number: ");
    scanf("%d", &x);   
    while (x)
    {
        printf("%d", x % 10);
        x = x / 10;
    }
    #endif // Question 13
    #if 0
    int sum = 0;
    scanf("%d", &x);
    while (x)
    {
        sum += (x % 10);
        x = x / 10;
    }
    printf("%d\n", sum);
    #endif // Question 12
    #if 0
    printf("Enter a Number: ");
    scanf("%d", &x);
    int count =  0;
    
    while(x != 0)
    {
        x = x / 10;
        count++;
    }
    printf("%d\n", count);
    #endif // Question 11
    #if 0
    x = 11;
    int sum = 0;
    loop:
    if(x<100)
    {
        if(x%2)
        {
            while((x/10)==7)
            {
                sum += x;
                break;
            }
        }
        x++;
        goto loop;
    }
    printf("%d\n",sum);
    #endif // Question 10
    #if 0
    x = 10;
    int sum = 0;
    loop:
    if(x<100)
    {
        while(x%10 == 5)
        {
            sum += x;
            break;
        }
        x++;
        goto loop;
    }
    printf("%d\n",sum);
    #endif // Question 9
    #if 0
    x = 10;
    loop: 
    if(x<100)
    {
        if(x%2==0)
        {
            while(((x/10)+(x%10))==6)
            {
                printf("%d\n",x);
                break;
            }
        }
        x++;
        goto loop;
    }
    #endif // Question 8
    #if 0
    x = 11;
    loop:
    if(x<100)
    {
        if(x%2)
        {
            while(((x/10)+(x%10))==7)
            {
                printf("%d\n",x);
                break;
            }
        }
        x++;
        goto loop;
    }
    #endif // Question 7
    #if 0
    x = 11;
    loop:
    if(x<20)
    {
        while(x%2)
        {
            printf("%d\n",x);
            break;
        }
        x++;
        goto loop;
    }
    #endif // Question 6
    #if 0
    x = 1;
loop:
    if (x <= 9)
    {
        while (x % 2)
        {
            printf("%d\n", x);
            break;
        }
        x++;
        goto loop;
    }
        #endif // Question 5
#if 0 
    x= 1;
    while(x <= 5)
    {
        printf("%d\n", x);
        x++;
    }
#endif // Question 1
#if 0
    x = 5;
    while (x >= 1)
    {
        printf("%d\n", x);
        x--;
    }
#endif // Question 2
#if 0
    x = 1;
    int sum = 0;
    while (x <= 5)
    {
        sum += x;
        x++;
    }
    printf("%d\n", sum);
#endif // Question 3
#if 0
    x = 6;
    int sum2 = 0;
    while (x >= 1)
    {
        sum2 += x;
        x--;
    }
    printf("%d\n", sum2);
#endif // Question 4

    return 0;
}
