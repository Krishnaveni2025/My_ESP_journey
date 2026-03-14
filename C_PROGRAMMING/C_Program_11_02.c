/* C LEVEL 11 Problem 02
  Use Pointers
Question: Pass an integer array to a function and increment each array element in the function
*/
/* C LEVEL 11 Problem 02
  Use Pointers
Question: Pass an integer array to a function and increment each array element in the function
*/
#include<stdio.h>
void inc_array_element(int arr[],int n);
int main()
{
    int size, array[size], i;
    printf("Enter Array Size: ");
    scanf("%d",&size);
    for(i=0; i<size; i++)
    {
        printf("Enter %d Element: ",i);
        scanf("%d",&array[i]);
    }
    inc_array_element(array,size);
    printf("After Increment:\n");
    for(i=0; i<size; i++)
    {
        printf("%d ",array[i]);
    }
}
void inc_array_element(int arr[], int n)
{
    int *element,i;
    for(i=0;i<n;i++)
    {
        element = arr+i;
        *element = *element+1;
    }
}
