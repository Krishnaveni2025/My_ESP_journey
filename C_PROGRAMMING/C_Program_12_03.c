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
char char_string[50],substring[5];
void getStringSubstring(char *str, char *sstr);
int getlength(char *s);
void print_position(char *str, char *sstr);

int main()
{
    getStringSubstring(char_string, substring);
    print_position(char_string, substring);
}
void getStringSubstring(char *str,char *sstr)
{
    printf("Enter String: ");
    scanf("%s",str);
    printf("Enter sub-string: ");
    scanf("%s",sstr);
}
int getlength(char *s)
{
    int length = 0;
    while(s[length]!='\0')
    {
        length++;
    }
    return length;
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
