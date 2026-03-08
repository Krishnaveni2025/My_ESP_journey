/*
==================== C LEVEL 6 =======================================================================================
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
    while()
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
    10. Write a loop program to print sum of two digit odd numbers whose ten's digit is 7
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
    15. Write a program to get a number from the user and if the last digit of the number is even print the same number.
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
#if 0
#include <stdio.h>
int primecheck(int numb);
int main()
{
    int number, is_prime;
    printf("Enter a 4 digit Number: ");
    scanf("%d",&number);
    number = (number%1000)/10;//middle two numbers 100's 10's
  
    is_prime = primecheck(number);
    if(is_prime)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    return 0;
} 
int primecheck(int numb)
{
    int is_prime = 1, i = 2;
    while(i<numb)
    {
        if(!(numb%i))
        {
            is_prime = 0;
            break;
        }
        i++;
    }  
    return is_prime;
}
Problem 19
#endif
#if 0
#include <stdio.h>
int primecheck(int numb);
int main()
{
    int number, is_prime;
    printf("Enter a Number: ");
    scanf("%d",&number);
    number %= 100;
    is_prime = primecheck(number);
    if(is_prime)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    return 0;
} 
int primecheck(int numb)
{
    int is_prime = 1, i = 2;
    while(i<numb)
    {
        if(!(numb%i))
        {
            is_prime = 0;
            break;
        }
        i++;
    }  
    return is_prime;
}
Problem 18
#endif

#if 0
#include <stdio.h>
int sumofdigits(int numb);
int primecheck(int numb);
int main()
{
    int number, is_prime, sum;
    printf("Enter a Number: ");
    scanf("%d",&number);
    sum = sumofdigits(number);
    is_prime = primecheck(number);
    if(is_prime)
    {
        if(sum==14)
            printf("Prime & sum is 14");
        else
            printf("Prime but Sum is not 14");
    }
    else
    {
        if(sum==14)
            printf("Not prime but sum is 14");
        else
            printf("Not prime & sum is not 14");
    }
    return 0;
} 
int primecheck(int numb)
{
    int is_prime = 1, i = 2;
    while(i<numb)
    {
        if(!(numb%i))
        {
            is_prime = 0;
            break;
        }
        i++;
    }  
    return is_prime;
}
int sumofdigits(int numb)
{
    int sum = 0;
    while(numb)
    {
        sum += numb%10;
        numb /= 10;
    }
    return sum;
} Problem 17
#endif

#if 0
#include <stdio.h>

int main()
{
    int number, is_prime = 1, i = 2;
    printf("Enter a Number: ");
    scanf("%d",&number);
    while(i<number)
    {
        if(!(number%i))
        {
            is_prime = 0;
            printf("Not Prime");
            break;
        }
        i++;
    }
    if(is_prime)
        printf("Prime");
    return 0;
} Problem 16
#endif

#include<stdio.h>
int main()
{
    int x;
    // Your Code Here
   /* x = 1;
    while(x<6)
    {
    //your code here
    printf("%d\n",x);
    x++;
    }   Problem 01*/
    /*x = 5;
    while(x>0)
    {
    //your code here
    printf("%d\n",x);
    x--;
    }    Problem 02*/
    /*int sum = 0;
    // Your Code Here
    x = 1;
    while(x<6)
    {
    //your code here
    sum+=x;
    x++;
    }
    printf("Sum = %d",sum);Problem 03*/
    /*
    x = 6;
    int sum = 0;
    while(x>0)
    {
    //your code here
    sum+=x;
    x--;
    }
    printf("Sum = %d",sum); Problem 04*/
    /*x = 1;
    while(x<10)
    {
    //your code here
    if(x%2)
            printf("%d\n",x);
    x++;
    }Problem 05*/
    /*x = 11;
    while(x<20)
    {
    //your code here
    if(x%2)
            printf("%d\n",x);
    x++;
    } Problem 06*/
    /*x = 11;
    while(x<100)
    {
    //your code here
    if(x%2)
    {
        if(((x/10)+(x%10))==7)
            printf("%d\n",x);
    }
    x++;
    }Problem 07*/
    /*
        x = 11;
    while(x<100)
    {
    //your code here
    if(!(x%2))
    {
        if(((x/10)+(x%10))==6)
            printf("%d\n",x);
    }
    x++;
    }Problem 08*/
    /*x = 11;
    int sum = 0;
    while(x<100)
    {
    //your code here
    if((x%10)==5)
    {
        sum+=x;
    }
    x++;
    }
    printf("SUM = %d",sum);
    Problem 09*/
    
    /*x = 11;
    int sum = 0;
    while(x<100)
    {
    //your code here
    if(x%2)
    {
        if((x/10)==7)
            sum+=x;
    }
    x++;
    }
    printf("SUM = %d",sum); Problem 10*/
    /*
        scanf("%d",&x);
    int count = 0;
    while(x)
    {
        count++;
        x /= 10;
    }
    printf("%d",count); Problem 11*/
    #if 0
    #include <stdio.h>
    int main()
    {
    int number, noofdigits = 0;
    printf("Enter a Number: ");
    scanf("%d",&number);
    while(number)
    {
        noofdigits++;
        number/=10;
    }
    printf("Number of Digits = %d",noofdigits);
    return 0;
    } Problem 12
    #endif 
        #if 0
#include <stdio.h>

int main()
{
    int number, reverse = 0;
    printf("Enter a Number: ");
    scanf("%d",&number);
    while(number)
    {
        reverse = (reverse*10)+(number%10);
        number/=10;
    }
    printf("Number of Digits = %d",reverse);
    return 0;
} Problem 13
#endif
#if 0
#include <stdio.h>

int main()
{
    int number, power = 1,middle, first, last, num;
    printf("Enter a Number: ");
    scanf("%d",&number);
    num = number;
    first = num%10;
    while(num>9)
    {
        power *= 10;
        num/=10;
    }
    last = num;
    middle = (number%power)/10;
    printf("Result = %d",((first*power)+(middle*10)+(last)));
    return 0;
} Problem 14
#endif
    #if 0
    #include <stdio.h>

   int main()
   {
    int number, power = 1, last, num;
    printf("Enter a Number: ");
    scanf("%d",&number);
    num = number;
    while(num>9)
    {
        power *= 10;
        num/=10;
    }
    last = num;
    if(last%2)
        printf("Result = %d",(((last-1)*power)+(number%power)));
    else
        printf("Result = %d",number);
    return 0;
  } Problem 15
  #endif
    return 0;
}
