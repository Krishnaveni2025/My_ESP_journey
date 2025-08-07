/*Logical Programming
Merge Two ARRAYS: adding another array at the end of the original array

#include<stdio.h>

int main()
{
    int arr1[7] = {10,20,30,40,50,60,70};
    int arr2[4] = {11,22,33,99};
    int i,j;
    printf("Array before Merging\n");
    for(i = 0; i<7; i++)
    {
        printf("%d\t",arr1[i]);
    }
    printf("\nArrray after Merging\n");
    for(j = 0; j<4; j++)
    {
        arr1[6+j] = arr2[j];
    }
    i = 0;
    for(i = 0; i<10; i++)
    {
        printf("%d\t",arr1[i]);
    }
}
     Linear Search:*/
#include <stdio.h>
int main()
{
    int arr[4] = {11, 22, 33, 44};
    int found = 0, i, ele;
    printf("Enter an element to search: ");
    scanf("%d", &ele);
    for (i = 0; i < 4; i++)
    {
        if (arr[i] == ele)
        {
            printf("%d Element is found at %d", ele, i);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Element is not found");
    }
}