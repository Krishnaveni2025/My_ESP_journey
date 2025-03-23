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
/*------------------Using Functions-----------------------------*/
#include<stdio.h>
int sum_of_3d(int no);//Function Declaration
int main()
{
    int x , result;
    printf("Enter a THREE digit Number : "); 
    scanf("%d",&x); 
    result = sum_of_3d(x); // Calling Function
    printf("The sum of the digits of entered number is %d\n",result); 
    return 0;
}
int sum_of_3d(int no)//Function Defination
{
    int sum ;
    sum = (no%10)+((no/10)%10)+(no/100);
    return sum;
}

