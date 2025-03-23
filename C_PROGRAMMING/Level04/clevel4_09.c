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
/*------------------Using Functions----------------------------*/
#include<stdio.h>
int sum_of_2d(int no);//Function Declaration
int main()//Main Function
{
    int x,result;
    printf("Enter a TWO digit Number : "); 
    scanf("%d",&x); 
    result = sum_of_2d(x);//Calling Function
    printf("The sum of the digits of entered number is %d\n",result);
    return 0 ; 
}
int sum_of_2d(int no)//Function Defination
{
    int sum ;
    sum = (no/10)+(no%10);
    return sum;
}
