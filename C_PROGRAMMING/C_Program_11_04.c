/* C LEVEL 11 Problem 04
  Use Pointers
Question: Write a function to find the two digit odd numbers whose sum of digits is 7. 
Print the result in the main function
Function Name: find_2digit_odd_sum7
Answer: 25,43,61
*/
#include<stdio.h>
int find_2digit_odd_sum7(int *p);
int main()
{
    int number = 10;
    while(number<100)
    {
        if(find_2digit_odd_sum7(&number))
            printf("%d\n",number);
        number++;
    }
}
int find_2digit_odd_sum7(int *p)
{
    if((*p)%2)
    {
        if((((*p)/10)+((*p)%10))==7)
            return 1;
    }
    return 0;
}
