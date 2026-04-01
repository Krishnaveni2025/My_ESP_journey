/* C LEVEL 12 - Problem 03
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
char fullString[50], substring[5];
void getStrSubstr(char *str, char *sstr);
void print_position(char *str, char *sstr);
int getlength(char *str);
int main()
{
    getStrSubstr(fullString, substring);
    print_position(fullString, substring);
}
void print_position(char *str, char *sstr)
{
    int sl, ssl, found;
    sl = getlength(str);
    ssl = getlength(sstr);
    for(int i = 0; i<sl; i++)
    {
        found = 1;
        for(int j = 0; j<ssl; j++)
        {
            if(str[i+j]!=sstr[j])
                {
                    found = 0;
                    break;
                }
        }
        if(found)
                printf("%d ", i+1);
    }
}
int getlength(char *str)
{
    int l=0;
    while(str[l]!='\0')
    {
        l++;
    }
    return l;
}
void getStrSubstr(char *str, char *sstr)
{
    printf("String: ");
    scanf("%s",str);
    printf("sub-string: ");
    scanf("%s",sstr);
}
