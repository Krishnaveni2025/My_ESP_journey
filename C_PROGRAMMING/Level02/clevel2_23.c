//Question: Write a program get number from user print the total number of single-
//digit perfect square numbers in the number.
//Answer: 
//Input: 123456789 - Output: 3
//Input: 987531 - Output: 2
/*#include<stdio.h>

int main()
{
    int x,temp,c=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    while (x>0) {
        temp=x%10;
        if(temp==0|| temp==1 || temp==4 || temp==9) {
            c++;
        }
        x=x/10;
    }
    printf("Total count of single digit perfect square numbers: %d",c);
}
*/
/*Using Function*/
#include<stdio.h>
int count_single_digit_psq(int no);//Function Declaration
int main()
{
    int x;
    printf("Enter a Number: ");
    scanf("%d",&x);
    //Your Code Here
    int result;
    result = count_single_digit_psq(x);//Calling Function
    printf("Result: %d",result);
    return 0;
}
int count_single_digit_psq(int no)//Function Defination
{
    int count,digit;
    count = 0;
    while(no != 0)
    {
        digit = no%10;
        if(digit == 0 || digit == 1 || digit == 4 || digit == 9)
        {
            count = count +1;
        }
        no = no/10;
    }
    return count;
}