/* C PROGRAMMING SELF ASSESSMENT 5*/
/* 1. WRite a loop program to print 1 to 5 numbers one by one.
Answer:
1
2
3
4
5

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}*/
/*2. WRite a loop program to print 5 to 1 numbers one by one.
Answer:

5
4
3
2
1

#include <stdio.h>
int main()
{
    for (int i = 5; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}
*/
/*3. Write a loop program to print sum from 1 to 5
Answer:
15

#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}*/
/*4. write a loop program to print sum from 6 to 1
Answer:
21

#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 6; i >= 1; i--)
    {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}*/
/*5. Write a loop program to print odd numbers from 1 to 9.
Answer:
1
3
5
7
9
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 9; i += 2)
    {
        printf("%d\n", i);
    }
    return 0;
}*/
/*6. Write a loop program to print two-digit odd numbers, below 20.
Answer:
11
113
15
17
19
#include <stdio.h>
int main()
{
    for (int i = 11; i < 20; i += 2)
    {
        printf("%d\n", i);
    }
    return 0;
}
*/
/*7. Write a loop program to print the odd two-digit odd numbers,
whose sum of digits are 7.
Answer:
25
43
61

#include <stdio.h>
int main()
{
    for (int i = 11; i < 100; i += 2)
    {
        int sum = 0;
        int temp = i;
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == 7)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}*/
/*8. Write a loop program to print the two digit
even numbers , whose sum of digits are 6.
Answer:
24
42
60
#include <stdio.h>
int main()
{
    for (int i = 10; i < 100; i += 2)
    {
        int sum = 0;
        int temp = i;
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == 6)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}*/
/*9. Write a loop program to print  the sum of two-digit numbers
whose one's digitis 5.
Answer: 495

#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 15; i < 100; i += 10)
    {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}*/
/*10. Write a loop program to print the sum of digits of 
ODD numbers , whose ten's digit is 7.
Answer:
375

#include <stdio.h>
int main()
{
    int x,sum=0;
    //your code here
    for(x = 10; x<100 ; x++)
    {
       loop: if(x%2 == 1)
        {
            if(x/10 == 7)
            {
               // printf("%d\n", x);
               sum = sum+x;
                x++;
                goto loop;
            }
        }
    }
    printf("%d\n", sum);   
        
} */
11. Write a program to get a number from the user
and print the total number of digits in it.
Answer:
Input:123456   Output:6
Input:76895439 Output:8
Input:675      Output:3

#include<stdio.h>
int main()
{
    int x;
    //your code here
    printf("Enter a number: ");
    scanf("%d", &x);
    int count = 0;
    for(int i = x; i > 0; i /= 10)
    {
        count++;
    }
    printf("Total number of digits in %d is %d\n", x, count);
}*/
/*12. Write a program to get a number from the user.
to print the sum of all digits.
Answer:
Input:123456   Output:21
Input:76895439 Output:51
Input:675      Output:18
#include<stdio.h>
int main()
{
    int x;
    //your code here
    printf("Enter a number: ");
    scanf("%d", &x);
    int sum = 0;
    for(int i = x; i > 0; i /= 10)
    {
        sum += i % 10;
    }
    printf("Sum of all digits in %d is %d\n", x, sum);
}*/
/*13. Write a program to get a number from the user and
print the reverse of that number.
Answer:
Input:123456   Output:654321
Input:76895439 Output:93459867
Input:675      Output:576
#include<stdio.h>
int main()
{
    int x;
    //your code here
    printf("Enter a number: ");
    scanf("%d", &x);
    int reverse = 0;
    for(int i = x; i > 0; i /= 10)
    {
        reverse = reverse * 10 + i % 10;
    }
    printf("Reverse of %d is %d\n", x, reverse);
}*/
/*14. write a aprogram to get a number from the user
and interchange first and last digit digits 
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
    for (; temp >= 10; digits++, divisor *= 10) {
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
}
*/
/*15. Write a program ro get a number from the user and
if the last digit of the number is even
then print the same number.
If the last digit of the number is odd,
then subtract 1 from the last digit.
Answer:
Input:654324   Output:654324
input:76895439 Output:66895439
Input:675      Output:675
(NOTE: Last  digit - MSD)

#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x); // e.g., 76895439

    int last_digit, original, multiplier = 1, new_number = 0;
    original = x;

    // Find the most significant digit using a for loop
    for (; x >= 10; multiplier *= 10) {
        x /= 10;
    }
    last_digit = x;
    //printf("Last digit: %d\n", last_digit);

    // Check if the most significant digit is even using an if statement
    if (last_digit % 2 == 0) {
        printf("%d\n", original);
    } else {
        // Subtract 1 from the most significant digit
        last_digit -= 1;
        new_number = last_digit * multiplier + (original % multiplier);
        printf("%d\n", new_number);
    }

    return 0;
}*/

/*16. Write a program to get a number from the user and print whether the given number is prime or not.
Answer:
Input:31 Output:Prime
Input:27 Output:Not Prime.

#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x > 1) {
        if (x == 2) {
            printf("Prime");
        } else {
            int is_prime = 1;  // Assume the number is prime
            for (int i = 2; i < x; i++) {
                if (x % i == 0) {
                    is_prime = 0;  // Found a divisor, not prime
                    break;
                }
            }
            if (is_prime) {
                printf("Prime");
            } else {
                printf("Not Prime");
            }
        }
    } else {
        printf("Not Prime");
    }

    return 0;
}*/
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

    if (x > 1)
    {
        if (x == 2)
        {
            printf("Prime");
        }
        else
        {
            int is_prime = 1; // Assume the number is prime
            for (int i = 2; i < x; i++)
            {
                if (x % i == 0)
                {
                    is_prime = 0; // Found a divisor, not prime
                    break;
                }
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
    for (int i = x; i > 0; i /= 10)
    {
        sum += i % 10;
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
        for (int i = 2; i <= last_two_digits / 2; i++) {
            if (last_two_digits % i == 0) {
                is_prime = 0; // Found a divisor, not prime
                break;
            }
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
whether that number's middle two digits are prime or not.
(hundreds and tens place digits)
Answer:
Input:6359  Output: Not Prime
Input3537   Output:  Prime

#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    int middle_two_digits = (x / 10) % 100; // Get the middle two digits (hundreds and tens place)
    int is_prime = 1; // Assume the number is prime

    if (middle_two_digits <= 1) {
        is_prime = 0; // Not prime
    } else {
        for (int i = 2; i <= middle_two_digits / 2; i++) {
            if (middle_two_digits % i == 0) {
                is_prime = 0; // Found a divisor, not prime
                break;
            }
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
/*20. Write a program to pritn the total number of single digit
prime numbers
Answer:
4

#include <stdio.h>
int main()
{
    int count = 0;
    for (int i = 2; i < 10; i++)
    {
        int is_prime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
*/
/*21. Write a program to get number from user and 
print total number of digits which are ODD in the number.
Answer:
Input:12345678 Output:4
Input:987531   Output:5

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    int count = 0;
    for(int i = x; i > 0; i /= 10)
    {
        if(i % 2 != 0)
        {
            count++;
        }
    }
    printf("Total number of odd digits in %d is %d\n", x, count);
    return 0;
}*/
/*22. Write a program to get a number from the user and 
print total number of two-digit odd numbers in the number. 
Answer: 
Input:12354678 Output:3 
Input:987531 Output:4 
#include <stdio.h>

int main() {
    long number, temp_number;
    int prev_digit = -1, count = 0;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%ld", &number);

    temp_number = number;

    // Loop through the number using a for statement
    for (; temp_number > 0; temp_number /= 10) {
        int current_digit = temp_number % 10;

        // If there's a previous digit, form the two-digit number
        if (prev_digit != -1) {
            int two_digit_num = current_digit * 10 + prev_digit;

            // Check if it's a two-digit odd number
            if (two_digit_num >= 10 && two_digit_num <= 99 && two_digit_num % 2 != 0) {
                count++;
            }
        }

        // Update the previous digit
        prev_digit = current_digit;
    }

    // Print the total number of two-digit odd numbers
    printf("Total number of two-digit odd numbers: %d\n", count);

    return 0;
}
*/
/*23. Write a program to get a number from the user and
print the total number of single digit perfect square numbers in the number.
Answer:
Input:123456789 Output:3
Input:987531 Output:2

#include <stdio.h>
int main()
{
    int x;
    // Get the number from the user
    printf("Enter a number: ");
    scanf("%d", &x);
    int count = 0;
    for (int i = x; i > 0; i /= 10)
    {
        int digit = i % 10;
        if (digit == 1 || digit == 4 || digit == 9)
        {
            count++;
        }
    }
    printf("Total number of single digit perfect square numbers in %d is %d\n", x, count);
}*/
/*24. WRite a program to get a number from the user and
print the total number of two-digit perfect square numbers in the number.
Answer:
Input:163496481 Output:4
Input:364925    Output:4
#include <stdio.h>

int main()
{
    int x;
    // Get the number from the user
    printf("Enter a number: ");
    scanf("%d", &x);
    int count = 0;

    for (int i = x; i >= 10; i /= 10)  // Ensure that we have at least two digits to consider
    {
        int digit = i % 100;
        if (digit == 16 || digit == 25 || digit == 36 || digit == 49 || digit == 64 || digit == 81)
        {
            count++;
        }
    }
    printf("Total number of two-digit perfect square numbers in %d is %d\n", x, count);
    return 0;
}
*/
/*25. Write a program to to get number from the user
print the total number of single-digit prime numbers in the number.
Answer:
Input:16349681 Output:1
Input:364925   Output:3

#include <stdio.h>
int main()
{
    int x;
    // Get the number from the user
    printf("Enter a number: ");
    scanf("%d", &x);
    int count = 0;
    for (int i = x; i > 0; i /= 10)
    {
        int digit = i % 10;
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
        {
            count++;
        }
    }
    printf("Total number of single-digit prime numbers in %d is %d\n", x, count);
    return 0;
}*/
/*26.  Write a program to print biggest 4-digit number 
which is divisible by 7 and 9.
Answer:
9954

#include <stdio.h>
int main()
{
    int num = 9999;
    for(;num > 0;num--)
    {
        if (num % 7 == 0 && num % 9 == 0)
        {
            printf("%d\n", num);
            break;
        }
    }
    return 0;
}*/
/*27. Write a program to print the total count of numbers
which are less than 100000 and whose sum of digits is 14.
Answer:2710

#include <stdio.h>

// Function to calculate the sum of digits of a number
int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int count = 0;

    // Loop through numbers less than 100000
    for (int i = 0; i < 100000; i++) {
        if (sum_of_digits(i) == 14) {
            count++;
        }
    }

    // Print the total count
    printf("Total count of numbers less than 100000 whose sum of digits is 14: %d\n", count);

    return 0;
}*/
/*28.  program to get two numbers from user and 
print the LCM of those numbers.
Answer:

#include <stdio.h>
int main()
{
    int num1, num2, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    max = (num1 > num2) ? num1 : num2;
    for(;;)
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
/*29. write a program to get three numberes from user
and print the LCM of those numbers.

#include <stdio.h>
int main()
{
    int num1, num2, num3, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    for(;;)
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
/* 30. Write a program to get two numbwers from user
and print the HCF of those numbers.
*/
#include <stdio.h>
int main()
{
    int num1, num2, min;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    min = (num1 < num2) ? num1 : num2;
    for (int i = min; i >= 1; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            printf("HCF of %d and %d is %d\n", num1, num2, i);
            break;
        }
    }
    return 0;
}