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
/*------------------------------Using Functions---------------------------------*/
#include<stdio.h>
int reverse_4d(int no);//Function Declaration
int main ()//Main Function
{
    int x,result;
    printf("Enter a Four Digit Number: ");
    scanf("%d",&x);
    result = reverse_4d(x);//Calling Function
    printf("The reverse of the entered number is %d\n",result);
    return 0; 
}
int reverse_4d(int no)//Function Defination
{
    int reversed;
    reversed =  ((no%10)*1000)+(((no%100)/10)*100)+(((no%1000)/100)*10)+(no/1000);
    return reversed;
}

