//Question: Write a program to get a number from user and if the last digit of the 
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
/*Using Function*/
#include<stdio.h>
int check_even_odd(int x); //Function Declaration
int main ()
{
    int x, result;
    printf("Enter a number: ");
    scanf("%d",&x);      //x=675
    result = check_even_odd(x); //Calling Function
    printf("Result = %d",result);
    return 0;
}
int check_even_odd(int x)//Function Defination
{
    int first_digit,num,mul=1;
    num=x;    //num=675
    first_digit=x%10;    //first_digit=5
    while(num>9) {    //    T     T            F
        num =num/10;    // 67     6
        mul=mul*10;    //  10     100
    }
    if(first_digit%2  ==  0) {    //F
        return x;
    }
    else {
        x=x-mul;            //675-100=575 subtracting 1 from MSB or Last Digit
        return x;
    }
}