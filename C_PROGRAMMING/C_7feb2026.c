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
    //your code here
    /*x = 1;
    loop:
    if(x<6)
    {
        printf("%d ",x);
        x = x + 1;
        goto loop;
    } Problem 01*/
     /*x = 5;
    loop:
    if(x>0)
    {
        printf("%d ",x);
        x = x - 1;
        goto loop;
    }/* Problem 02*/
    /*x = 1;
    int sum = 0;
    loop:
    if(x<6)
    {
        sum = sum + x;
        x = x + 1;
        goto loop;
    }
    printf("%d\n",sum);
    problem 03*/
    /*x = 6;
    int sum = 0;
    loop:
    if(x>0)
    {
        sum = sum + x;
        x = x - 1;
        goto loop;
    }
    printf("%d\n",sum);
    problem 04*/
    /*x = 1;
    loop:
    if(x<10)
    {
        if(x%2)
        {
            printf("%d ",x);
        }
        x = x + 1;
        goto loop;
    }problem 05*/
        /*x = 1;    
    loop:
    if(x<20)    
    {
        if(x%2)
        {
            printf("%d ",x);
        }
        x = x + 1;
        goto loop;
    }problem 06*/
     /*x = 10;
    loop:
    if(x<100)
    {   
        if(x%2)
        {
            int sum = (x/10) + (x%10);
            if(sum == 7)
            {
                printf("%d\n",x);
            }
        }
        x = x + 1;
        goto loop;  
    }problem 07*/
    /*x = 10;
    loop:
    if(x<100)
    {   
        if(!(x%2))
        {
            int sum = (x/10) + (x%10);
            if(sum == 6)
            {
                printf("%d\n",x);
            }
        }
        x = x + 1;
        goto loop;  
    }problem 08*/
    /*problem 09 same as 08*/
        /*x = 10;
    int sum = 0;
    loop:
    if(x<100)
    {
    if(x%2)
    {
        if((x/10) == 7)
        {
            sum = sum + x;
        }
    }
    x = x + 1;
    goto loop;
    }
    printf("%d\n",sum);
    problem 10*/
    printf("Enter a number: ");
    scanf("%d",&x);
    /*int count = 0;
    loop:
    if(x)
    {
        count = count + 1;
        x = x / 10;
        goto loop;
    }
    printf("Total number of digits: %d\n",count);
    problem 11*/
    /*int sum = 0;
    loop:
    if(x)
    {
        sum = sum + (x%10);
        x = x / 10;
        goto loop;
    }
    printf("Sum of all digits: %d\n",sum); Problem 12*/
    /*int rev = 0;
    loop:
    if(x)
    {
        rev = rev * 10 + (x%10);
        x = x / 10;
        goto loop;
    }
    printf("Reverse of the number: %d\n",rev); Problem 13*/
    /*int first , last, num, middle, result, power = 1;
    num = x;
    first = x%10;
    loop:
    if(num>10)
    {
        num = num/10;
        power = power * 10;
        goto loop;
    }
    last = num;
    middle = (x%power)/10;
    result = (first * power) + (middle*10) + (last);
    printf("Interchanged number: %d\n",result);Problem 14*/
    /*int last, num, result, power = 1;
    num = x;
    loop:
    if(num>10)
    {
        num = num/10;
        power = power * 10;
        goto loop;
    }
    last = num;
    if(last%2){
        result = x - 1;}
     else{
        result = x;}
     printf("Result: %d\n",result);
     Problem 15*/
    int i = 2;
    loop:
    if(i<x)
    {
        if(!(x%i))
        {
            printf("not prime ");
            goto end;//if we find any factor other than 1 and the number itself, we can conclude that the number is not prime and we can exit the loop immediately
        }
    }
     printf("prime");
     end://if we exit the loop without finding any factor, we can conclude that the number is prime
     //end: is a label that we can use to jump to the end of the program after we have determined whether the number is prime or not
     //we can use goto statement to jump to the end of the program after we have determined whether the number is prime or not, 
     //this way we can avoid unnecessary iterations and improve the efficiency of the program
     //Problem 16 and 17 same*/
     return 0;

}
