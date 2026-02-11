/*
==================== C LEVEL 5 =======================================================================================
1. Use 'int' variables
2. Use only decimals
3. Use 'for' statements to solve problems. "if" also can be used to decision making but not for loop
4. Do not use arrays, pointers, strings, etc.
Template:
#include<stdio.h>
int main()
{
    int x;
    // Your Code Here
    for(;;)
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
    // your code here
    /* x = 1;
     for (;;)
     {
         loop:
         if (x < 6)
         {
             printf("%d\n", x);
             x = x + 1;
             goto loop;
             //continue;
         }
         break;
     } Problem 01*/
      /* x = 5;
     for (;;)
     {
         loop:
         if (x > 0)
         {
             printf("%d\n", x);
             x = x - 1;
             goto loop;
             //continue;
         }
         break;
     } Problem 02*/
      /*
      x = 1;
      int sum = 0;
      for (;;)
      {
          loop:
          if (x < 6)
          {
              sum = sum + x;
              x = x + 1;
              goto loop;
              //continue;
          }
          break;
      } Problem 03*/
       /*
       x = 6;
       int sum = 0;
       for (;;)
       {
           loop:
           if (x > 0)
           {
               sum = sum + x;
               x = x - 1;
               goto loop;
               //continue;
           }
           break;
       }
       printf("%d\n", sum); Problem 04*/
        /*
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
        } Problem 05

       */
      /*
        x = 1;
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
        } Problem 06
         
       */
    /*x = 10;
    int sum = 0;
    for (;;)
    {
    loop:
        if (x < 100)
        {
            if (!(x % 2))
            {
                sum = (x/10) + (x%10);
                if (sum == 6)
                {
                    printf("%d\n", x);
                }
            }
            x++;
            goto loop;
        }
        break;
    }Problem 08*/
/*x = 10;
    int sum = 0;
    for (;;)
    {
    loop:
        if (x < 100)
        {
            if (x % 2)
            {
                sum = (x/10) + (x%10);
                if (sum == 7)
                {
                    printf("%d\n", x);
                }
            }
            x++;
            goto loop;
        }
        break;
    }Problem 07*/
    /*x = 10;
    int sum = 0;
    for (;;)
    {
    loop:
        if (x < 100)
        {
            if (x % 10 == 5)
            {
                sum = sum + x;
            }
            x++;
            goto loop;
        }
        break;
    }
    printf("%d\n", sum); Problem 09*/
    /*x = 10;
    int sum = 0;
    for (;;)
    {
    loop:
        if (x < 100)
        {
            if(x%2)
            {
                if(x/10 == 7)
                {
                    sum = sum + x;
                }
            }
            x++;
            goto loop;
        }
        break;
    }
    printf("%d\n", sum); Problem 10*/
    /*printf("Enter a number: ");
    scanf("%d", &x);
    int count = 0;
    for (;;)
    {
        loop:
        if (x > 0)
        {
            count = count + 1;
            x = x / 10;
            goto loop;
        }
        break;
    }
    printf("%d\n", count); Problem 11*/
    /*printf("Enter a number: ");
    scanf("%d", &x);
    int sum = 0;
    for (;;)
    {
        loop:
        if (x > 0)
        {
            sum += x % 10;
            x = x / 10;
            goto loop;
        }
        break;
    }
    printf("%d\n", sum); Problem 12*/
    /*int rev = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    for (;;)
    {
    loop:
        if (x)
        {
            rev = rev * 10 + (x % 10);
           // printf("%d", x%10);
            x /= 10;
            goto loop;
        }
        break;
    }
   printf("%d\n", rev); Problem 13*/
   /*int num, first, last, middle, power = 1, result;
   printf("Enter a number: ");
   scanf("%d", &x);
   num = x;
   first = x%10;
   for(;;)
   {
    loop: if(num>9)//if the number has more than one digit
    {
        num = num/10;
        power = power * 10;
        goto loop;
    }
    break;
   }
   last = num;
   middle = (x%power)/10;
   result = first*power + middle*10 + last;
   printf("%d\n", result); Problem 14*/
   

}

