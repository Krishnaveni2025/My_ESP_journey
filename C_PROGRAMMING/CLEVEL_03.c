
//01. Get a number from user and add 2 to that number and Print the Result
/*#include <stdio.h>
int function(int no);//Funciton Declaration
int main()
{
    int number1, number2;
    scanf("%d", &number1);
    number2 = function(number1);//Calling Function
    printf("%d", number2);
    return 0;
}
int function(int no1)//Function Defination
{
    int no2;
    // Your Program Here
    no2 = no1 + 2;
    return no2;
}*/
//02.get number from the user and substract 5 from that number and Print the Result.
/*#include<stdio.h>
int function(int no);//function Declaration
int main()
{
    int number1,number2;
    scanf("%d",&number1);
    number2 = function(number1);//Calling function
    printf("%d",number2);
    return 0;
}
int function(no1)//Function Defination
{
    int no2;
    //Your Program Here
    no2=no1-5;
    return no2;
}*/
//03. Get a number from the user and check whether the sum of its digits is 14 and Print Result. Don't change the program.
/*
#include<stdio.h>
int sum14(int no);//Function DEclaration
int main()
{
    int number , Result;
    scanf("%d",&number);
    Result =sum14(number);//Calling Function
    if(Result == 1)
        printf("Sum Of Digits is 14");
    else
        printf("Sum Of Digits is not 14");
    return 0;
}
int sum14(int no1)//Function Defination
{
    int result;
    //Your Program Here
    result =0;
    int digit;
    while(no1 != 0){
        digit = no1 % 10;
        result = digit+result;
        no1 = no1/10;
    }
    if(result == 14)
        return 1;
    else
        return 0;
}*/
//04. Get a number from the user and check if it is a prime number or not & Print the result(don't change the program).
/*
#include <stdio.h>
int isPrime(int no);//Function Declaration
int main()
{
    int number, Result;
    scanf("%d", &number);
    Result = isPrime(number);//Calling Function
    if(Result == 1)
         printf("Number is Prime ");
    else
         printf("Number is Not Prime");
    return 0;
}
int isPrime(int no1)//Function Defination
{
    int result;
    // Your Program Here
    int count , i;
    count = 0, i=0;
    for (i = 2; i < no1; i++)
    {
        if (no1 % i == 0)
        {
            count = count + 1;
        }

        if (count == 2)
        {
            result = 1;
        }
        if (count > 2)
        {
            result = 0;
        }
    }
    return result;
}*/
// 05. Get a number from the user and count the no of zerosin it and Print it.
/*
#include <stdio.h>
int find_no_of_zeros(int no);//Funciton Declaration
int main()
{
    int number, result;
    scanf("%d", &number);
    result = find_no_of_zeros(number);//Calling Function
    printf("%d", result);
    return 0;
}
int find_no_of_zeros(int no1)//Funciton Defination
{
    int result;
    // Your Program Here
    int digit;
    result = 0;
    while (no1 != 0)
    {
        digit = no1 % 10;
        if (digit == 0)
        {
            result = result + 1;
        }
        no1 = no1 / 10;
    }
    return result;
}*/
// 06. Get a number from user & revrse it and then Print it.
/*include <stdio.h>
int reverse_number(int no);//Funciton Declaration
int main()
{
    int number, result;
    scanf("%d", &number);
    result = reverse_number(number);//Calling function
    printf("%d", result);
    return 0;
}
int reverse_number(int no1)//funciton Defination
{
    int result;
    // Your Program Here
    result = 0;
    
    while (no1 != 0) // t t t t f
    {
        int digit = no1 % 10;               // 4 3 2 1
        result = ((result * 10) + digit); // 4 43 432 4321
        no1 = no1 / 10;                 // 123 12 1 0
    }
    return result;
}*/
//07. Get a number from user and compare the number. If same print "Same"Otherwise Print"Not Same".
/*
#include <stdio.h>
int compare_numbers(int no1, int no2);//Function Declaration
int main()
{
    int number1, number2, Result;
    scanf("%d %d", &number1, &number2);
    Result = compare_numbers(number1, number2);//Calling Function
    if (Result == 1)
        printf("Same");
    else
        printf("Not Same");
    return 0;
}
int compare_numbers(int no1, int no2)//Funciton Defination
{
    int result;
    // Your Program Here
    if (no1 == no2)
        result = 1;
    else
        result = 0;
    return result;
}*/
// 08. Get a number from thr=e user and check whether the digits are in the ascending order.
/*
#include <stdio.h>
int check_ascending(int no1);//Function Declaration
int main()
{
    int number, result;
    scanf("%d", &number);
    result = check_ascending(number);//Calling Function
    if (result == 1)
        printf("Yes");
    else
        printf("No");
    return 0;
}
//Function Defination
int check_ascending(int no1) // 1234
{
    int result;
    // Your Program Here
    result = 1;
    int previous_digit = 10; 
    while (no1)                    // t
    {
        int present_digit = no1 % 10;       // 3 2 1 1
        no1 = no1 / 10;                     // 123 12 1 0
        if (present_digit < previous_digit) // t t t t f
        {
            previous_digit = present_digit; // 3 2 1
            continue;
        }
        else
        {
            result = 0;
            break;
        }
    }
    return result;
}*/
//09. Get a number from  the user and swap its digits.
  /*
#include<stdio.h>
int swap_digits(int no);//Function Declaration
int main()
{
    int number,result;
    scanf("%d",&number);
    result = swap_digits ( number);//Calling Function
    printf("%d",result);
    return 0;
}
int swap_digits(int no1)//Function Defination
{
    int result ;
    //Your Program Here
    result = ((no1%10)*10)+(no1/10);
    return result;
}*/
//10. Get a numner from the user & count the number of digits and Print the same.
#include <stdio.h>
int count_digits(int no);/*Function Declaration*/
int main()
{
    int number, result;
    scanf("%d", &number);
    result = count_digits(number);/*Calling Function*/
    printf("%d", result);
    return 0;
}
int count_digits(int no1)/*Defination  of Function*/
{
    int result;
    // Your Program Here
    result=0;
    while (no1 != 0)
    {
        result = result + 1;
        no1 = no1 / 10;
    }
    return result;
}
