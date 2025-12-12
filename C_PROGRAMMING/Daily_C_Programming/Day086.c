/*
Self Assessment 06
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
    13. Write a program to get a number from the user and print the reverse of that number
    answer:
    Input: 123456    - Output- 654321
    Input: 76895439  - Output- 93459867
    Input: 675       - Output- 576
    14. Write a program to get a number from the user and interchange the first and last digits of that number and print the new number
    answer:
    Input: 123456    - Output- 623451
    Input: 76895439  - Output- 96895437
    Input: 675       - Output- 576
    15. Write a program to get a number from the uer and if the last digit of the number is even print the same number.
    If the last digit of the number is odd subtract 1 from the number and print the number(last digit- MSB).
    Answer:
    Input:654324    - Output- 654324
    Input:76895439 - Output- 76895438
    Input:675      - Output- 675

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
    // Your Code Here

    
    //use while loop comment/uncomment as needed solve all questions
    #if 0
    x = 2;
    int i = 2, is_prime = 1;
    if (x <= 1)
    {
        is_prime = 0;
    }
    else
    {
        while (1)
        {
        loop:
            if(x<=9)
            {
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
                printf("%d\n",x);//print single digit prime numbers
                x++;
                goto loop;
                }
            }
            }
            break; 
        }
           
    }
    #endif // Question 20 
    #if 0
    printf("Enter a Number: ");
    scanf("%d", &x);
    int i= 2, is_prime = 1;
    int middle_two_digits;
    middle_two_digits = ( ( (x/10) %10) *10) + ( (x/100) %10);
    if (middle_two_digits <= 1)
    {
        is_prime = 0;
    }
    else
    {
        while(1)
        {
        loop:
            if (i * i <= middle_two_digits)
            {
                if (middle_two_digits % i == 0)
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
    #endif // Question 19
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
        while(1)
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
    #endif//question 18
#if 0
printf("Enter a Number: ");
    scanf("%d", &x);
    int i= 2, is_prime = 1, sum = 0, temp = x;
    if (x <= 1)
    {
        is_prime = 0;
    }
    else
    {
        while (1)
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
    while (temp)
    {
        sum += (temp % 10);
        temp = temp / 10;
    }// sum of digits calculation
if(is_prime ==1 && sum ==14)
    printf("Prime & sum of digits is 14");
    else if (is_prime ==1 && sum !=14)
    printf("Prime but sum of digits is not 14");
    else if (is_prime ==0 && sum ==14)
    printf("Not Prime but sum of digits is 14");
else
    printf("Not Prime or sum of digits is not 14");
#endif // Question 17
#if 0
printf("Enter a Number: ");
    scanf("%d", &x);
    int is_prime = 1, i = 2;
    if (x <= 1)
    {
        is_prime = 0;
    }
    else
    {
        while (1)
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
#endif // Question 16
#if 0
     
    int last_digit, result=x;
    while (x)
    {
        last_digit = x;
        x = x / 10;
        
    }
    
    if (last_digit % 2)
    {
        result = result - 1;
        printf("%d", result);
    }
    else
    {
        result = result;
        printf("%d", result);
    }
#endif // Question 15
#if 0
    scanf("%d", &x);//123456
    int new_number, original_x = x, digits = 0, first_digit,middle_part, last_digit, power = 1;
    // 623451
    // Find number of digits
    while (x != 0)
    {
        digits++;
        x = x / 10;
    }
    x = original_x;
    last_digit = x % 10; // 6
    // Find first digit
    while (x >= 10)
    {
        x = x / 10;
        power *= 10;
    }
    first_digit = x;
    middle_part = original_x - (first_digit * power) - last_digit; // 2345
    // Calculate power of 10^(digits-1)
    new_number = (last_digit * power)+ middle_part + first_digit; // 600000 + 2345 + 1
    printf("%d\n", new_number);
#endif // Question 14
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
