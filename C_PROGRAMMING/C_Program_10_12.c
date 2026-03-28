/* C LEVEL 10 Problem 12
        Don't use structures
   Question: 
        Convert an integer of upto 50 digits to an character array using "printf("%s,...");"
   Example: 
        Array-1 4 5 8 7 6 3
        Answer:1458763
*/
#include<stdio.h>
int integer[50],i;
char char_arr[51];
void getnumber(int a[]);
int main()
{
    getnumber(integer);
    printf("%s",char_arr);
}
void getnumber(int a[])
{
    for( i = 0; i<50; i++)
    {
       // printf("Enter %d Element: ",i+1);
        scanf("%d ",&a[i]);
        if(a[i]==0)
                break;
        char_arr[i] = a[i]+48;
    }
    char_arr[i] = '\0';//char_arr[50]
}
