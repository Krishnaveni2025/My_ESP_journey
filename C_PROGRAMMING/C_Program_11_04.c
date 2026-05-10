/* 
   C LEVEL 11 Problem 04
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
int find_2digit_odd_sum7(int *a);
int main()
{
    int i;
    for(i = 25; i<62; i++)
    {
        if(find_2digit_odd_sum7(&i))
                printf("%d\n",i);
    }
            
    return 0;
}
int find_2digit_odd_sum7(int *i)
{
    if(*i%2)
        {
            if((*i/10)+(*i%10) == 7)
                    return 1;  
        }  
    return 0; 
}
