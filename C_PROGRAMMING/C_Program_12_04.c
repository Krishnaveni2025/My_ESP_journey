/* 
   C LEVEL 12 - Problem 04
            Use Pointers
   Question: 
            Get a string using gets function and count all the words in it.
   Example:
            string: welcome to etalvis learning
            Answer: 4
*/
#include<stdio.h>
void print_noofwords(char *str);
int main()
{
    char line[51];
    printf("String: ");
    gets(line);
    print_noofwords(line);
}
void print_noofwords(char *str)
{
    int i = 0, count = 0;
    while(*(str+i)!='\0')
    {
        if(*(str+i)!=' '&& *(str+i)!='\t')
        {
            if(i==0 || *(str+i-1)==' ' || *(str+i-1)=='\t')
            {
                count++;
            }
        }
        i++;
    }
    printf("Answer: %d",count);
}
