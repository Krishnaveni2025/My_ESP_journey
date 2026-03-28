/* C LEVEL 10 Problem 08
        Don't use structures
   Question: 
        Get a string of numbers upto 50 digits and validate the number
*/
int valid(char *strng);
char input[51];
#include<stdio.h>
int main()
{
    printf("Enter number of 50 digits:\n");
    scanf("%s",input);
    if(valid(input))
            printf("Valid");
    else
            printf("Not Valid");
}
int valid(char *strng)
{
    int valid = 1;
    for(int i = 0; i<51; i++)
    {
        if(strng[i]<'0' || strng[i]>'9')
        {
            valid = 0;
            break;
        }
    }
    return valid;
}
