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
void print_position(char *str, char *sstr);;
int getlength(char *str);
int main()
{
    char s[50], subs[10];
    get_str_sstr(s, subs);
    print_position(s, subs);
}
void print_position(char *str, char *sstr)
{
    int sl, sbl, found = 0;
    sl = getlength(str);
    sbl = getlength(sstr);
    for(int i = 0; i<sl; i++)
    {
        found = 1;
        for(int j = 0; j<sbl; j++)
        {
            if(*(sstr+j)!= *(str+i+j))
            {
                found = 0;
                break;
            }
        }
        if(found)
                printf("%d ",i+1);
    }
}
int getlength(char *str)
{
    int l = 0;
    while(*(str+l)!='\0')
    {
        l++;
    }
    return l;
}
void get_str_sstr(char *str, char *sstr)
{
    printf("String: ");
    scanf("%s",str);
    printf("Sub-string: ");
    scanf("%s",sstr);
}
