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
void get_str_char(char *s, char *c);
void print_positon(char *s, char *c);
int main()
{
   char line[50], letter;
   get_str_char(line, &letter);
   print_positon(line, &letter);
}
void print_positon(char *s, char *c)
{
   int i = 0, found = 0;
   while(*(s+i)!= '\0')
   {
      if(*(s+i)== *c)
      {
         if(found) printf(",");
         found = 0;
         printf("%d",i+1);
         found = 1;
      }
      i++;
   }
}
void get_str_char(char *s, char *c)
{
   printf("String: ");
   scanf("%s",s);
   printf("Character: ");
   scanf(" %c",c);
}
