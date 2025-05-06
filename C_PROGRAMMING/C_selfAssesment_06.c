/*::::::::::C PROGRAMMING SELF ASSESSMENT 6 ::::::::::*/
/*Use only while loop
1. Write a loop program to print 1 to 5 one by one.
Answer:
1
2
3
4
5
#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 5)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}*/
/*2. write a loop program to print 5 to 1 on one by one.
Answer:
5
4
3
2
1
#include <stdio.h>
int main()
{
    int i = 5;
    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
    return 0;
}*/
/* Write a loop program to print sum from 1 to 5.
Answer:
15

#include <stdio.h>
int main()
{
    int i = 1, sum = 0;
    while (i <= 5)
    {
        sum += i;
        i++;
    }
    printf("%d\n", sum);
    return 0;
}*/
/*4. Write a loop program to print sum from 6 to 1.
Answer:
21

#include <stdio.h>
int main()
{
    int i = 6, sum = 0;
    while (i >= 1)
    {
        sum += i;
        i--;
    }
    printf("%d\n", sum);
    return 0;
}
*/
/*5. Write a loop program to print odd numbers between
1 and 9.
Answer:
1
3
5
7
9
#include<stdio.h>
int  main()
{
    int x;
    //your code here
    x=0;
    while(x<10)
    {
        if((x%2)==1)
        {
            printf("\n%d",x);
        }
        x++;
    }
    return 0; 
}*/
/*6. Write a loop program to print the two-digit odd numbers , below 20.
Answer:
11
13
15
17
19
#include <stdio.h>
int main()
{
    int x;
    //your code here
    x=10;
    while(x<20)
    {
        if((x%2==1))
        {
            printf("\n%d",x);
        }
        x++;
    }
    return 0;
}*/
/*7. Write a loop program to print two-digit odd numbers, whose aum of digits are 7.
Answer:

25
43
61

#include<stdio.h>
int main()
{
    int x;
    //your code here
    x=10;
    while(x<100)
    {
        if((x%2)==1)
        {
            if(((x%10)+(x/10))==7)
            {
                printf("\n%d",x);
            }
        }
        x++;
    }
    return 0;
}*/
/*8. Write a loop program to print two-digit even numbers,
whose sum of digits are 6.
Answer:
24
42
60

#include<stdio.h>
int main()
{
    int x;
    //your code here
    x=10;
    while(x<100)
    {
        if((x%2)==0)
        {
            if(((x%10)+(x/10))==6)
            {
                printf("\n%d",x);
            }
        }
        x++;
    }
    return 0;
}*/
/*9. Write a loop program to print 
the sum of two-digit numbers whose one's digit
is 5.
Answer:
495
#include<stdio.h>
int main()
{
    int x;
    //Your Code Here
    x= 10;
    int sum = 0;
    while(x<100)
    {
        if((x%10)==5)
        {
            //printf("\n%d",x);
            sum = sum+x;
        }
        x++;
    }
    printf("%d",sum);
    return 0;
}*/
/*10. Write a loop program to print the sum of 
two-digit odd numbers.whose ten's digit is 7.
Answer:
375

#include<stdio.h>
int main()
{
    int x;
    //Your Code Here
    x=10;
    int sum = 0;
    while(x<100)
    {
        if((x%2)==1)
        {
            if((x/10)==7)
            {
                sum = sum+x;
            }
        }
        x++;
    }
    printf("%d",sum);
    return 0;
}*/
/*11. write a program to get a number from 
user and print the total number of digits in 
that number.
Answer:
Input:123456    Output:6
Input:76895439  Output:8
Input:675       Output:3

#include<stdio.h>
int main()
{
    int x;
    //Your Code Here
    printf("Enter a Number:");
    scanf("%d",&x);
    int count = 0;
    while (x>0)
    {
        count++;
        x=x/10;
    }
    printf("%d",count);
    return 0;
    
}*/
/*12. Write a program to get anumber from 
user and print the sum of all digits.
Answer:
Input:123456    Output:21
Input:76895439  Output:51
Input:675       Output:18

#include<stdio.h>
int main()
{
    int x;
    //Your Code Here
    printf("Enter a number: ");
    scanf("%d",&x);
    int sum = 0;
    while(x>0)
    {
        sum = sum +(x%10);
        x=x/10;
    }
    printf("%d",sum);
    return 0;
}*/
/*13. Write a program to get a number from user
and print the reverse of that number.
Answer:
Input:123456    Output:654321
Input:76895439  Output:93459867
Input:675       Output:576

#include<stdio.h>
int main()
{
    int x;
    //your code here
    printf("Enter a number: ");
    scanf("%d",&x);
    int rev=0;
    while (x>0)
    {
        rev = (rev*10)+(x%10);
        x=x/10;
    }
    printf("%d",rev);
    return 0;
}*/
14. Write a program to get a number from user
and interchange the first and last digits
and print the result.
Answer:
Input:123456   Output:623451
Input:76895439 Output:96895437
Input:675      Output:576 

#include <stdio.h>

int main() {
    int x, first_digit, last_digit, digits = 0, divisor = 1;

    // Get the number from the user
    printf("Enter a number: ");
    scanf("%d", &x);

    int temp = x;

    // Find the last digit
    last_digit = temp % 10;

    // Find the number of digits and the first digit using a for loop
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

    return 0;
}*/
/*15. Write a program to get a number from user
and if the last digit of the number is even 
print the same number.If the last digit of the 
number is odd, then subtract 1 from the last digit
and print the number.
(Last digit - MSB)
Answer:
Input:654324   Output:654324
Input:76895439 Output:66895439
Input:675      Output:575

#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x); // e.g., 76895439

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

    return 0;
}
*/
/*16. Write a program to get a number from the user
and print whether the given number is prime or not.
Answer:
Input: 31  Output: Prime
Input: 27  Output: Not Prime
#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

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

    return 0;
}
*/
/*17. Write a program to get a number from the user and print 
whether the number is prime and
the sum of digits of the number is equal to 14.
Answer:
Input:59 Output:Prime and sum of digits is 14
Input:77 Output:Not Prime and sum of digits is 14
Input:23 Output:Prime and sum of digits is not 14
Input:27 Output:Not Prime and sum of digits is not 14

#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

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

    return 0;
}
*/
/*18. Write a program to get a number from the user and print
Whether the number's first two digits(10s and 100s place) are prime or not.
Answer:
Input:359  Output:Prime
Input:3577 Output:Not Prime

#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    int last_two_digits = x % 100; // Get the last two digits (ones and tens place)
    int is_prime = 1; // Assume the number is prime

    if (last_two_digits <= 1) {
        is_prime = 0; // Not prime
    } else {
        int i = 2;
        while (i <= last_two_digits / 2) {
            if (last_two_digits % i == 0) {
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

    return 0;
}
*/
/*19. Write a program to get a 4-digit number from the user and print
whether the first two digits(1000s and 100s place) are prime or not.
Answer:
Input:6359  Output:Not Prime
Input:3577  Output:Prime

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    int first_two_digits = x / 100; // Get the first two digits (thousands and hundreds place)
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

    return 0;
}*/
/*20. Write a program to print the total number of single digit
prime numbers.
Answer:
4

#include <stdio.h>

int main()
{
    int count = 0;
    int i = 2;

    while (i < 10)
    {
        int is_prime = 1; // Assume the number is prime
        int j = 2;

        while (j <= i / 2)
        {
            if (i % j == 0)
            {
                is_prime = 0; // Found a divisor, not prime
                break;
            }
            j++;
        }

        if (is_prime)
        {
            count++;
        }

        i++;
    }

    printf("%d\n", count);
    return 0;
}
*/
/*21. Write a program to get a number from the user and print
total number of digits which are odd in the number.
Answer:
Input:12345678   Output:4
Input:987531     Output:5

#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

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
    return 0;
}
*/
/*22. Write a program to get a number from the user and print
total number of two-digit odd numbers in the number.
Answer:
Input:12354678   Output:3
Input:987531     Output:4

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

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
    return 0;
}*/
/*23. Write a program to get a number from the user and print
the total number of single-digit perfect square numbers
in the number.
Answer:
Input:123456789  Output:3
Input:987531     Output:2

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
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
/*24. Write a program to get a number from the user and print
the total number of two-digit perfect square numbers in the number.
Answer:
Input:163496481  Output:4
Input:364925     Output:4

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
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
    return 0;
}*/
/*25. Write a program to get a number from the user and print
the total number of single-digit prime numbers in the number.
Answer:
Input:16349681  Output:1
Input:364925    Output:3

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
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
    return 0;
}*/
/*26. Write a program to print biggest 4-digit number
which is  divisible by 7 and 9.
Answer:
9954

#include <stdio.h>
int main()
{
    int num = 9999;
    while(num > 0)
    {
        if (num % 7 == 0 && num % 9 == 0)
        {
            printf("%d\n", num);
            break;
        }
        num--;
    }
    return 0;
}*/
/*27. Write a program to print the total count of numbers
less than 100000 whose sum of digits is 14.
Answer:
2710

#include <stdio.h>
int main()
{
    int count = 0;
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
    return 0;
}*/
/*28. Write a program to get two numbers from user and
print the LCM of those numbers.
Answer:
Input: 4 6  Output: 12
Input: 5 7  Output: 35

#include <stdio.h>
int main()
{
    int num1, num2, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
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
    return 0;
}*/
/*29. Write a program to get three  numbers from the user and print
the LCM of those numbers.
Answer:
Input: 4 6 8  Output: 24
Input: 5 7 9  Output: 315

#include <stdio.h>
int main()
{
    int num1, num2, num3, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
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
    return 0;
}*/
/*30. Write a program to get two numbers from the user and print
the HCF of those numbers.
Answer:
Input: 4 6  Output: 2
Input: 5 7  Output: 1
*/
#include <stdio.h>
int main()
{
    int num1, num2, min;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
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
    return 0;
}