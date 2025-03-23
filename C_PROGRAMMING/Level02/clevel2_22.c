//Question: Write a program get number from user 
//print the total number of two-digit odd numbers in the number.
//Answer: 
//Input: 12345678 - Output: 3
//Input: 987531 - Output: 4
/*#include<stdio.h>
int main()
{
    int x,num,c=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    while (x!=0){
        num = x%100;
        if((num >= 10) && ((num%2) == 1)){
            c++;   
        }
    x=x/10;
    }
  printf("Count of Two digit Odd numbers: %d",c);  
  
}
*/
/*Using Function*/
#include<stdio.h>
int count_2digit_odd_num(int number);//Function Declaration
int main()
{
    int x;
    printf("Enter a Number: ");
    scanf("%d",&x);
    //your code here
    int result;
    result = count_2digit_odd_num(x);//Calling Function
    printf("Result = %d",result);
    return 0;
}
int count_2digit_odd_num(int number)//Function Defination
{
    int count,num;
    count = 0;
    while(number!=0)
    {
        num = number%100;
        if((num>=10)&&(num%2 == 1))
        {
            count = count+1;
        }
        number = number/10;
    }
    return count;

}