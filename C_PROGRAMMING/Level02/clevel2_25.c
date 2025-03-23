//Question: Write a loop program to print the two-digit even numbers, who’s sum of digits are 6.
//Answer:
//24
//42
//60
/*#include<stdio.h>
int main ()
{
    int x;
// Your Code here
    x=11;
loop:
    if(x < 100)
    {
// Your code here
        int check_even=x%2;
        int sum,ones,tens;
        ones=x%10;
        tens=x/10;
        sum=ones+tens;
        if(check_even == 0) {
            if(sum == 6) {
                printf("%d\n",x);
            }
        }
        x++;
        goto loop;
    }
}*/
/*Using Function*/
#include<stdio.h>
/*Functions Declarations*/
int is_even(int no1);//Function 1 to check Even or Not
int is_sum6(int no2);//Function 2 to check whether sum is 6 or not
int main()
{
    int x;
    //YOur Code Here
    x = 11;
    int result1,result2;
    loop:
    if(x<100)
    {
        result1 = is_even(x);//Calling Function 1
        if(result1 == 1)
        {
            result2 = is_sum6(x);//Calling Function 2
            if(result2 == 1)
            {
                printf("%d\n",x);
            }
        }
        x = x+1;
        goto loop;
    }
    return 0;
}
int is_even(int no1)//Function 1 Defination
{
    int  result;
    if(no1%2 == 0)
    {
        result = 1;
    }
    return result;
}
int is_sum6(int no2)//Function 2 Defination
{
    int sum,result;
    sum = (no2%10)+(no2/10);
    if(sum == 6)
    {
        result = 1;
    }
    return result;
}
