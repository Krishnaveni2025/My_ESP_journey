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
/*------------------Using FUnction--------------------------------*/
#include<stdio.h>
int sum_of_4d(int no);//Function Declaration
int main()//Main function
{
    int x,result;
    printf("Enter a FOUR digit Number : "); 
    scanf("%d",&x);
    result = sum_of_4d(x);//Calling Function
    printf("The sum of the digits of entered number is %d\n",result);
    return 0; 
}
int sum_of_4d(int no) //Function Defination
{
    int sum ;
    sum = (no%10)+((no%100)/10)+((no%1000)/100)+(no/1000);
    return sum;
}
