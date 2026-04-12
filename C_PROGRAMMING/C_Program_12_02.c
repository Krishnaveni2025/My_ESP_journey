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
#include<stdio.h>
void get_str_char(char *str, char *l);
void print_lposition(char *str, char *l);
int main()
{
    char input[51];
    char letter;
    get_str_char(input, &letter);
    print_lposition(input, &letter);
}
void print_lposition(char *str, char *l)
{
    int i = 0, found = 0, count = 0;
    while(*(str+i)!='\0')
    {
        if(*(str+i)== *l)
        {
            if(found)
                    printf(",");
            found = 0;
            printf("%d",i+1);
            found = 1;
            count++;
        }
        i++;
    }
    if(!count)
            printf("Character not found");
}
void get_str_char(char *str, char *l)
{
    printf("String: ");
    scanf("%s",str);
    printf("Character: ");
    scanf(" %c",l);
}
