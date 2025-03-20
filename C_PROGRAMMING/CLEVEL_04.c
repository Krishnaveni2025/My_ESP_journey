//Question:  Get a Two-digit number from user and print the digit in “Ones” position 
//Example:  
//User Enters “78”   
//Answer - 8
/*#include<stdio.h> 
int main () 
{ 
int x, y; 
printf ("Enter a TWO-digit Number: "); 
scanf ("%d", &x); 
// Your Program Here
y = x%10; 
printf ("The digit in Ones position is %d\n",y); 
}*/
//Question:  Get a Two digit number from user and print the digit in “Tens” position 
//Example: 
//User Enters “78” 
//Answer - 7  
/*#include<stdio.h> 
int main () 
{ 
int x, y; 
printf("Enter a TWO digit Number : "); 
scanf("%d",&x); 
// Your Program Here 
y = x/10;
printf("The digit in Tens position is %d\n",y); 
} 
*/
//Question:  Get a Three digit number from user and 
//print the digit in “Ones” position 
//Example: 
//User Enters “738” 
//Answer - 8 
/*#include<stdio.h> 
int main() 
{ 
int x,y; 
printf("Enter a THREE digit Number : "); 
scanf("%d",&x); 
// Your Program Here 
y = x%10;
printf("The digit in Ones position is %d\n",y); 
} */
//Question:  Get a Three digit number from user and 
//print the digit in “Tens” position 
//Example: 
//User Enters “738” 
//Answer - 3 
/*#include<stdio.h> 
int main() 
{ 
int x,y; 
printf("Enter a THREE digit Number : "); 
scanf("%d",&x); 
// Your Program Here 
y = ((x/10)%10);
printf("The digit in Tens position is %d\n",y); 
} 
*/
//Question:  Get a Three digit number from user and
// print the digit in “Hundreds”position 
//Example: 
//User Enters “738” 
//Answer - 7 
/*
#include<stdio.h> 
int main() 
{ 
int x,y; 
printf("Enter a THREE digit Number : "); 
scanf("%d",&x); 
// Your Program Here 
y = x/100;
printf("The digit in Hundreds position is %d\n",y); 
} */
//Question:  Get a Two digit number from the user and 
//print the reverse of it. 
//Example: 
//User Enters “73” 
//Answer - 37 
/*#include<stdio.h> 
int main() 
{ 
int x,y; 
printf("Enter a TWO digit Number : "); 
scanf("%d",&x); 
// Your Program Here 
y = ((x%10)*10)+(x/10);
printf("The reverse of the entered number is %d\n",y); 
} */
//Question:  Get a Three digit number from the user and 
//print the reverse of it. 
//Example: 
//User Enters “738”
/*#include<stdio.h> 
int main() 
{ 
int x,y; 
printf("Enter a THREE digit Number : "); 
scanf("%d",&x); 
// Your Program Here 
y = ((x%10)*100)+(((x/10)%10)*10)+(x/100);
printf("The reverse of the entered number is %d\n",y); 
} 
*/
//Question:  Get a Four digit number from the user and 
//print the reverse of it. 
//Example: 
//User Enters “6738” 
/*#include<stdio.h> 
int main() 
{ 
int x,y; 
printf("Enter a FOUR digit Number : "); 
scanf("%d",&x); 
// Your Program Here 
y = ((x%10)*1000)+(((x%100)/10)*100)+(((x%1000)/100)*10)+(x/1000);
printf("The reverse of the entered number is %d\n",y); 
} */
//Question:  Get a Two digit number from the user and 
//print the sum of all digits. 
//Example: 
//User Enters “78”
/*#include<stdio.h> 
int main() 
{ 
int x,y; 
printf("Enter a TWO digit Number : "); 
scanf("%d",&x); 
// Your Program Here 
y = ((x/10)+(x%10));
printf("The sum of the digits of entered number is %d\n",y); 
} */
//Question:  Get a Three digit number from the user and 
//print the sum of all digits. 
//Example: 
//User Enters “738” 
//Answer - 18 
/*
#include<stdio.h> 
int main() 
{ 
int x,y; 
printf("Enter a THREE digit Number : "); 
scanf("%d",&x); 
// Your Program Here 
y = (x%10)+((x/10)%10)+(x/100);
printf("The sum of the digits of entered number is %d\n",y); 
} */
//Question:  Get a Four digit number from the user and 
//print the sum of all digits. 
//Example: 
//User Enters “7638” 
//Answer - 24 
/*#include<stdio.h> 
int main() 
{ 
int x,y; 
printf("Enter a FOUR digit Number : "); 
scanf("%d",&x); 
// Your Program Here 
y = (x%10)+((x%100)/10)+((x%1000)/100)+(x/1000);
printf("The sum of the digits of entered number is %d\n",y); 
} */
//Question:  Get a number from the user and 
//print the reverse of it. 
//Example: 
//User Enters “123456” 
//Answer - 654321
/*#include<stdio.h> 
int main() 
{ 
int x,y; 
printf("Enter the Number : "); 
scanf("%d",&x); 
// Your Program Here 
y = 0;
int digit;
while(x!=0)
{
    digit = x%10;
    y = ((y*10)+digit);
    x = x/10;
}
printf("The reverse of the entered number is %d\n",y); 
} */
//Question: Get a number from the user and print the sum of all its digits.
//Example: User Enters "123456" answer: "21"
/*#include<stdio.h>
int main()
{
int x,y;
printf("Enter a Number : ");
scanf("%d",&x);    //123456
// Your Program Here
 y=0;    
while(x!=0){        //T    T        T             T             T         T                 F
int digit = x%10; //6     5         4            3            2           1
y=y+digit ;         //6    11        15            18         20        22
x=x/10;           //12345 1234     123        12          1             0
}

printf("The  sum of all digits of entered number is %d\n",y);//21
}*/  
//Question: Write a program to print the total number of single digit odd numbers
//Answer - 5
/*#include<stdio.h>
int main()
{
int x=1;
int c=0;
while(x<10){
    if(x%2!=0)
         c++;
         x++;
    }
    printf("Total number of single digit Odd numbers are: %d",c);
 }*/
//Question: Write a program to print the total number of Two digit odd numbers
//Answer - 45
/*#include<stdio.h>
int main()
{
int x=10;
int c=0;
while(x<100){
    if(x%2!=0)
         c++;
         x++;
    }
    printf("Total number of Two digit Odd numbers are: %d",c);
 }*
// Question: Write a program to print the total number of Three digit odd numbers
// Answer - 450
/*#include<stdio.h>
int main()
{
int x=100;
int c=0;
while(x<1000){
    if(x%2!=0)
         c++;
         x++;
    }
    printf("Total number of Three digit Odd numbers are: %d",c);
 }*/
//Question: Write a program to print the sum of all single digit odd numbers
//Answer - 25
/*#include<stdio.h>
int main()
{
int x=1;
int sum=0;
while(x<10){
    if(x%2!=0)
         sum = sum+x;
         x++;
    }
    printf("The sum of all single digit Odd numbers are: %d",sum);
 }
*/
//Question: Write a program to print the sum of all Two digit odd numbers
//Answer - 2475
/*#include<stdio.h>
int main()
{
int x=10;
int sum=0;
while(x<100){
    if(x%2!=0)
        sum=sum+x;
        x++;
    }
    printf("The sum of all Two digit Odd numbers are: %d",sum);
 }
 */
//Question: Write a program to print the sum of all Three digit odd numbers
//Answer - 247500
/*#include<stdio.h>
int main()
{
int x=100;
int sum=0;
while(x<1000){
    if(x%2!=0)
        sum=sum+x;
        x++;
    }
    printf("The sum of all Three digit Odd numbers are: %d",sum);
 }*/
//Question: Write a program to print the total number of single digit Prime numbers
//Assume 0 & 1 are not Prime.
//Answer : 4
/*#include<stdio.h>
int main(){
int x,y,c;
c=0;
    for(x=2;x<9;x++){
        int is_prime = 1;
        for(y=2;y*y<=x;y++){
            if(x%y == 0){
                is_prime =0;
                break ; 
            }
        }
        if(is_prime){
        c++;
        }
    }
printf("The total number of single digit prime numbers are: %d",c);
}*/
//Question: Write a program to print the total number of two digit Prime numbers
//Answer : 21
/*#include<stdio.h>
int main(){
int x,y,c;
c=0;
    for(x=10;x<100;x++){
        int is_prime = 1;
        for(y=2;y*y<=x;y++){
            if(x%y == 0){
                is_prime =0;
                break ; 
            }
        }
        if(is_prime){
        c++;
        }
    }
printf("The total number of Two digit prime numbers are: %d",c);
}*/
//Question: Write a program to print the total number of Three digit Prime numbers
//Answer : 143
/*#include<stdio.h>
int main(){
int x,y,c;
c=0;
    for(x=100;x<1000;x++){
        int is_prime = 1;
        for(y=2;y*y<=x;y++){
            if(x%y == 0){
                is_prime =0;
                break ; 
            }
        }
        if(is_prime){
        c++;
        }
    }
printf("The total number of THREE digit prime numbers are: %d",c);
}
*/
// Question: Write a program to print the sum of all single digit Prime numbers
// Assume 0 & 1 are not Prime.
// Answer : 18
/*#include<stdio.h>
int main(){
int x,y,sum;
sum=0;
    for(x=2;x<9;x++){
        int is_prime = 1;
        for(y=2;y*y<=x;y++){
            if(x%y == 0){
                is_prime =0;
                break ;
            }
        }
        if(is_prime){
        sum=sum+x;
        }
    }
printf("The sum of all single digit prime numbers are: %d",sum);
}*/
//Question: Write a program to print the sum of all two digit Prime numbers
//Assume 0 & 1 are not Prime.
//Answer : 1043
/*#include<stdio.h>
int main(){
int x,y,sum;
sum=0;
    for(x=10;x<100;x++){
        int is_prime = 1;
        for(y=2;y*y<=x;y++){
            if(x%y == 0){
                is_prime =0;
                break ; 
            }
        }
        if(is_prime){
        sum=sum+x;
        }
    }
printf("The sum of all Two digit prime numbers are: %d",sum);
}*/
//Question: Write a program to print the sum of all Three digit Prime numbers
//Assume 0 & 1 are not Prime.
//Answer : 75067
/*#include<stdio.h>
int main(){
int x,y,sum;
sum=0;
    for(x=100;x<1000;x++){
        int is_prime = 1;
        for(y=2;y*y<=x;y++){
            if(x%y == 0){
                is_prime =0;
                break ; 
            }
        }
        if(is_prime){
        sum=sum+x;
        }
    }
printf("The sum of all THREE digit prime numbers are: %d",sum);
}*/
//Question: Print the smallest Three digit prime number
//Answer: 101
/*#include <stdio.h>
int main() {
    int x = 100;
    while (1) {
        int is_prime = 1;
        int i;
        for (i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("Smallest three-digit prime number: %d\n", x);
            break;
        }
        x++;
    }
    return 0;
}
*/

//Question: Print the largest Three digit prime number
//Answer: 997
/*#include <stdio.h>
int main() {
    int x = 1000;
    while (1) {
        int is_prime = 1;
        int i;
        for (i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("Largest three-digit prime number: %d\n", x);
            break;
        }
        x--;
    }
    return 0;
}
*/
//Question: Print the Smallest Four digit prime number
//Answer: 1009
/*#include <stdio.h>

int main() {
    int x = 1000;
    while (1) {
        int is_prime = 1;
        int i;
        for (i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("Smallest Four-digit prime number: %d\n", x);
            break;
        }
        x++;
    }
    return 0;
}*/
//Question: Print the Largest Four digit prime number
//Answer: 9973
/*#include <stdio.h>

int main() {
    int x = 10000;
    while (1) {
        int is_prime = 1;
        int i;
        for (i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("Largest four-digit prime number: %d\n", x);
            break;
        }
        x--;
    }
    return 0;
}*/
//Question: Print the Largest eight-digit prime number
//Answer: 99999989
/*#include <stdio.h>

int main() {
    int x = 100000000;
    while (1) {
        int is_prime = 1;
        int i;
        for (i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("Largest eight-digit prime number: %d\n", x);
            break;
        }
        x--;
    }
    return 0;
}*/
//Print the number of zeroes you encounter between the numbers 0 to 1000
/*#include <stdio.h>
int main() {
    int c = 0;
    for (int i = 0; i <= 1000; i++) {
        int x = i;
        while (x != 0) {
            int digit = x% 10;
            if (digit == 0) {
                c++;
            }
            x = x / 10;
        }
    }
    printf("Number of zeroes: %d\n", c);
    return 0;
}*/
