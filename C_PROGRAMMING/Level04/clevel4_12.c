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
/*---------------------------------Using Function------------------------------------*/
#include <stdio.h>
//Declaration of Function
int get_number();// Function to get an integer from the user

int reverse_number(int num);// Function to reverse a number
// Main function
int main() {
    int number = get_number();
    int reversed_number = reverse_number(number);
    printf("The reverse of the entered number is %d\n", reversed_number);
    return 0;
}
// defination of Function to reverse a number
int reverse_number(int num) {
    int reversed = 0;
    int digit;
    while (num != 0) {
        digit = num % 10;
        reversed = (reversed * 10) + digit;
        num = num / 10;
    }
    return reversed;
}

//Defination of Function to get an integer from the user
int get_number() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    return num;
}


