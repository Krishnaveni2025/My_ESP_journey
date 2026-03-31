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
void get_char_string(char *str, char *c);
void print_position(char *str, char c);

int main()
{
    get_char_string(char_string,&letter);
    print_position(char_string, letter);
}
void print_position(char *str, char c)
{
    int  i = 0, found = 0;
    while(str[i]!='\0')
    {
        if(str[i] == c)
        {
            if(found)
                printf(",");
            printf("%d",i+1);
            found = 1;
        }
        found = 0;
        i++;
    }
    if(!found)
            printf("\ncharacter is found");
}
void get_char_string(char *str, char *c)
{
    printf("Enter String: ");
    scanf("%s",str);
    printf("Enter character: ");
    scanf(" %c",c);
}
