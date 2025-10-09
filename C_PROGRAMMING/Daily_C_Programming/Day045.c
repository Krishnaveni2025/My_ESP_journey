/*
1) Use only int variables
2) Use only decimals
3) Use only "if/else ", goto statements. Do not use "for" or "while"
4) Don't use pointers,arrays,strings,etc.
==========================C LEVEL 4=========================================
1. Write a loop program to print 1 to 5 on one by one
2. Write a loop program to print 5 to 1 on one by one
3. write a loop program to print sum of 1 to 5
4. Write a loop program to print sum of 6 to 1
5. write a loop program to print odd numbers, between 1 and 9
6. Write a loop program to print odd numbers, below 20
7. Write a loop program to print two digit odd numbers whose sum of digits are 7
8. Write a loop program to print two digit even numbers whose sum of digits are 6
9. same as 8
10. Write a loop program to print the sum of two digit odd numbers, whose ten's digit is 7
11. Write a program to get a number from the user and print the total number of digits in that number
12. Write a program to get a number from the user and print sum of all digits
13. Write a program to get a number from the user and print the reverse of that number
14. Write a program to get a number from the user and interchange the first and last digits and print the result
15. Write a program to get a number from the user and if the last digit of the number is even print the same number. If the last digit of the number is odd then subtract 1 from the last digit and print the number
16. Write a program to get a number from the user and print whether that number is prime or not
17. same as 16*/
#include <stdio.h>
int main()
{
    int x;
// your code here
#if 0
    x = 1;
    loop: if(x<6)
    {
        //tour code here
        printf("%d\n",x);
        x++;
        goto loop;
    }
#endif // Question 1
#if 0
    x = 5;
    loop: if(x>0)
    {
        printf("%d\n",x);
        x--;
        goto loop;
    }
#endif // Question 2
#if 0
    x = 1;
    int sum = 0;
loop:
    if (x < 6)
    {
        sum += x;
        x++;
        goto loop;
    }
    printf("%d", sum);
#endif // Question 3
#if 0
    x = 6;
    int sum = 0;
loop:
    if (x > 0)
    {
        sum += x;
        x--;
        goto loop;
    }
    printf("%d", sum);
#endif // Question 4
#if 0
    x = 1;
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
#endif // Question 5
#if 0
    x = 11;
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
#endif // Question 6
#if 0
x=11;
loop: if(x<100)
{
    if(x%2)
    {
        if(((x%10)+(x/10))==7)
                printf("%d\n",x);
    }
    x++;
    goto loop;
}
#endif // Question 7
#if 0
x = 10;
loop:if(x<100)
{
    if(!(x%2))
    {
        if(((x/10)+(x%10))==6)
            printf("%d\n",x);
    }
    x++;
    goto loop;
}
#endif // Question 8
#if 0
    x = 11;
    int sum =0;
loop:
    if (x < 100)
    {
        if (x % 2)
        {
            if ((x / 10) == 7)
                sum += x;
        }
        x++;
        goto loop;
    }
    printf("%d",sum);
#endif // Question 10
#if 0
    scanf("%d", &x);
    int count = 0;
loop:
    if (x != 0)
    {
        count++;
        x = x / 10;
        goto loop;
    }
    printf("%d", count);
#endif // Question 11
#if 0
    scanf("%d", &x);
    int sum = 0;
loop:
    if (x != 0)
    {
        sum += (x%10);
        x = x / 10;
        goto loop;
    }
    printf("%d", sum);
#endif // Question 12
#if 0
    scanf("%d", &x);
    int num = 0;
loop:
    if (x != 0)
    {
        num = (num * 10) + (x%10);
        x = x / 10;
        goto loop;
    }
    printf("%d", num);
#endif // Question 13
#if 0
    int num, first, last, digits = 0, temp, pow = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10; // Extract last digit
    temp = num;

loop:
    if (temp >= 10)//t t t t t f
    {
        temp = temp / 10;//12345 1234 123 12 1
        digits++;//1    2    3      4 5
        pow = pow * 10;//10 100 1000  10000 100000
        goto loop;
    }
    else
    {
        first = temp; // First digit found 1
    }

    // Remove first and last digits
    int middle = num % pow; // Remove first digit  23456
    middle = middle / 10;   // Remove last digit   2345

    // Reconstruct number
    int result = last * pow + middle * 10 + first;//6*100000+2345*10+1 623451

    printf(" %d\n", result);//623451
#endif // Question 15
#if 0
    int num, first, last, temp, digits = 0, pow = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10; // Get last digit
    temp = num;

loop:
    if (temp >= 10)
    {
        temp = temp / 10;
        digits++;
        pow = pow * 10;
        goto loop;
    }
    else
    {
        first = temp; // First digit found
    }

    if (first % 2 == 0)
    {
        // First digit is even → print original number
        printf("Output: %d\n", num);
    }
    else if (last % 2 == 1)
    {
        // Last digit is odd → subtract 1 from first digit
        int middle = num % pow; // Remove first digit
        middle = middle / 10;   // Remove last digit
        int new_first = first - 1;
        int result = new_first * pow + middle * 10 + last;
        printf("Output: %d\n", result);
    }
    else
    {
        // First is odd, last is even → no action
        printf("Output: %d\n", num);
    }
#endif//Question 15
//Question 16 and 17 are same
    int num, i = 2, is_prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        is_prime = 0;
    } else {
    loop:
        if (i * i <= num) {
            if (num % i == 0) {
                is_prime = 0;
            } else {
                i++;
                goto loop;
            }
        }
    }

    if (is_prime)
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);
    return 0;
}

