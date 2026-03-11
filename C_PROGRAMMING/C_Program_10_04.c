/* C LEVEL 10 Problem 04
  Don't use structures
  Question: Get a number as string and print the integer value of the string
*/
#include <stdio.h>
int main()
{
    int size,i;
    char numstr[size];
    printf("Enter Size of String: ");
    scanf("%d",&size);
    printf("Enter Number String: ");
    scanf("%s",numstr);
    for(i = 0; i<size; i++)
    {
      printf("%d ",numstr[i]);   
    }
    return 0;
}
