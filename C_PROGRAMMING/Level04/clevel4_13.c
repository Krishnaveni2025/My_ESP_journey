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
/*------------Using Functions-------------------------------------*/
#include<stdio.h>
int sum_of_all(int number);//Function Declaration
int main()//Main Function
{
    int x,y;
    printf("Enter a Number: ");
    scanf("%d",&x);//123456
    y = sum_of_all(x);//Calling Function
    printf("The  sum of all digits of entered number is %d\n",y);//21
    return 0;
}
int sum_of_all(int number)//Function Defination
{
    int sum = 0;
    while (number!= 0 )
    {
        /* code */
        int digit = number%10;
        sum = sum + digit;
        number = number/10;
    }
    return sum;
}