/* 
   C LEVEL 12 - Problem 02
            Use Pointers
   Question: 
            Get a string and a character from the user, 
            find the all the positions where the character is present, and 
            print it.
   Example:
   string: helloetalvislearning
   character: e
   Answer: 2,6,14
*/
void get_str_char(char *str, char *l);
void print_position(char *str, char *l);
#include<stdio.h>

int main()
{
    char line[50], letter;
    get_str_char(line,&letter);
    print_position(line, &letter);
}
void get_str_char(char *str, char *l)
{
    printf("String: ");
    scanf("%s",str);
    printf("Character: ");
    scanf(" %c",l);
}
void print_position(char *str, char *l)
{
    int found = 0, i = 0, count = 0;
    while(*(str+i)!='\0')
    {
        if(str[i]==*l)
        {
            if(found)
                printf(",");
            printf("%d",i+1);
            found = 1;
            count++;
        }
        i++;
    }
    if(!count)
            printf("Character not found");
}
