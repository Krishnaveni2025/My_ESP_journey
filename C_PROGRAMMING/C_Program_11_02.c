/* C LEVEL 11 Problem 02
        Use Pointers
   Question: 
        Pass an integer array to a function and 
        increment each array element in the function
*/
#include<stdio.h>
void incementby1(int *a);
int integer[] = { 1, 2, 3, 4, 5};
int size = *(&integer + 1)- integer;
int main()
{
    incementby1(integer);
}
void incementby1(int *a)
{
    for(int i=0; i< size; i++)
    {
        a[i] += 1;
        printf("%d ",a[i]);
    }
}
