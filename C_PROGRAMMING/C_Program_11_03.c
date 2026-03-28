/* C LEVEL 11 Problem 03
            Use Pointers
  Question: 
            Write a loop program to print 1 to 5 one by one.
            Write a function and print the result in the main function
  Function Name: 
            arrange_ascend
  Answer:
            1
            2
            3
            4
            5
*/
#include<stdio.h>
int arrange_ascend(int *p);
int main()
{
    int number;
    for(number = 1; number<6; number++)
    {
        if(arrange_ascend(&number))
                printf("%d\n",number);   
    }
}
int arrange_ascend(int *p)
{
    if(*p<6)
            return 1;
}
