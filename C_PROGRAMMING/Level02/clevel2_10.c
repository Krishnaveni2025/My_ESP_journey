//Question: Write loop program to print the sum of two-digit odd numbers whose ten's digit is 7.
//Answer: 375
/*#include<stdio.h>
int main()
{
    int x;
    //Your Code Here
    x = 10;
    int tens,sum =0;
    loop:if(x<100)
    {
        //Your Code Here
        tens = x/10;
        if((x%2 == 1) &&(tens == 7)){
            sum = sum + x;
            x=x+1;
            goto loop;
        }
        else{
            x = x+1;
            goto loop;
        }
    }
    //Your code Here
    printf("%d",sum);

}
*/
/*Using Functions*/
#include<stdio.h>
int oddnumtensIs7(int begin , int end);//Function Declaration
int main()
{
    oddnumtensIs7(10,100);//Function Calling
    return 0 ;
}
int oddnumtensIs7(int begin, int end)//Function Defination
{
    int num, tens, sum;
    sum =0;
    for(num = begin; num<=end;num++)
    {
        tens = num/10;
        if((num%2 != 0)&&(tens == 7))
        {
            sum = sum + num;
        }
    }
    printf("%d",sum);
}