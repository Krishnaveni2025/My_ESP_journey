/* these are the c programming level 01 problems total those I have solved  under the guidence of Mr. Balajee Seshadri . */
//Question 01: Get a number from user and add 2 to that number and print the result.
//Example: Input :45 Output 47. Input:56789 Output:56791
/*
#include<stdio.h>
int main ()
{
int x,y;
printf("Enter Number : ");
scanf("%d",&x);
 // Your Code Here
 y=x+2;
printf("Result = %d",y);
}*/
//Question 02: Get a number from user and subtract 5 to that number and print the result.
//Example: Input :45 Output 40. Input:56789 Output:56784
/*#include<stdio.h>
int main()
{
     int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    y = x-5;
    printf("Result = %d",y);
}*///Question 03 : Get a number from user and divide by the number by 6 and print the quotient. 
//Example: Input: 45 Output 7. Input: 143 Output: 23
/*#include<stdio.h>
int main()
{
     int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    y = x/6;
    printf("Result = %d",y);
}*/
//Question 04: Get a number from user and multiply 3 to that number and print the result.
//Example: Input: 45 Output 135. Input: 1200 Output: 3600
/*#include<stdio.h>
int main()
{
     int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    y = x*3;
    printf("Result = %d",y);
}*/
//Question 05: Get a number from user and divide by the number by 8 and print the remainder. 
//Example: Input: 45 Output 5. Input: 143 Output: 7
/*#include<stdio.h>
int main()
{
     int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    y = x%8;
    printf("Result = %d",y);
}*/
//Question 06: Get a two-digit number from user and print the one’s digit.
//Example: Input: 45 Output 5. Input: 56 Output: 6
/*#include<stdio.h>
int main()
{
     int x,y;
    printf("Enter a Two digit number: ");
    scanf("%d",&x);
    y = x%10;
    printf("Result = %d",y);
}*///Question 07: Get a two-digit number from user and print the ten’s digit.
//Example: Input: 45 Output 4. Input: 56 Output: 5
/*
#include<stdio.h>
int main()
{
     int x,y;
    printf("Enter a Two digit number: ");
    scanf("%d",&x);
    y = x/10;
    printf("Result = %d",y);
}
*/
//Question 08: Get a two-digit number from user and print the ten’s digit.
//Example: Input: 45 Output 4. Input: 56 Output: 5
/*
#include<stdio.h>
int main()
{
     int x,y;
    printf("Enter a Two digit number: ");
    scanf("%d",&x);
    y = x/10;
    printf("Result = %d",y);
}*/
//Question 09: Get a three-digit number from user and print the hundred’s digit.
//Example: Input: 456 Output 4. Input: 569 Output: 5
/*
#include<stdio.h>
int main()
{
     int x,y;
    printf("Enter a Three digit number: ");
    scanf("%d",&x);
    y = x/100;
    printf("Result = %d",y);
}
*/
//Question 10: Get a three-digit number from user and print the ten’s digit.
//Example: Input: 456 Output 5. Input: 569 Output: 6
/*
#include<stdio.h>
int main()
{
     int x,y;
    printf("Enter a Three digit number: ");
    scanf("%d",&x);
    y = (x%100)/10;
    printf("Result = %d",y);
}*/
//Question 11: Get a two-digit number from user and print sum the digits.
//Example: Input: 56 Output 11. Input: 69 Output: 15
/*
#include<stdio.h>
int main()
{
     int x,y;
    printf("Enter a TWO digit number: ");
    scanf("%d",&x);
    y = (x/10)+(x%10);
    printf("Result = %d",y);
}*/
//Question 12: Get a three-digit number from user and print sum the digits.
//Example: Input: 562 Output 13. Input: 469 Output: 19
/*
#include<stdio.h>
int main()
{
     int x,y;
    printf("Enter a THREE digit number: ");
    scanf("%d",&x);
    y = (x/100)+((x%100)/10)+(x%10);
    printf("Result = %d",y);
}*/
//Question 13: Get a two-digit number from user and print the reverse of the number.
//Example: Input: 56 Output 65. Input: 59 Output: 95
/*
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a TWO digit number: ");
    scanf("%d",&x);
    int result = (((x%10)*10)+(x/10));
    printf("Result = %d", result);
}*/
//Question 14: Get a three-digit number from user and print the reverse of the number.
//Example: Input: 561 Output 165. Input: 859 Output: 958
/*
#include<stdio.h>
int main()
{
    int x, result;
    printf("Enter a Three digit number: ");
    scanf("%d",&x);
    result = ((x%10)*100)+(((x%100)/10)*10)+(x/100);
    printf("Result = %d", result);
}*/
//Question 15: Get a four-digit number from user 
//and only reverse the first two digits of the number, then print the number.
//Example: Input: 9561 Output 9516. Input: 3859 Output: 3895
/*#include<stdio.h>
int main()
{
    int x, result ;
    printf("Enter a Four digit number: ");
    scanf("%d",&x);
    result = ((x/1000)*1000)+(((x/100)%10)*100)+((x%10)*10)+((x%100)/10);
    printf("Result = %d", result);
}*/
//Question 16: Get a four-digit number from user 
//and only reverse the last two digits of the number, then print the number.
//Example: Input: 9561 Output 5961. Input: 3859 Output: 8359
/*#include<stdio.h>
int main()
{
    int x, result ;
    printf("Enter a Four digit number: ");
    scanf("%d",&x);
   // thousands = x/1000;
   // hundreds =  ((x/100)%10);
   // tens = ((x%100)/10);
   // ones = x%10;
    result = (((x/100)%10)*1000)+((x/1000)*100)+(((x%100)/10)*10)+(x%10);
    printf("Result = %d", result);
}*/
//Question 17: Get a two-digit number from user and make the one’s digit as 0,then print it.
//Example: Input: 95 Output 90. Input: 18 Output: 10
/*#include<stdio.h>
int main()
{
int x,y;
printf("Enter a TWO digit number: ");
scanf("%d",&x);
y=(x/10)*10;
printf("Result = %d",y);
}*/
//Question 18: Get a two-digit number from user and make the ten’s digit 1,then print it.
//Example: Input: 95 Output 15. Input: 82 Output: 12
/*#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a TWO digit number: ");
    scanf("%d",&x);
    y = ((x%10)+10); 
    printf("Result = %d",y);
    
}*/
//Question 19: Get a three-digit number from user and make the one’s digit as 2,then print it.
//Example: Input: 695 Output 692. Input: 182 Output: 182
/*#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a THREE digit number: ");
    scanf("%d",&x);
    y= ((x/10)*10)+2;
    printf("Result = %d",y);
} */
//Question 20: Get a three-digit number from user and make the ten’s digit as 0,then print it.
//Example: Input: 695 Output 605. Input: 182 Output: 102
/*#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter a THREE digit number: ");
  scanf("%d",&x);
  y=((x/100)*100)+(x%10);
  printf("Result = %d",y);
}*/
//Question 21: Get a number from user and subtract 5 from that number 
//if the number is odd, then print the result. 
//Do not use “if”.
//Example: Input: 695 Output 690. Input: 182 Output: 182
/*#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    y=x-5;
    while (x%2 !=0) //odd number
    {
    printf("%d",y);
    break;
    }
    while (x%2 ==0){
    printf("%d",x);
    }
}
*/
//Question 22: Get a number from user and subtract 5 from that number 
//if the number’s ten’s position digit is odd, then print the result. 
//Do not use “if”.
//Example: Input: 685 Output 685. Input: 89172 Output: 89167
/*#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter a number: ");
    scanf("%d",&x);
    y = (x/10)%10;//tens digit 
    z = x-5;
    while(y%2 !=0)//odd number 
    {
    printf("Result = %d",z);
    break ;
    }
    while(y%2==0){
    printf("Result = %d",x);
    }
    
}*/
//Question 23: Get a two digit number from user and subtract 5 from that number
// if the sum of the digits of the number is odd, then print the result.
 // Do not use“if”.
//Example: Input: 95 Output 95. Input: 72 Output: 67
/*#include<stdio.h>
int main()
{
    int x, sum, result;
    printf("Enter a Two digit number: ");
    scanf("%d",&x);
    sum= (x/10)+(x%10);
    result= x-5 ;
    while(sum%2 == 1){
    printf("%d", result);
    break;
    }
    while (sum%2==0){
    printf("%d",x);
    break;
    }
}
*/
//Question 24: Get two 2-digit numbers from user. If the sum of the numbers is less than 100, then 
//print the sum, otherwise print the difference. 
//Example: Input: 56 78 – Output: 22
//Input: 14 65 - Output: 79
/*
#include<stdio.h>
int main ()
{
    int x1,x2,y,diff;
    printf ("Enter First Number : ");
    scanf("%d",&x1);
    printf ("Enter Second Number : ");
    scanf("%d",&x2);
// Your Code Here
    y = x1 + x2;
    while(y<100) {
        printf ("Result = %d",y);
        break;
    }
    while (y>=100) {
    if(x1>x2){
        diff = x1-x2;
        }
        else{
        diff = x2-x1;
        }
        printf("%d",diff);
        break;
    }
}*/
//Question 25: Get a four-digit number from user and subtract 5 from that number
// if ten’s digit position and 100’s digit position is same, then print the result.
//Do not use “if”.
//Example: Input: 7595 Output 7595. Input: 3772 Output: 3767
/*#include<stdio.h>
int main()
{
    int x,tens,hundreds, Result ;
    printf("Enter a 4 digit number: ");
    scanf("%d",&x);
    tens = (x/10)%10;
    hundreds = (x%1000)/100;
    Result = x-5;
    while (tens == hundreds){
    printf("Result = %d", Result);
    break;
    }
    while (tens != hundreds){
    printf("Result = %d",x);
    break;
    }
    
}*/
//Question 26: Get two 2-digit numbers from user. If the sum of the numbers is less than 100, then 
//print the sum, otherwise print the difference. 
//Example: Input: 56 78 – Output: 22
//Input: 14 65 - Output: 79
/*
#include<stdio.h>
int main ()
{
    int x1,x2,y,diff;
    printf ("Enter First Number : ");
    scanf("%d",&x1);
    printf ("Enter Second Number : ");
    scanf("%d",&x2);
// Your Code Here
    y = x1 + x2;
    while(y<100) {
        printf ("Result = %d",y);
        break;
    }
    while (y>=100) {
    if(x1>x2){
        diff = x1-x2;
        }
        else{
        diff = x2-x1;
        }
        printf("%d",diff);
        break;
    }
}*/
//Question 26: Get a two-digit number from user. 
//If the sum of the digits is 10 then print “Success”
// otherwise print “Failure”
//Example: Input: 56 - Output Failure. Input: 37 - Output: Success.
/*#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a Two digit number: ");
    scanf("%d",&x);
    y=(x/10)+(x%10);
    if(y==10){
    printf("Success");
    }
    else{
    printf("Failure");
    }
}*/

 //Question 27: Get a three-digit number from user. 
 //If the sum of the digits is 10 then print “Success”,
 // otherwise print “Failure”.
//Example: Input: 956 - Output Failure. Input: 127 - Output: Success.
/*#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a THREE digit number: ");
    scanf("%d",&x);
    y=((x/10)%10)+(x/100)+(x%10);
    if(y==10){
    printf("Success");
    }
    else{
    printf("Failure");
    }
}*/
//Question 28: Get a three-digit number from user. 
//If the sum of the one’s digit and hundred’s digit is less than 10, 
//then print “Success”, otherwise print “Failure”.
//Example: Input: 569 - Output Failure. Input: 316 - Output: Success.
/*#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a THREE digit number: ");
    scanf("%d",&x);
    y=(x/100)+(x%10);
    if(y<10){
    printf("Success");
    }
    else{
    printf("Failure");
    }
}*/
//Question 29: Get a four-digit number from user.
//If the sum of the ten’s digit and 
//hundred’s digit is greater than 10,
//then print “Success”, otherwise print “Failure”.
//Example: Input: 7529 – Output: Failure. Input: 9386 - Output: Success.
/*#include<stdio.h>
int main()
{
   int x,y;
    printf("Enter a 4 digit number: ");
    scanf("%d",&x);
    y=((x/100)%10)+((x%100)/10);
    if(y>10){
    printf("Success");
    }
    else{
    printf("Failure");
    }
}*/
//Question 30: Get a four-digit number from user. 
//If the sum of the ten’s digit and hundred’s digit is equal to 10, 
//and one of the digits is more than 7
//then print “Success”, otherwise print “Failure”.
//Example: Input: 4649 – Output: Failure. Input: 9286 - Output: Success.
/*#include<stdio.h>
int main()
{
    int x,y,tens, hundreds;
    printf("Enter a 4 digit number: ");
    scanf("%d",&x);
    tens=(x%100)/10;
    hundreds = (x/100)%10;
    y = tens + hundreds ;
    if(y==10)  {
        if(tens || hundreds > 7) {
            printf("Success");
        }
    } 
   else {
         printf("Failure");
     }

}*/
//Question 31: Get a three-digit number from user. 
//If the sum of the digits is less than 10, then print
//the sum, otherwise add the digits of the sum. If the sum of the digits is less than 10, 
//then print the sum, otherwise add the digits of the sum, and print the sum.
//Note: The result should be always single digit only.
//Example: Input: 123 – Output: 6
//Input: 149 - Output: 5 (149:1+4+9 = 14: 1+4 = 5)
//Input: 991 - Output: 1 (991: 9+9+1 = 19: 1+9 = 10: 1+0 = 1)
/*#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a THREE digit number: ");
    scanf("%d",&x);
    y=(x/100)+((x%100)/10)+(x%10);
    while (y<10){
    printf("sum = %d",y);
    break;
    }
    while (y>=10){
    y=(y/10)+(y%10);
    if(y>=10)
    y=(y/10)+(y%10);
    printf("sum = %d",y);
    break;
    }
}*/
//Question 32: Get two 2-digit numbers from user. If the sum of the numbers is less than 100, then 
//print the sum, otherwise print the difference. 
//Example: Input: 56 78 – Output: 22
//Input: 14 65 - Output: 79

#include<stdio.h>
int main ()
{
    int x1,x2,y,diff;
    printf ("Enter First Number : ");
    scanf("%d",&x1);
    printf ("Enter Second Number : ");
    scanf("%d",&x2);
// Your Code Here
    y = x1 + x2;
    while(y<100) {
        printf ("Result = %d",y);
        break;
    }
    while (y>=100) {
    if(x1>x2){
        diff = x1-x2;
        }
        else{
        diff = x2-x1;
        }
        printf("%d",diff);
        break;
    }
}




