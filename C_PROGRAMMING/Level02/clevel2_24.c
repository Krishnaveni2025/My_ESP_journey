//Question: Write a program get number from user 
//print the total number of two-digit 
//perfect square numbers in the number.
//Answer: 
//Input: 163496481 - Output: 4
//Input: 364925 - Output: 4
/*#include<stdio.h>
//#include<math.h>
int main()
{
    int x,num,c=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    while (x>0) {
        num=x%100;
        if(num>=16 && num<=81) {
            //int sqrtnum = (int)sqrt(num);
            //if(sqrtnum*sqrtnum == num){
            if(num ==16 || num == 25 ||num ==36|| num == 49 ||num == 64 || num == 81){
            c++;
            }
        }
        x=x/10;
    }
    printf("Total count of Two digit perfect square numbers: %d",c);
}*/
#include<stdio.h>
int count_2d_perfectsqn(int number);//Function Declaration
int main()
{
    int x;
    printf("Enter a Number: ");
    scanf("%d",&x);
    //Your Code Here
    int result ;
    result = count_2d_perfectsqn(x);//Calling Function
    printf("Result: %d",result);
    return 0;
}
int count_2d_perfectsqn(int number)//Function Defination
{
    int count2d, twodigit;
    count2d = 0;
    while(number>0)
    {
        twodigit = number%100;
        if((twodigit == 16)||(twodigit == 25)||(twodigit == 36)||(twodigit == 49)||(twodigit == 64)||(twodigit == 81))
        {
            count2d = count2d +1;
        }
        number = number/10;
    }
    return count2d;
}