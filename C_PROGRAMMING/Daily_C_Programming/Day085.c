/*
1)Use only 'int' variables
2)Use only Decimals
3)Use 'for' statements to solve problems, 'if' also  can be used to decision making but not for loop
4)Don't use arrays, pointers, strings, etc.

16. Write a program to get a number from the user print whether that number is prime or not
17. Write a program to get a number from the user print whether that number is prime and sum of digits is equal to 14
18. Write a program to get a number from the user print whether the first two digits (1's, 10's) is prime
19. Write a program to get a four-digit number fromt the user and print whether it's middle two digits (100's, 10's) is prime
20. Write a program to print single digit prime numbers
21. Write a program to get a number from the user and print the total number of digits which are odd in the number
22. Write a program to get a number from the user and print the total number of two-digit odd numbers in that number
23. Write a program to get a number from the user and print the total number of single digit perfect square numbers in the number
24. Write a program to get a number from the user and print the total number of two digit perfect square numbers in the number
25. Write a program to get a number from the user and print the total number of single digit prime numbers in the number
26. Write a program to print the biggest four-digit number which is divisible by 7 and 9
27. Write a program to print the total count of numbers which are less than 100000 and whose sum of digits is 14
28. Write a program to get two numbers from the user and print LCM of those numbers
29. Write a program to get three numbers from the user and print LCM of those numbers
30. Write a program to get two numbers from the user and print HCF of those numbers*/
#include <stdio.h>
int main()
{
    int x;
#if 0 
printf("Enter a Number: ");
    scanf("%d", &x);
 int i = 2, is_prime = 1;
    if (x <= 1)
    {
        is_prime = 0;
    }
    else
    {
        for (;;)
        {
        loop:
            if (i * i <= x)
            {
                if (x % i == 0)
                {
                    is_prime = 0;
                    break;
                }
                else
                {
                i++;
                goto loop;
                }
            }
            break;
        }
    }
    if (is_prime == 1)
         printf("Prime");
    else
        printf("Not Prime");
#endif
#if 0
printf("Enter a Number: ");
    scanf("%d", &x);
    int sum = 0, i = 2, is_prime = 1;
    if (x <= 1)
    {
        is_prime = 0;
        sum = 1;
    }
    else
    {
        for (;;)
        {
        loop:
            if (i * i <= x)
            {
                if (x % i == 0)
                {
                    is_prime = 0;
                    break;
                }
                else
                {
                    i++;
                    goto loop;
                }
            }
        loop1:
            if (x)
            {
                sum += (x % 10);
                x = x / 10;
                goto loop1;
            }
            break;
        }
    }
    if ((is_prime == 1) && (sum == 14))
        printf("Prime & sum of digits is 14");
    else if ((is_prime == 1) && (sum != 14))
        printf("Prime sum of digits not 14");
    else if ((is_prime == 0) && (sum == 14))
        printf("Not Prime sum of digits is 14");
    else if ((is_prime == 0) && (sum != 14))
        printf("Not Prime sum of digits not 14");
#endif // Question 17
#if 0
printf("Enter a Number: ");
    scanf("%d", &x);
 int i = 2, is_prime = 1;
 x = ((((x/10)%10)*10)+(x%10));
    if (x <= 1)
    {
        is_prime = 0;
    }
    else
    {
        for (;;)
        {
        loop:
            if (i * i <= x)
            {
                if (x % i == 0)
                {
                    is_prime = 0;
                    break;
                }
                else
                {
                i++;
                goto loop;
                }
            }
            break;
        }
    }
    if (is_prime == 1)
         printf("Prime");
    else
        printf("Not Prime");
#endif // Question 18
#if 0
printf("Enter a Number: ");
    scanf("%d", &x);
int i = 2, is_prime = 1;
 x = ((((x/100)%10)*10)+((x/10)%10));
    if (x <= 1)
    {
        is_prime = 0;
    }
    else
    {
        for (;;)
        {
        loop:
            if (i * i <= x)
            {
                if (x % i == 0)
                {
                    is_prime = 0;
                    break;
                }
                else
                {
                i++;
                goto loop;
                }
            }
            break;
        }
    }
    if (is_prime == 1)
         printf("Prime");
    else
        printf("Not Prime");
#endif // Question 19
#if 0
    int  i, is_prime, prime_count = 0;
    x = 2;
    for (;;) {
        if (x > 9) {
            break;
        }

        i = 2;
        is_prime = 1;

        for (;;) {
            if (i * i > x) {
                break;
            }
            if (x % i == 0) {
                is_prime = 0;
                break;
            }
            i++;
        }

        if (is_prime == 1) {
            prime_count++;
        }

        x++;
    }

    printf("%d\n", prime_count);
#endif // Question 20
#if 0
    printf("Enter a Number: ");
    scanf("%d", &x);
    int count = 0;
    for (;;)
    {
    loop:  if (x != 0)
        {
            if ((x % 10) % 2 == 1)
            {
                count++;
            }
            x = x / 10;
            goto loop;
        }
        break;
    }
    printf("%d", count);
#endif // Question 21
#if 0
    printf("Enter a Number: ");
    scanf("%d", &x);
    int count = 0;
    for (;;)
    {
    loop:
        if (x)
        {
            int pair = (x % 100);
            if (pair >= 10 && pair <= 99)
            {
                if (pair % 2)
                {
                    count++;
                }
            }
            x = x / 10;
            goto loop;
        }
        break;
    }
    printf("%d", count);
#endif // Question 22
#if 0
    printf("Enter a Number: ");
    scanf("%d", &x);
    int count = 0;
    for (;;)
    {
    loop:
        if (x)
        {
            if((x%10 == 1) || (x%10 == 4) || (x%10 == 9))
            {
                count++;
            }
            x = x / 10;
            goto loop;
        }
        break;
    }
    printf("%d",count);
#endif // Question 23
#if 0
    printf("Enter a Number: ");
    scanf("%d", &x);
    int count = 0;
    for (;;)
    {
    loop:
        if (x)
        {
            if((x%100 == 16) || (x%100 == 25) || (x%100 == 36) || (x%100 == 49) ||(x%100 == 64 || (x%100 == 81)))
            {
                count++;
            }
            x = x / 10;
            goto loop;
        }
        break;
    }
    printf("%d",count);
#endif // Question 24
#if 0
    printf("Enter a Number: ");
    scanf("%d", &x);
    int count = 0;
    for (;;)
    {
    loop:
        if (x)
        {
            if((x%10 == 2) || (x%10 == 3) || (x%10 == 5) || (x%10 == 7) )
            {
                count++;
            }
            x = x / 10;
            goto loop;
        }
        break;
    }
    printf("%d",count);
#endif // Question 25
#if 0
    x = 9999;

    for (;;)
    {
        if (x % 7 == 0 && x % 9 == 0)
        {
            printf("%d\n", x);
            break;
        }
        x = x - 1;
    }
#endif // Question 26
    int count = 0, number, sum = 0;
    x = 10;

    for (;;)
    {
    loop1:
        if (x < 100000)
        {
            number = x;
        loop2:
        number = x;
            if (sum == 14)
            {
                //printf("%d\n",x);
                count++;
            }
        loop:
            if (number)
            {
                sum += (number % 10);
                number /= 10;
                goto loop;
            }
            else{
                x++;
                sum = 0;
                goto loop2;
            }
            sum = 0;
            goto loop1;
        }
        break;
    }
    printf("%d", count);
    return 0;
}

