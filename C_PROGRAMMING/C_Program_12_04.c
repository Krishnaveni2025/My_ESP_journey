/* C LEVEL 12 - Problem 04
        Use Pointers
   Question: 
        Get a string using gets function and count all the words in it.
   Example:
        string: welcome to etalvis learning
   Answer: 4
*/
#include<stdio.h>

char line[100];
int word_count = 0;

void getinput(char *str);
int count_words(char *str);

int main()
{
    getinput(line);
    printf("%d",count_words(line));
}
int count_words(char *str)
{
    int inword = 0;
    while(*str!='\0')
    {
        if(*str!=' '&& *str!='\t')
        {
            if(!inword)
            {
                word_count++;
                inword = 1;
            }
        }
        else
            inword = 0;
        str++;
    }
    return word_count;
}
void getinput(char *str)
{
    printf("String: ");
    gets(str);
}
