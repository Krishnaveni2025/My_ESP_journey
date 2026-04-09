/* C LEVEL 11 Problem 04
                 Use Pointers
   Question: 
                 Write a function to find the two digit odd numbers whose sum of digits is 7. 
                 Print the result in the main function
   Function Name: 
                 find_2digit_odd_sum7
   Answer: 
                 25
                 43
                 61
*/
#include<stdio.h>
int find_2digit_odd_sum7(int *number);
int main()
{
    for(int i = 25; i<62; i++)
    {
        if(find_2digit_odd_sum7(&i))
                printf("%d\n",i);
    }
}
int find_2digit_odd_sum7(int *number)
{
    if((*number)%2)
    {
        if(((*number)%10)+((*number)/10)==7)
                return 1;
    }
    return 0;
}
