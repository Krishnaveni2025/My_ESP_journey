/*C PROGRAMMING SELF ASSESSMENT 7
Use only int variables 
Use only decimals
Use only functions with not return value
Don't use pointers,arrays,strings etc.
1.Write a loop program to print 1 to 5 on one by one.
Function_name : disp_assend
Answer:
1
2
3
4
5
#include <stdio.h>
void disp_assend(int x);//Function declaration
int main()
{
    int x=1;
    disp_assend(x);//Function call
    return 0;
}
void disp_assend(int x)//Function definition
{
    for(x=1;x<=5;x++)
    {
        printf("%d\n",x);
    }
}*/
/*2. Write a loop program to print 5 to 1 on one by one.
Function_name : disp_descend
Answer:
5
4
3
2
1

#include <stdio.h>
void disp_descend(int x);//Function declaration
int main()
{
    int x=5;
    disp_descend(x);//Function call
    return 0;
}
void disp_descend(int x)//Function definition
{
    for(x=5;x>=1;x--)
    {
        printf("%d\n",x);
    }
}
*/
/*3.Write a loop program to print sum of 1 to 5 numbers.
Function_name : sum_assend
Answer:
15

#include <stdio.h>
void disp_sum(int x);//Function declaration
int main()
{
    int x=1;
    disp_sum(x);//Function call
    return 0;
}
void disp_sum(int x)//Function definition
{
    int sum=0;
    for(x=1;x<=5;x++)
    {
        sum=sum+x;
    }
    printf("%d\n",sum);
}*/
/*4.Write a loop program to print sum of 6 to 1 numbers.
Function_name : disp_rsum
Answer:
21

#include<stdio.h>
void disp_rsum(int x);//Function declaration
int main()
{
    int x=6;
    disp_rsum(x);//Function call
    return 0;
}
void disp_rsum(int x)//Function definition
{
    int sum=0;
    for(x=6;x>=1;x--)
    {
        sum=sum+x;
    }
    printf("%d\n",sum);
}*/
/*5.Write a loop program to print odd numbers between 1 to 9.
Function_name : disp_odd
Answer:
1
3
5
7
9

#include <stdio.h>
void disp_odd(int x);//Function declaration
int main()
{
    int x=1;
    disp_odd(x);//Function call
    return 0;
}
void disp_odd(int x)//Function definition
{
    for(x=1;x<=9;x++)
    {
        if(x%2!=0)
        {
            printf("%d\n",x);
        }
    }
}
*/
/*6.Write a loop program to print two-digit odd numbers , below 20.
Function_name : disp_2digit_odd_below20
Answer:
11
13
15
17
19

#include <stdio.h>
void disp_2digit_odd_below20(int x);//Function declaration
int main()
{
    int x=11;
    disp_2digit_odd_below20(x);//Function call
    return 0;
}
void disp_2digit_odd_below20(int x)//Function definition
{
    for(x=11;x<=19;x++)
    {
        if(x%2!=0)
        {
            printf("%d\n",x);
        }
    }
}
*/
/* 7.Write a loop program to print two-digit odd numbers , whose sum of digits are 7.
Function_name : disp_2digit_odd_sum7
Answer:
25,43,61

#include <stdio.h>
void disp_2digit_odd_sum7(int x);//Function declaration
int main()
{
    int x=25;
    disp_2digit_odd_sum7(x);//Function call
    return 0;
}
void disp_2digit_odd_sum7(int x)//Function definition
{
    for(x=25;x<=99;x++)
    {
        if(x%2!=0)
        {
            if((x/10)+(x%10)==7)
            {
                printf("%d\n",x);
            }
        }
    }
}*/
/*8.Write a loop program to print two-digit even numbers , whose sum of digits
are 6.
Function_name : disp_2digit_even_sum6
Answer:
24
42
60

#include <stdio.h>
void disp_2digit_even_sum6(int x);//Function declaration
int main()
{
    int x=24;
    disp_2digit_even_sum6(x);//Function call
    return 0;
}
void disp_2digit_even_sum6(int x)//Function definition
{
    for(x=24;x<=98;x++)
    {
        if(x%2==0)
        {
            if((x/10)+(x%10)==6)
            {
                printf("%d\n",x);
            }
        }
    }
}
*/
/*Write a loop program to print sum of  two-digit numbers , whose one's digit is 5.
Function_name : disp_2digit_ones5
Answer:
495
#include <stdio.h>
void disp_2digit_ones5(int x);//Function declaration
int main()
{
    int x=15;
    disp_2digit_ones5(x);//Function call
    return 0;
}
void disp_2digit_ones5(int x)//Function definition
{
    int sum=0;
    for(x=15;x<=95;x++)
    {
        if(x%10==5)
        {
            sum=sum+x;
        }
    }
    printf("%d\n",sum);
}
*/
/*10.Write a loop program to print sum of  two-digit odd  numbers , whose tens digit is 7.
Function_name : disp_2digit_odd_sum_tens7
Answer:
375
#include <stdio.h>
void disp_2digit_odd_sum_tens7(int x);//Function declaration
int main()
{
    int x=17;
    disp_2digit_odd_sum_tens7(x);//Function call
    return 0;
}
void disp_2digit_odd_sum_tens7(int x)//Function definition
{
    int sum=0;
    for(x=17;x<=97;x++)
    {
        if(x%2!=0)
        {
            if(x/10==7)
            {
                sum=sum+x;
            }
        }
    }
    printf("%d\n",sum);
}
*/
/*11.Write a program to get a number from the user and print the total number of digits in the given number.
Function_name : count_total_digits
Answer:
Input: 123456   Output: 6
Input: 76895439 Output: 8
Input: 675      Output: 3

#include <stdio.h>
void count_total_digits(int x);//Function declaration
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    count_total_digits(x);//Function call
    return 0;
}
void count_total_digits(int x)//Function definition
{
    int count=0;
    while(x!=0)
    {
        x=x/10;
        count++;
    }
    printf("%d\n",count);
}*/
12. Write a program to get a number from user and print the sum of all digits.
Function_name: disp_sum_all_digits
Answer:
Input:123456    Output:21
Input:76895439  Output:51
Input:675       Output:18

#include <stdio.h>
void disp_sum_all_digits(int x);//Function declaration
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    disp_sum_all_digits(x);//Function call
    return 0;
}
void disp_sum_all_digits(int x)//Function definition
{
    int sum=0;
    while(x!=0)
    {
        sum=sum+x%10;
        x=x/10;
    }
    printf("%d\n",sum);
}
*/
/*13. Write a program to get a number from user and print the reverse of the given number.
Function_name: disp_reverse_number
Answer:
Input:123456    Output:654321
Input:76895439  Output:93459867
Input:675       Output:576

#include <stdio.h>
void disp_reverse_number(int x);//Function declaration
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    disp_reverse_number(x);//Function call
    return 0;
}
void disp_reverse_number(int x)//Function definition
{
    int rev=0;
    while(x!=0)
    {
        rev=rev*10+x%10;
        x=x/10;
    }
    printf("%d\n",rev);
}
*/
/*14. Write a program to get a number from user and interchange the first and last digits of the number.
and print the result.
Function_name: disp_interchange_first_last_digit
Answer:
Input:123456    Output:623451
Input:76895439  Output:96895437
Input:675       Output:576
*/
/*#include <stdio.h>
void disp_interchange_first_last_digit(int x) ;//Function declaration
int main() {
    int x;

    // Get the number from the user
    printf("Enter a number: ");
    scanf("%d", &x);

    // Call the function
    disp_interchange_first_last_digit(x);//Function call

    return 0;
}
void disp_interchange_first_last_digit(int x) //Function definition
{
    int first_digit, last_digit, digits = 0, divisor = 1;
    int temp = x;

    // Find the last digit
    last_digit = temp % 10;

    // Find the number of digits and the first digit using a while loop
    while(temp >= 10) {
        digits++;
        divisor *= 10;
        temp /= 10;
    }
    first_digit = temp;

    // Remove the first and last digits from the number
    int middle_part = (x % divisor) / 10;

    // Form the new number by interchanging the first and last digits
    int result = last_digit * divisor + middle_part * 10 + first_digit;

    // Print the result
    printf("Result after interchanging first and last digits: %d\n", result);
}*/
/*15. Write a program to get a number from user
and if the last digit of the number is even 
print the same number.If the last digit of the 
number is odd, then subtract 1 from the last digit
and print the number.
(Last digit - MSD)
Function_name: check_last_digit_odd
Answer:
Input:654324   Output:654324
Input:76895439 Output:66895439
Input:675      Output:675
*/
/*#include <stdio.h>
void check_last_digit_odd(int x);//Function declaration
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x); // e.g., 76895439
    check_last_digit_odd(x);//Function call
    return 0;
}
void check_last_digit_odd(int x)//Function definition
{
    int last_digit, original, multiplier = 1, new_number = 0;
    original = x;

    // Find the most significant digit using a while loop
    while (x >= 10) {
        x /= 10;
        multiplier *= 10;
    }
    last_digit = x;
    //printf("Last digit: %d\n", last_digit);

    // Check if the most significant digit is even using an if statement
    if ((last_digit % 2) == 0) {
        printf("%d\n", original);
    } else {
        // Subtract 1 from the most significant digit
        last_digit -= 1;
        new_number = last_digit * multiplier + (original % multiplier);
        printf("%d\n", new_number);
    }
}
*/
/*16. Write a program to get a number from the user and print whether the 
number is prime or not.
Function_name: check_prime
Answer:
Input:27  Output:Not Prime
Input:31  Output:Prime

#include <stdio.h>
void check_prime(int x);//Function declaration
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    check_prime(x);//Function call
    return 0;
}
void check_prime(int x)//Function definition
{
    int is_prime = 1; // Assume the number is prime
    int i = 2;

    if (x > 1)
    {
        if (x == 2)
        {
            printf("Prime\n");
        }
        else
        {
            while (i < x)
            {
                if (x % i == 0)
                {
                    is_prime = 0; // Found a divisor, not prime
                    break;
                }
                i++;
            }

            if (is_prime)
            {
                printf("Prime\n");
            }
            else
            {
                printf("Not Prime\n");
            }
        }
    }
    else
    {
        printf("Not Prime\n");
    }
}*/
/*17. Write a program to get a number from the user and print
whether the number is prime and the sum of the digits is 14.
Function_name: check_prime_and_sum14
Answer:
Input:27 Output:Not Prime and sum of digits is not 14
Input:41 Output:Prime and sum of digits is 5
Input:59 Output:Prime and sum of digits is 14
Input:77 Output:Not Prime and sum of digits is 14

#include <stdio.h>
void check_prime_and_sum14(int x);//Function declaration
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    check_prime_and_sum14(x);//Function call
    return 0;
}
void check_prime_and_sum14(int x)//Function definition
{
    int is_prime = 1; // Assume the number is prime
    int i = 2;

    if (x > 1)
    {
        if (x == 2)
        {
            printf("Prime");
        }
        else
        {
            while (i < x)
            {
                if (x % i == 0)
                {
                    is_prime = 0; // Found a divisor, not prime
                    break;
                }
                i++;
            }

            if (is_prime)
            {
                printf("Prime");
            }
            else
            {
                printf("Not Prime");
            }
        }
    }
    else
    {
        printf("Not Prime");
    }

    int sum = 0;
    int temp = x;
    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    if (sum == 14)
    {
        printf(" and sum of digits is 14\n");
    }
    else
    {
        printf(" and sum of digits is not 14\n");
    }
}*/
/*18. Write a program to get a number from the user and print
whwether the number first two digits(10s and 100s place) are prime or not.
Function_name: check_first_2digits_prime
Answer:
Input:359 Output:Prime
Input:6359 Output:Not Prime
Input:3577 Output:not Prime

#include <stdio.h>
void check_first_2digits_prime(int x);//Function declaration
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    check_first_2digits_prime(x);//Function call
    return 0;
}
void check_first_2digits_prime(int x)//Function definition
{
    int first_two_digits = x % 100; //gets first two digits(10s and 100s)
    //printf("%d\n",first_two_digits);
    int is_prime = 1; // Assume the number is prime

    if (first_two_digits <= 1) {
        is_prime = 0; // Not prime
    } else {
        int i = 2;
        while (i <= first_two_digits / 2) {
            if (first_two_digits % i == 0) {
                is_prime = 0; // Found a divisor, not prime
                break;
            }
            i++;
        }
    }

    if (is_prime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }
}*/
/*19.  Write a program to get a 4-digit number from the user and print
whether the middle two digits(10s and 100s place) are prime or not.
Function_name : middle_2digits_prime
Answer:
Input:6359  Output:Not Prime
Input:3537  Output:Prime

#include <stdio.h>

void middle_2digits(int x);//Function declaration

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    middle_2digits(x);//Function call
    return 0;
}

void middle_2digits(int x) {//Function definition
    int first_digit, last_digit, divisor = 1, digits = 0;
    int temp = x;

    // Find the number of digits
    while (temp >= 10) {
        digits++;
        divisor *= 10;
        temp /= 10;
    }

    // Find the first and last digits
    first_digit = x / divisor;
    last_digit = x % 10;

    // Remove the first and last digits
    int middle_part = (x % divisor) / 10;

    // Get the middle two digits
    int middle_two_digits = middle_part % 100;

    int is_prime = 1; // Assume the number is prime

    if (middle_two_digits <= 1) {
        is_prime = 0; // Not prime
    } else {
        int i = 2;
        while (i <= middle_two_digits / 2) {
            if (middle_two_digits % i == 0) {
                is_prime = 0; // Found a divisor, not prime
                break;
            }
            i++;
        }
    }

    if (is_prime) {
        printf("Middle two digits are Prime\n");
    } else {
        printf("Middle two digits are Not Prime\n");
    }
}
*/
20. Write a  program to print total number of single digit prime numbers
Function Name : total_single_prime
Answer:
4

#include <stdio.h>
void totalSingle_prime(int count);//Function declaration
int main() {
    int x;
    x = 0;
    totalSingle_prime(x);        //Function call

    return 0;
}

void totalSingle_prime(int count ) //Function defination
{
     count = 0;
    
    // Check each single-digit number to see if it is prime
    for (int num = 2; num < 10; num++) {
        int is_prime = 1; // Assume number is prime
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0; // Not prime
                break;
            }
        }
        if (is_prime) {
            count++;
        }
    }
    printf("%d",count);
}
*/
/*21. Write a program to get a number from user
print the total number digits which are odd 
in the number .
Funtion Name: disp_total_odd_digits
Answer:
Input:12345678    Output:4
Input:987531      Output:5

#include <stdio.h>
void disp_total_odd_digits(int x);//Function Declaration
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    disp_total_odd_digits(x);//Function call
    return 0;
}
void disp_total_odd_digits(int x)//function call
{
    int count = 0;
    int i = x;

    while (i > 0)
    {
        if (i % 2 != 0)
        {
            count++;
        }
        i /= 10;
    }

    printf("Total number of odd digits in %d is %d\n", x, count);
 
}
*/
/*22. Write a program to get a number from user
print the total number of two-digit odd numbers
in the number.
function_name:disp_total_2ddigit_odd
Answer:
Input: 12345678   Output:3 
Input:987531      Output:4 

#include <stdio.h>
void disp_total_2digit_odd(int x);//Function daclaration
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    disp_total_2digit_odd(x);
    return 0;
}
void disp_total_2digit_odd(int x)
//Function defination
{
    int count = 0;
    int prev_digit = -1;
    int current_digit;
    int temp = x;

    while (temp > 0)
    {
        current_digit = temp % 10;
        if (prev_digit != -1)
        {
            int two_digit_num = current_digit * 10 + prev_digit;
            if (two_digit_num >= 10 && two_digit_num <= 99 && two_digit_num % 2 != 0)
            {
                count++;
            }
        }
        prev_digit = current_digit;
        temp /= 10;
    }

    printf("Total number of two-digit odd numbers in %d is %d\n", x, count);
 
}*/
/*23. Write a program to get a number from user
print the total number of single-digit persect square numbers
in the number.
function  Name: disp_single_digit_square
Answer: 
Input:123456789    output:3 
Input:987531       output:2 

#include<stdio.h>
void disp_single_digit_square(int x);//Function declaration
int main()
{
    int x;
    printf("Enter a Number: ");
    scanf("%d",&x);
    disp_single_digit_square(x);//function call
    return 0;
}
void disp_single_digit_square(int x)
//Funtion Defination
{
    int count = 0;
    int i = x;
    while (i > 0)
    {
        int digit = i % 10;
        if (digit == 1 || digit == 4 || digit == 9)
        {
            count++;
        }
        i /= 10;
    }
    printf("Total number of single digit perfect square numbers in %d is %d\n", x, count);
}*/
/*24.  Write a program to get a number from the user and print
the total number of two-digit perfect square numbers in the number.
Function Name: disp_two_digit_square
Answer:
Input:163496481  Output:4
Input:364925     Output:4

#include <stdio.h>
void disp_two_digit_square(int x);//Function declaration

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    disp_two_digit_square(x);//Function call
   return 0;
}
void disp_two_digit_square(int x)
{
    int count = 0;
    int i = x;
    while (i > 10)
    {
        int digit = i % 100;
        if (digit == 16 || digit ==25 || digit == 36 || digit == 49 || digit == 64 || digit == 81)
        {
            count++;
        }
        i /= 10;
    }
    printf("Total number of two digit perfect square numbers in %d is %d\n", x, count);
 
}
*/
/*25. write a program to get a number from user
print the total number of single digit prime numbers
in the number.
Function Name: disp_single_digit_prime
Answer: 
Input:163496481     output:1 
Input:364925        Output:3 
#include <stdio.h>
void  disp_single_digit_prime(int x);//Function declaration
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    disp_single_digit_prime(x);//Function call
    return 0;
}
void  disp_single_digit_prime(int x)//Function defination
{
    int count = 0;
    int i = x;
    while (i > 0)
    {
        int digit = i % 10;
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
        {
            count++;
        }
        i /= 10;
    }
    printf("Total number of single digit prime numbers in %d is %d\n", x, count);
 
}*/
/*26. Write a program to print biggest 4-digit number
which is  divisible by 7 and 9.
Funtion name: disp_biggest_4digit_div7_9
Answer:
9954

#include <stdio.h>
void disp_biggest_4digit_div7_9(int x);//Function declaration
int main()
{
    int x= 9999;
    disp_biggest_4digit_div7_9(x);//Function call
    return 0;
}
void disp_biggest_4digit_div7_9(int x)
//Function defination
{
while(x> 0)
{
    if (x% 7 == 0 && x% 9 == 0)
    {
        printf("%d\n", x);
        break;
    }
    x--;
}
}*/
/*27.  Write a program to print the total count of numbers
less than 100000 whose sum of digits is 14.
Function name: disp_count_sum14

Answer:
2710

#include <stdio.h>
void disp_count_sum14(int count);//Function Declaration
int main()
{
    int count = 0;
    disp_count_sum14(count);
    return 0;
}
void disp_count_sum14(int count) //Function Defination
{
    int i = 0;
    while(i < 100000)
    {
        int sum = 0;
        int temp = i;
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == 14)
        {
            count++;
        }
        i++;
    }
    printf("Total count of numbers less than 100000 whose sum of digits is 14: %d\n", count);
}*/
/*28 Write a program to get two numbers from user and
print the LCM of those numbers.
Function Name: disp_LCM2
Answer:
Input: 4 6  Output: 12
Input: 5 7  Output: 35

#include <stdio.h>
void disp_LCM2(int num1,int num2);//Function Declaration
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    disp_LCM2(num1,num2);//Function call
    return 0;
}
void disp_LCM2(int num1,int num2)//Function Defination
{
    int max;
    max = (num1 > num2) ? num1 : num2;
    while(1)
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            printf("LCM of %d and %d is %d\n", num1, num2, max);
            break;
        }
        max++;
    }
}*/
/*29. Write a program to get three  numbers from the user and print
the LCM of those numbers.
Function name: disp_LCM3
Answer:
Input: 4 6 8  Output: 24
Input: 5 7 9  Output: 315

#include <stdio.h>
void disp_LCM3(int num1 ,int num2 ,int num3);//Function Declaration

int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    disp_LCM3(num1,num2,num3);            //Function call
    return 0;
}
void disp_LCM3(int num1 ,int num2 ,int num3)
{
    int max;
    max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    while(1)
    {
        if (max % num1 == 0 && max % num2 == 0 && max % num3 == 0)
        {
            printf("LCM of %d, %d and %d is %d\n", num1, num2, num3, max);
            break;
        }
        max++;
    }
}*/
/*30. Write a program to get two numbers from the user and print
the HCF of those numbers.
function name : disp_count_HCF2
Answer:
Input: 4 6  Output: 2
Input: 5 7  Output: 1
*/
#include <stdio.h>
void disp_count_HCF2(int num1, int num2);   //Function Declaration
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    disp_count_HCF2( num1,  num2);//Function call
    return 0;
}
void disp_count_HCF2(int num1, int num2)   //Function Defination
{
    int min;
    min = (num1 < num2) ? num1 : num2;
    int i = min; 
    while(i >= 1)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            printf("HCF of %d and %d is %d\n", num1, num2, i);
            break;
        }
        i--;
    }
}