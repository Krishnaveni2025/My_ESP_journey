/* C LEVEL 12 - Problem 02
        Use Pointers
   Question: 
        Get a string and a character from the user, 
        find the all the positions where the character is present, and print it.
   Example:
   string: helloetalvislearning
   character: e
   Answer: 2,6,14
*/
#include<stdio.h>
char char_string[100], letter;
void get_string_char(char * str, char *c);
void print_position(char *str, char c);
int main()
{
    get_string_char(char_string, &letter);
    print_position(char_string, letter);
}
void print_position(char *str, char c)
{
    int i = 0, found = 0, count = 0;
    while(str[i]!='\0')
    {
        if(str[i] == c)
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
            printf("character not found");
}
void get_string_char(char *str, char *c)
{
    printf("String: ");
    scanf("%s",str);
    printf("character: ");
    scanf(" %c",c);
}
