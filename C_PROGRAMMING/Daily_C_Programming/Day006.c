/* Bubble Sort: Arranging array elements in either ascending or descending order, by comparing two elements at a time.
#include<stdio.h>
int main()
{
    int arr[5] = {23,45,34,55,11};
    int temp,i,j,k;
    printf("Array Before Sorting:\n");
    for(i=0;i<5;i++)
    {
        printf("[%d] ",arr[i]);
    }
    i=0;
    for(i=0;i<4;i++)
    {
        for(j=i;j<5;j++)
        {
            if(arr[i]<arr[j])//for descending order
            //for asacending order use > symbol
            {//swapping
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }  printf("\nArray After Sorting:\n");
    for(k=0;k<5;k++)
    {
        printf("[%d] ",arr[k]);
    }
    return 0;
}*/
/* Selection Sort: The first [0th index] element is slected and compared with all the elements in the arrary.
 if any element is found to be lesser than the selected element , then these two elements are swapped.
 This procedure repeates till the entire array is sorted.
 #include<stdio.h>
 int main()
 {
     int arr[5] = {51,46,32,87,95};
     int temp,min,i,j;
     printf("Array Before Sorting:\n");
     for(i=0;i<5;i++)
     {
         printf("[%d] ",arr[i]);
     }
     for(i=0;i<4;i++)
     {
         min = i;
         for(j=i+1;j<5;j++)
         {
             if(arr[j]>arr[min])//Descending order
             {//for ascending order replace > with <
                 min =j;
             }
         }
         temp = arr[i];
         arr[i] = arr[min];
         arr[min] = temp;
     } printf("\nArray After Sorting:\n");
     for(i=0; i<5; i++)
     {
         printf("[%d] ",arr[i]);
     }
 }*/
  /*   Insertion Sort:*/
#include <stdio.h>
int main()
{
    int arr[6] = {7, 3, 5, 4, 2, 6};
    int i, j,key;
    printf("Array Before Sorting:\n");
    for (i = 0; i < 6; i++)
    {
        printf("[%d] ", arr[i]);//[7] [3] [5] [4] [2] [6]
    }
    i = 1;
    for (i = 1; i < 6; i++)//1 2 3
    {
        key = arr[i];//3 7 5
        j = i;//1 2 3
        while ((j > 0) && (arr[j-1] > key))//T F F 
        {
            arr[j] = arr[j-1];//7
            j = j - 1;//0
        }
        arr[j] = key;//2 3 4 5 6 7
    }
    printf("\nArray after sorting\n");
    for (i = 0; i < 6; i++)
    {
        printf("[%d] ", arr[i]);//[2] [3] [4] [5] [6] [7]
    }
}