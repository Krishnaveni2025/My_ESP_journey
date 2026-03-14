/* C LEVEL 10 Problem 12
  Don't use structures
  Question: Convert an integer of upto 50 digits to an character array using "printf("%s,...");"
  Example: 
  Array-1 4 5 8 7 6 3
  Answer:1458763
*/
#include<stdio.h>
int main()
{
    char numbstr[51];
    int number[50],i = 0,j = 0, size;
    printf("Enter the size of Array:");
    scanf("%d",&size);
    printf("Integer array:\n");
    for(j=0;j<size;j++)
    {
        printf("%d Element:",j);
        scanf("%d",&number[j]);
        numbstr[j] = number[j]+48;
    }
    numbstr[j] = '\0';
    printf("character array: %s",numbstr);
}
