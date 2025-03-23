//Question: Write loop program to print the sum of two-digit numbers whose one's digit is 5.
//Answer: 495
/*#include<stdio.h>
int main()
{
    int x;
    //Your Code Here
    x = 10;
    int ones,sum =0;
    loop:if(x<100)
    {
        //Your Code Here
        ones = x%10;
        if(ones == 5){
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
int onesIs5(int begin , int end);//Function Declaration
int main()
{
    onesIs5(10,100);//Function Calling
    return 0 ;
}
int onesIs5(int begin, int end)//Function Defination
{
    int num, ones, sum;
    sum =0;
    for(num = begin; num<=end;num++)
    {
        ones = num%10;
        if(ones == 5)
        {
            sum = sum + num;
        }
    }
    printf("%d",sum);
}