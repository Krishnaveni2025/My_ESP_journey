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
/*---------------Using Function-------------------------- */
#include<stdio.h>
int reverse_3d(int no);//Funciton Declaration
int main()//Main Function
{
    int x,result;
    printf("Enter a Three-Digit Number: ");
    scanf("%d",&x);
    result = reverse_3d(x);//Calling Funciton
    printf("The reverse of the entered number is %d\n",result);
    return 0;
}
int reverse_3d(int no)//Function Defination
{
    int reversed;
    reversed = ((no%10)*100)+(((no/10)%10)*10)+(no/100);
    return reversed;
}
 
