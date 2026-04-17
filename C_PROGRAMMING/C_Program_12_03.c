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
void get_str_sstr(char *str, char *sstr);
void print_position(char *str, char *sstr);
#include<stdio.h>
int main()
{
    char s[50], subs[10];
    get_str_sstr(s,subs);
    print_position(s, subs);
}
void print_position(char *str, char *sstr)
{
    int i = 0, j = 0,found = 0;
    while(*(str+i)!='\0')
    {
        found = 1;
        j = 0;
       while(*(sstr+j)!='\0')
       {
           if(*(sstr+j)!=*(str+j+i))
            {
                found = 0;
                break;
            }
            j++;
       }
       if(found)
            printf("%d ",i+1);
       i++;
    }
}
void get_str_sstr(char *str, char *sstr)
{
    printf("String: ");
    scanf("%s",str);
    printf("sub-string: ");
    scanf("%s",sstr);
}
