/* 
   C LEVEL 12 - Problem 03
            Use Pointers
   Question: 
            Get a check string and substring. 
            check the substring in the main string and print the position.
   Example:
   string: helloetalvislearning
   sub-string: etal
   Answer: 6
*/
#include<stdio.h>
void get_str_sstr(char *str, char *sstr);
void print_position(char *str, char *sstr);
int getlength(char *s);
int main()
{
   char strng[50], substrng[10];
   get_str_sstr(strng, substrng);
   print_position(strng, substrng);
}
int getlength(char *s)
{
   int l = 0;
   while(*(s+l)!='\0')
   {
      l++;
   }
   return l;
}
void print_position(char *str, char *sstr)
{
   int sl, ssl, i, j, found = 1;
   sl = getlength(str);
   ssl = getlength(sstr);
   for(i = 0; i<sl; i++)
   {
      found = 1;
      for(j = 0; j<ssl; j++)
      {
         if(*(str+i+j)!=*(sstr+j))
         {
            found  = 0;
            break;
         }
      }
      if(found)
            printf("%d ",i+1);
   }
}
void get_str_sstr(char *str, char *sstr)
{
   printf("String: ");
   scanf("%s",str);
   printf("Sub-string: ");
   scanf("%s",sstr);
}
