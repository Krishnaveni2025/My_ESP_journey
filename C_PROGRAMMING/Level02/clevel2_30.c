//Question: Write a program to get two numbers from user and print the HCF of 
//those numbers.
/*#include<stdio.h>
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
}*/
/*Using Function*/
#include <stdio.h>
int calculateHCF(int num1, int num2);//Function Declaration
int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("HCF of %d and %d is: %d\n", num1, num2, calculateHCF(num1, num2));//Calling Function

    return 0;
}
// Defination of Function to calculate HCF
int calculateHCF(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}