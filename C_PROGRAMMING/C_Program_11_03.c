/* C LEVEL 11 Problem 03
  Use Pointers
Question: Write a loop program to print 1 to 5 one by one.
Write a function and print the result in the main function
Function Name: arrange_ascend
Answer:
1
2
3
4
5
*/
int print_1to5(int *p);
#include<stdio.h>
int main()
{
    int number;
    number = 1;
    while(number<6)
    {
        if(print_1to5(&number))
            printf("%d\n",number);
        number++;
    }
}
int print_1to5(int *p)
{
    if(*p<6)
         return 1;
}
