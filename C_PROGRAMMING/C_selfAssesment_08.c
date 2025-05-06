/*C Programming self assessment 8

1. Write a loop program to print sum from 1 to 5 
Function Name: disp_sum
Answer: 
15

#include <stdio.h>

int disp_sum();  // Function Declaration

int main()
{
    int sum = disp_sum(); // Function call and storing the returned sum
    printf("Sum from 1 to 5: %d\n", sum);
    return 0;
}

int disp_sum()  // Function definition
{
    int total = 0;
    for (int i = 1; i <= 5; i++)
    {
        total += i;
    }
    return total;  // Return the computed sum
}
*/
/*2.Write a loop program to print sum from 6 to 1 
Function Name: disp_rsum
Answer: 
21

#include <stdio.h>

int disp_rsum();  // Function Declaration

int main()
{
    int sum = disp_rsum();//Function call
    printf("Sum from 6 to 1: %d\n", sum);
    return 0;
}

int disp_rsum()
  // Function definition
{
    int total = 0;
    for (int i = 6; i >= 0; i--)
    {
        total += i;
    }
    return total;  // Return the computed sum
}*/
/*3. Write a loop program to print the
sum of two digit numbers whose one's digit is 5.
Function Name: disp_2digit_one5
Answer: 
495

#include <stdio.h>

int disp_2digit_one5(int limit);  // Function Declaration

int main()
{
    int limit = 99;  // You can change this limit as needed
    int sum = disp_2digit_one5(limit); // Function call and storing the returned sum
    printf("Sum of two-digit numbers whose one's digit is 5 up to %d: %d\n", limit, sum);
    return 0;
}

int disp_2digit_one5(int limit)  // Function definition
{
    int total = 0;
    for (int num = 10; num <= limit; num++)
    {
        if (num % 10 == 5)  // Check if the one's digit is 5
        {
            total += num;
        }
    }
    return total;  // Return the computed sum
}
*/
/*4. Write a loop program to print the sum of two-digit
odd numbers,whode ten's digit is 7.
Function NAme: disp_2digit_odd_sum_tens7
Answer: 
375
#include<stdio.h>
int disp_2digit_odd_sum_tens7(int sum); //Funtion Declaration
int main()
{
    int x,y;
    x=10;
    y = disp_2digit_odd_sum_tens7(x);//Function Call
    printf("%d",y);
}
int disp_2digit_odd_sum_tens7(int sum)  //Fuunction Defination
{
    sum = 0;
    int x =10;
    //your code here.
    while(x<100)
    {
        if(( x%2 )==1)
        {
            if((x/10)==7)
            {
                sum = sum+x;
            }
        }
        x++;
    }
    return (sum);
}*/
/*5.Write a program to get a number from user print
the total number of digits in that number
Function Name: count_total_digits
Answer:
Input: 1323456     Output:6
Input: 76895439    Output: 8
Input:675         Output:3 

#include<stdio.h>
int count_total_digits(int x); //function declaration
int main()
{
    int num,result;
    printf("Enter a Number: ");
    scanf("%d",&num);
    result = count_total_digits(num); //function Calll
    printf("%d",result);
}
int count_total_digits(int x)  //Function Defination
{
    int count = 0;
    while(x>0)
    {
        count = count+1;
        x = x/10;
    }
    return count;
}*/
/*6. Write a program to get a number from user
and print the sum of all digits.
Function Name: disp_sum_al_digits
Answer:
Input: 123456    Output:21
Input:76895439   Output:51
Input:675        Output:18

#include<stdio.h>
int disp_sum_all_digits(int num); //Function Declaration
int main()
{
    int x,y;
    printf("Enter a Number: ");
    scanf("%d",&x);
    y = disp_sum_all_digits(x);
    printf("%d",y);
}
int disp_sum_all_digits(int num)
//Funtion Defination
{
    int sum =0;
    while(num>0)
    {
        sum = sum + (num%10);
        num = num/10;
    }
    return sum;
}*/
/*7. Write a program to get a number from user
and print the reverse of that number.
Function Name: disp_reverse_number
Answer: 
Input:123456       Output:654321
Input:76895439     Output:93459867
Input:675          Output:576

#include<stdio.h>
int disp_reverse_number(int n0); //Function Declaration
int main()
{
    int x,y;
    printf("Enter a Number: ");
    scanf("%d",&x);
    y = disp_reverse_number(x);  //Function Call
    printf("%d",y);
}
int disp_reverse_number(int n0)  //Function Defination
{
    int rev = 0;
    while(n0 > 0)
    {
        rev = (rev*10)+(n0%10);
        n0 = n0/10;
    }
    return rev;
}*/
/*8. write a aprogram to get a number from the user
and interchange first and last digit digits 
and print the result.
Function Name: disp_interchange_first_last_digit
Answer:
Input:123456   Output:623451
Input:76895439 Output:96895437
Input:675      Output:576

#include <stdio.h>
int disp_interchange_first_last_digit(int x); //Function declaration
int main() 
{
    int x, y;
    // Get the number from the user
    printf("Enter a number: ");
    scanf("%d", &x);
   y =  disp_interchange_first_last_digit(x); //Function Call
    // Print the result
    printf("Result after interchanging first and last digits: %d\n",y);

    return 0;
}
int disp_interchange_first_last_digit(int x)
{
    int first_digit, last_digit, digits = 0, divisor = 1;
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
    return result;
    
}*/

/*9. Write a program ro get a number from the user and
if the last digit of the number is even
then print the same number.
If the last digit of the number is odd,
then subtract 1 from the last digit.
Function name: check_last_digit_odd
Answer:
Input:654324   Output:654324
input:76895439 Output:66895439
Input:675      Output:675
(NOTE: Last  digit - MSD)

#include <stdio.h>
int check_last_digit_odd(int num);//Function Declaration
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d", &x); // e.g., 76895439
    y = check_last_digit_odd(x);//Function Call
    printf("%d",y);
    return 0;
}
int check_last_digit_odd(int num)//Funcntion Defination
{
    int last_digit, original, multiplier = 1, new_number = 0;
    original = num;

    // Find the most significant digit using a for loop
    for (;num>= 10; multiplier *= 10) {
      num /= 10;
    }
    last_digit = num;
    //printf("Last digit: %d\n", last_digit);

    // Check if the most significant digit is even using an if statement
    if (last_digit % 2 == 0) {
     // printf("%d\n", original);
     return original;
    } else {
        // Subtract 1 from the most significant digit
        last_digit -= 1;
        new_number = last_digit * multiplier + (original % multiplier);
      //printf("%d\n", new_number);
      return new_number;
    }
} */
/*10. Write a program to print total number of 
single digit prime numbers
function name: disp_total_single_prime
Answer:
4
#include<stdio.h>
int disp_total_single_prime();//Function Declaration
int main()
{
    int y;
    y = disp_total_single_prime();//Function Call
    printf("%d",y);
}
int disp_total_single_prime()
//Function Defination
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
//printf("%d\n", count);
    return count;
}*/
/*11. Write a program get number from user 
print the total number of digits which are odd in the number. 
Function Name: disp_total_odd_digits
Answer: 
Input:12345678 Output:4
Input:987531   Output:5 

#include <stdio.h>
int disp_total_odd_digits(int num); //Function Declaration
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d", &x);
    y = disp_total_odd_digits(x);//Function Call
    printf("%d",y);
    return 0;
}
int disp_total_odd_digits(int num)
//Funciton Defination
{
    int count = 0;
    int i = num;

    while (i > 0)
    {
        if (i % 2 != 0)
        {
            count++;
        }
        i /= 10;
    }
    return count;
 // printf("Total number of odd digits in %d is %d\n", x, count);
 
}
 */
/*12. Write a program get a number from user
print the total number of two-digit odd numbers in the number.
Function Name: disp_total_2digit_odd
Answer: 
Input:12345678    Output:3
Input:987531      Output:4 
#include<stdio.h>
int disp_total_2digit_odd(int num);  //Function Declaration
int main()
{
    int x,y;
    printf("Enter a Number: ");
    scanf("%d",&x);
    y = disp_total_2digit_odd(x);   //Function Call
    printf("%d",y);
}
int disp_total_2digit_odd(int num)      //Function Defination
{
    int count = 0;
    int prev_digit = -1;
    int current_digit;
    int temp = num;

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

   // printf("Total number of two-digit odd numbers in %d is %d\n", x, count);
    return count;
}*/
/*13. Write a program get a number from user
print the total number of single-digit perfect square numbers
in the number.
Function Name: disp_single_digit_square
Answer: 
Input: 123456789    Output: 3
Input:987531        Output:2 

#include<stdio.h>
int disp_single_digit_square(int no); //Function Declaration
int main()
{
    int x,y;
    printf("Enter a Number: ");
    scanf("%d",&x);
    y = disp_single_digit_square(x); //Function Call
    printf("%d",y);
}
int disp_single_digit_square(int no)   //Function Defination
{
    int count = 0;
    int i = no;
    while (i > 0)
    {
        int digit = i % 10;
        if (digit == 1 || digit == 4 || digit == 9)
        {
            count++;
        }
        i /= 10;
    }
    //printf("Total number of single digit perfect square numbers in %d is %d\n", x, count);
    return count;
}*/
/*14. Write a program get a number from user
print the number of two-digit perfect square numbers in the number.
Function Name: disp_two_digit_square
Answer: 
Input:163496481   Output:4 
Input:364925      Output:4 

#include<stdio.h>
int disp_two_digit_square(int no);  //Function Declaration
int main()
{
    int x,y;
    printf("Enter a Number: ");
    scanf("%d",&x);
    y = disp_two_digit_square(x); //function Call
    printf("%d",y);
}
int disp_two_digit_square(int no)       //Function Defination
{
    int count = 0;
    int i = no;
    while (i > 10)
    {
        int digit = i % 100;
        if (digit == 16 || digit ==25 || digit == 36 || digit == 49 || digit == 64 || digit == 81)
        {
            count++;
        }
        i /= 10;
    }
   // printf("Total number of two digit perfect square numbers in %d is %d\n", x, count);
    return count;
}*/
/*15. Write a program get a number from user
print the total number of single-digit prime numbers
in the number. 
Function Name: disp_single_digit_prime
Answer: 
Input:163496481   Output:1 
Input:364925      Output:3 

#include <stdio.h>
int disp_single_digit_prime(int no); //Function Daclaration
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d", &x);
    y = disp_single_digit_prime(x);     //Function Call
    printf("%d",y);
}
int disp_single_digit_prime(int no)     //Function Defination
{
    int count = 0;
    int i = no;
    while (i > 0)
    {
        int digit = i % 10;
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
        {
            count++;
        }
        i /= 10;
    }
 //   printf("Total number of single digit prime numbers in %d is %d\n", x, count);
    return count;
}*/

/*16. Write a program to print biggest 4-digit number 
which is divisible by 7 and 9. 
Function Name: disp_biggest_4digit_div7_9
Answer: 
9954

#include <stdio.h>
int disp_biggest_4digit_div7_9(int no);//Function Declaration
int main()
{
    int x,y;
    x = 9999;
    y = disp_biggest_4digit_div7_9(x); //Function Call
    printf("%d",y);
}
int disp_biggest_4digit_div7_9(int no)      //Function Defination
{
    while(no > 0)
    {
        if (no % 7 == 0 && no % 9 == 0)
        {
           // printf("%d\n", no);
            return no;
            break;
        }
        no--;
    }
}*/
/*17. Write a program to print the total count of numbers
less than 100000 whose sum of digits is 14.
Function name: disp_count_sum14
Answer:
2710
#include <stdio.h>
int disp_count_sum_14(int no);//Function Declaration
int main()
{
    int x,y;
    x =0;
    y = disp_count_sum_14(x);//Function Call
    printf("%d",y);
}
int disp_count_sum_14(int no)        //Function Defination
{
    int count = 0;
   
    while(no < 100000)
    {
        int sum = 0;
        int temp = no;
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == 14)
        {
            count++;
        }
        no++;
    }
 //   printf("Total count of numbers less than 100000 whose sum of digits is 14: %d\n", count);
    return count;
}*/
/*18. Write a program to get two numbers from user and
print the LCM of those numbers.
Function Name: disp_LCM2
Answer:
Input: 4 6  Output: 12
Input: 5 7  Output: 35
#include <stdio.h>
int disp_LCM2(int n1,int n2);   //Function Declaration
int main()
{
    int num1, num2, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    y = disp_LCM2(num1,num2);       //Function Call
    printf("%d",y);
}
int disp_LCM2(int n1,int n2)    //Function Defination
{
    int max;
    max = (n1 > n2) ? n1 : n2;
    while(1)
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            //printf("LCM of %d and %d is %d\n", n1, n2, max);
            return max;
            break;
        }
        max++;
    }
}*/
/*19. Write a program to get three  numbers from the user and print
the LCM of those numbers.
Function name: disp_LCM3
Answer:
Input: 4 6 8  Output: 24
Input: 5 7 9  Output: 315
#include <stdio.h>
int disp_LCM3(int n1,int n2,int n3);    //Function Declaration
int main()
{
    int num1, num2, num3, y;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    y = disp_LCM3(num1,num2,num3);  //Function Call
    printf("%d",y);
}
int disp_LCM3(int n1,int n2,int n3)     //Function Defination
{
    int max;
    max = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
    while(1)
    {
        if (max % n1 == 0 && max % n2 == 0 && max % n3 == 0)
        {
          //  printf("LCM of %d, %d and %d is %d\n", num1, num2, num3, max);
          return max;  
          break;
        }
        max++;
    }
}*/
/*20.  Write a program to get two numbers from the user and print
the HCF of those numbers.
function name : disp_count_HCF2
Answer:
Input: 4 6  Output: 2
Input: 5 7  Output: 1*/
#include <stdio.h>
int disp_HCF2(int n1,int n2);   //Function Declaration
int main()
{
    int num1, num2, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    y = disp_HCF2(num1,num2);       //Function Call
    printf("%d",y); 
}
int disp_HCF2(int n1,int n2)    //Function Defination
{
    int min;
    min = (n1 < n2) ? n1 : n2;
    int i = min; 
    while(i >= 1)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            //printf("HCF of %d and %d is %d\n", n1, n2, i);
            return i;
            break;
        }
        i--;
    }

}
