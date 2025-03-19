
//01.write a loop Program to print 1 to 5 on one by one.
/*
1
2
3
4
5
*/
/*#include<stdio.h>
int main()
{
    int x;
    //Your code here
    x=1;
    loop:if(x<6)
    {
        //Your Code here
        printf("%d\n",x);
        x=x+1;
        goto loop;
    }
}
*/
//02. write a loop Program to print 5 to 1 on one by one.
/*
5
4
3
2
1
*/
/*#include<stdio.h>
int main()
{
    int x;
    //Your code here
    x=5;
    loop:if(x>0)
    {
        //Your Code here
        printf("%d\n",x);
        x=x-1;
        goto loop;
    }
}*/
//03. write a loop Program to  print sum from 1 to 5 .
//Answer: 15
/*#include<stdio.h>
int main()
{
    int x;
    //Your code here
    x=1;
    int sum = 0;
    loop:if(x<6)
    {
        //Your Code here
        sum = sum+x;
        x=x+1;
        goto loop;
    }
    else{
     printf("%d",sum);
    }
}*/
//Question 04.: write a loop Program to print sum from 6 to 1 .
//Answer: 21
/*#include<stdio.h>
int main()
{
    int x;
    //Your code here
    x=6;
    int sum = 0;
    loop:if(x>0)
    {
        //Your Code here
        sum = sum+x;
        x=x-1;
        goto loop;
    }
    else{
     printf("%d",sum);
    }
}*/
// Question 05: Write a loop Program to print odd numberes 1 to 9.
// Answer:
/*
1
3
5
7
9
*/
/*#include <stdio.h>
int main()
{
    int x;
    // your Code here
    x = 1;
loop:
    if (x < 10)
    {
        if (x % 2 == 1)
        {
            // Your Code Here
            printf("%d\n", x);
            x = x + 1;
            goto loop;
        }
        else
        {
            x = x + 1;
            goto loop;
        }
    }
}
*/
// Question 06: Write a loop Program to print two-digit odd numberes below 20.
// Answer:
/*
11
13
15
17
19
*/
/*
#include <stdio.h>
int main()
{
    int x;
    // your Code here
    x = 10;
loop:
    if (x < 20)
    {
        if (x % 2 == 1)
        {
            // Your Code Here
            printf("%d\n", x);
            x = x + 1;
            goto loop;
        }
        else
        {
            x = x + 1;
            goto loop;
        }
    }
}*/
// Question 07: Write a loop Program to print two-digit odd numbers whose sum of digits is 7.
// Answer:
/*
25
43
61
*/
/*#include <stdio.h>
int main()
{
    int x;
    // your Code here
    x = 10;
    int sum;
loop:
    if (x < 100)
    {
        sum = (x%10)+(x/10);
        if ((x % 2 == 1) && (sum == 7))
        {
            // Your Code Here
            printf("%d\n", x);
            x = x + 1;
            goto loop;
        }
        else
        {
            x = x + 1;
            goto loop;
        }
    }
}*/
// Question 08: Write a loop Program to print two-digit even numbers whose sum of digits is 6.
// Answer:
/*
24
42
60
*/
/*#include <stdio.h>
int main()
{
    int x;
    // your Code here
    x = 10;
    int sum;
loop:
    if (x < 100)
    {
        sum = (x%10)+(x/10);
        if ((x % 2 == 0) && (sum == 6))
        {
            // Your Code Here
            printf("%d\n", x);
            x = x + 1;
            goto loop;
        }
        else
        {
            x = x + 1;
            goto loop;
        }
    }
}
*/
//Question 09: Write loop program to print the sum of two-digit numbers whose one's digit is 5.
//Answer: 495
/*#include<stdio.h>
int main()
{
    int x;
    //Your Code Here
    x = 10;
    int ones,sum =0;
    loop:if(x<100)
    {
        //Your Code Here
        ones = x%10;
        if(ones == 5){
            sum = sum + x;
            x=x+1;
            goto loop;
        }
        else{
            x = x+1;
            goto loop;
        }
    }
    //Your code Here
    printf("%d",sum);

}
*/
//Question 10: Write loop program to print the sum of two-digit odd numbers whose ten's digit is 7.
//Answer: 375
/*#include<stdio.h>
int main()
{
    int x;
    //Your Code Here
    x = 10;
    int tens,sum =0;
    loop:if(x<100)
    {
        //Your Code Here
        tens = x/10;
        if((x%2 == 1) &&(tens == 7)){
            sum = sum + x;
            x=x+1;
            goto loop;
        }
        else{
            x = x+1;
            goto loop;
        }
    }
    //Your code Here
    printf("%d",sum);

}
*/
//Question 11: Write a program to get number from the user print the total number of digits in that number.
/*Answer:
Input:123456 - Output- 6
Input:76895439- Output - 8
Input:675 - Output - 3
*/
/*#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    //Your Code Here
    int digit,count =0;
    while(x!=0)
    {
        digit = x%10;
        count = count + 1;
        x = x/10;
    }
    printf("%d",count);

}
*/
//Question 12: Write a program to get number from the user and print the sum of all digits.
/*Answer:
Input:123456 - Output- 21
Input:76895439- Output - 51
Input:675 - Output - 18
*/
/*#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    //Your Code Here
    int digit,sum =0;
    while(x!=0)
    {
        digit = x%10;
        sum = sum+digit;
        x = x/10;
    }
    printf("%d",sum);

}
*/
//Question 13: Write a program to get number from the user and print the reverse of that number.
/*Answer:
Input:123456 - Output- 654321
Input:76895439- Output - 93459867
Input:675 - Output - 576
*/
/*#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    //Your Code Here
    int digit,reverse =0;
    while(x!=0)
    {
        digit = x%10;
        reverse = (reverse*10)+digit;
        x = x/10;
    }
    printf("%d",reverse);

}*/
// Question 14: Write a program to get a number from user and interchange the first and
// last digits and print the result.
// Answer:
// Input : 123456 - Output – 623451
// Input : 76895439- Output – 96895437
// Input : 675 – Output - 576
/*#include<stdio.h>
int main () {
    int x,fd,ld,num,mul=1;
    printf("Enter a number: ");
    scanf("%d",&x);      //x=12345
    num=x;    //num=12345
    ld=x%10;    //ld=5
    while(num>9) {    //    T       T    T         T
        num =num/10;    // 1234    123   12        1
        mul=mul*10;    //    10   100   1000    10000
    }
    fd=num%10;    //fd=1%10=1

    x=x-ld;    //x=12345-5=12340

    x=x+fd;    //x=12340+1=12341

    x=x-(fd*mul);    //x=12341-10000=2341

    x=x+(ld*mul);    //x=2341+50000=52341
    printf("%d",x);
}
*/
//Question 15: Write a program to get a number from user and if the last digit of the 
//number is even print the same number. If the last digit of the number is 
//odd then subtract 1 from the last digit and print the number. 
//(Note: Last digit -MSB)
//Answer: 
//Input : 123456 - Output – 123456
//Input : 96895439- Output – 76895439
//Input : 675 – Output - 575
/*#include<stdio.h>
int main () {
    int x,first_digit,num,mul=1;
    printf("Enter a number: ");
    scanf("%d",&x);      //x=675
    num=x;    //num=675
    first_digit=x%10;    //first_digit=5
    while(num>9) {    //    T     T            F
        num =num/10;    // 67     6
        mul=mul*10;    //  10     100
    }
    if(first_digit%2  ==  0) {    //F
        printf("%d",x);
    }
    else {
        x=x-mul;            //675-100=575 subtracting 1 from MSB or Last Digit
        printf("%d",x);
    }
}*/
//Question 16: Write a program get number from user
//print whether that number is prime or not.
//Answer: 
//Input : 31 - Output : Prime
//Input : 27 - Output : Not Prime.
/*#include<stdio.h>
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    int i,c=0;
    i=1;
    while(i<=x) {
        if(x%i ==0)
            c++;
        i++;
    }
    if(c==2)
        printf("prime");
    else
        printf("not");

}*/
//Question 17: Write a program to get a number from user, print whether that number is 
//prime, and sum of digit is equal to 14.
//Answer: 
//Input: 59 - Output: Prime & Sum of Digits is 14
//Input: 77 - Output: Not Prime but sum of digits is 14
//Input: 13 - Output: Prime, but sum of Digits is not 14
/*#include<stdio.h>
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    int i,ones,tens,sum,c=0;
    ones=x%10;
    tens=x/10;
    sum=ones+tens;
    i=1;
    while(i<=x) {
        if(x%i ==0)
            c++;
        i++;
    }
    if(c==2)    
        if(sum==14)
            printf("%d is prime & sum of digits is 14",x);
        else
             printf("%d is prime but sum of digits is not 14",x);   
    else
        if(sum==14)
            printf("%d is not prime but sum is 14 ",x);
        else
            printf("%d is not prime & sum is not 14",x);    

}*/
//Question 18: Write a program to get number from user, print whether that number’s 
//first two digits (ten’s digits and one’s digit) is prime.
//Answer: 
//Input: 359 - Output: Prime
//Input: 3577 - Output: Not Prime
/*#include<stdio.h>
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    int i,first,second,num,c=0;
    first = x%10;
    second = (x/10)%10;
    num=(second*10)+first ;
    i=1;
    while(i<=num) {
        if(num%i ==0)
            c++;
        i++;
    }
    if(c==2)
        printf("prime");
    else
        printf("not");

}
*/
//Question 19: Write a program to get a 4-digit number from user, print whether that 
//number’s middle two digits (hundred’s digit and ten’s digit) is prime.
//Answer: 
//Input: 6359 - Output: Not Prime
//Input: 3517 - Output: Prime
/*#include<stdio.h>
int main()
{
    int x;
    printf("enter a 4-digit  number: ");
    scanf("%d",&x);
    int i,third,second,num,c=0;
    third = (x/100)%10;
    second = (x/10)%10;
    num=(third*10)+second ;
    i=1;
    while(i<=num) {
        if(num%i ==0)
            c++;
        i++;
    }
    if(c==2)
        printf("prime");
    else
        printf("not prime");

}
*/

//Question 20: Write a program print total number of single digit Prime numbers
//Answer: 4
/*#include<stdio.h>
int main()
{
    int i,x,c=0;
    for(i=1; i<10; i++) {
        for(x=2; x<i; x++) {
            if(i%x == 0)
                break;
        }
        if(i==x)
        c++;  
    }
    printf("%d",c);
}
*/
//Question 21: Write a program get number from user
//print the total number digits
//which are odd in the number.
//Answer:
//Input : 12345678 - Output : 4
//Input : 987531 - Output : 5
/*#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    //your code here
    int count=0;
    while (x!=0) {
        int digit =x%10;
        if(digit%2 == 1)
            count++;
      x=x/10;
    }
    printf("Result: %d", count);

}*/
//Question 22: Write a program get number from user 
//print the total number of two-digit odd numbers in the number.
//Answer: 
//Input: 12345678 - Output: 3
//Input: 987531 - Output: 4
/*#include<stdio.h>
int main()
{
    int x,num,c=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    while (x!=0){
        num = x%100;
        if((num >= 10) && ((num%2) == 1)){
            c++;   
        }
    x=x/10;
    }
  printf("Count of Two digit Odd numbers: %d",c);  
  
}
*/
//Question 23: Write a program get number from user print the total number of single-
//digit perfect square numbers in the number.
//Answer: 
//Input: 123456789 - Output: 3
//Input: 987531 - Output: 2
/*#include<stdio.h>

int main()
{
    int x,temp,c=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    while (x>0) {
        temp=x%10;
        if(temp==0|| temp==1 || temp==4 || temp==9) {
            c++;
        }
        x=x/10;
    }
    printf("Total count of single digit perfect square numbers: %d",c);
}
*/
//Question 24: Write a program get number from user 
//print the total number of two-digit 
//perfect square numbers in the number.
//Answer: 
//Input: 163496481 - Output: 4
//Input: 364925 - Output: 4
/*#include<stdio.h>
//#include<math.h>
int main()
{
    int x,num,c=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    while (x>0) {
        num=x%100;
        if(num>=16 && num<=81) {
            //int sqrtnum = (int)sqrt(num);
            //if(sqrtnum*sqrtnum == num){
            if(num ==16 || num == 25 ||num ==36|| num == 49 ||num == 64 || num == 81){
            c++;
            }
        }
        x=x/10;
    }
    printf("Total count of Two digit perfect square numbers: %d",c);
}*/
//Question 25: Write a loop program to print the two-digit even numbers, who’s sum of digits are 6.
//Answer:
//24
//42
//60
/*#include<stdio.h>
int main ()
{
    int x;
// Your Code here
    x=11;
loop:
    if(x < 100)
    {
// Your code here
        int check_even=x%2;
        int sum,ones,tens;
        ones=x%10;
        tens=x/10;
        sum=ones+tens;
        if(check_even == 0) {
            if(sum == 6) {
                printf("%d\n",x);
            }
        }
        x++;
        goto loop;
    }
}*/
//Question 26: Write a program to print biggest 4-digit number 
//which is divisible by 7 and 9.
/*
#include <stdio.h>
int main() {
    int max_num = 0;
    for (int i = 9999; i >= 1000; i--) {
        if (i % 7 == 0 && i % 9 == 0) {
            max_num = i;
            break;
        }
    }
    printf("Biggest 4-digit number divisible by 7 and 9: %d\n", max_num);
    return 0;
}*/
// Question 27: Write a program to print the total count of numbers
// which are less than 100000 and whose sum of digits is 14.
/*#include <stdio.h>
int  main()
{
    int count = 0;
    for(int i = 0; i < 100000; i++)
    {
        int sum = 0;
        int temp = i;
        while(temp != 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if(sum == 14)
        {
            count++;
        }
    }
    printf("The total count of numbers which are less than 100000 and whose sum of digits is 14 is %d\n", count);
    return 0;
}*/
//Question 28: Write a program to get two numbers from user and 
//print the LCM of those numbers.
/*#include<stdio.h>
int main()
{
    int num1, num2,temp,lcm;
    printf("Enter two numbers: ");
    scanf("%d    %d",&num1,&num2);
    int a=num1;
    int b=num2;
    while (b!=0){
    temp=b;
    b=a%b;
    a=temp;}
    lcm=(num1*num2)/a;
    printf("LCM of %d and %d is %d",&num1,&num2,&lcm);
}*/
//Question29: Write a program to get three numbers from user and print the LCM of 
//those numbers.
/*#include<stdio.h>
int main()
{
    int num1, num2,num3,temp,lcm;
    printf("Enter two numbers: ");
    scanf("%d    %d",&num1,&num2);
    int a=num1;
    int b=num2;
    while (b!=0){
    temp=b;
    b=a%b;
    a=temp;}
    int gcd1=a;
    a=gcd1;
    b=num3;
    while (b!=0){
    temp=b;
    b=a%b;
    a=temp;}
    int gcd2=a;
    lcm=(num1*num2*num3)/gcd2;
    printf("LCM of %d and %d is %d",&num1,&num2,&lcm);
}
*/
//Question 30: Write a program to get two numbers from user and print the HCF of 
//those numbers.
#include<stdio.h>
int main()
{
    int num1, num2,temp,hcf;
    printf("Enter two numbers: ");
    scanf("%d    %d",&num1,&num2);
    int a=num1;
    int b=num2;
    while (b!=0){
    temp=b;
    b=a%b;
    a=temp;}
    hcf=a;
    printf("HCF of %d and %d is %d",&num1,&num2,&hcf);
}
