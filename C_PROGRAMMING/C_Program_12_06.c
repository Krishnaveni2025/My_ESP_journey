/* 
C LEVEL 12 Problem 06
            Use Pointers

Question: 
            Write a Calculator program that will give the "Calc" prompt and 
            always stay on this prompt. When a user types one of the 
            following commands, the program will calculate and give the result.
            
            Typing "Exit" will exit from the Calculator program. 
            This program accepts up to 50-digit numbers. 
            Then, the division will give the quotient and remainder.
            Calc> 12345678967354748+9876546877687678678678678 - Addition
            Calc> 12345678995387837883748798-8738478937937498237 - Subtraction
            Calc> 123478763783847239874 * 34837472384723894732 - Multiplication
            Calc> 1233489374983933498398095/3487384 - Division
            Calc> Exit - Quit
            Note:
                    Do not accept Invalid numbers.
                    Do not print leading zeros.
                    Use functions.
                    Each number can be of a different digit.
                    Make sure that all the Input conditions are taken care.
                    Try to minimize the execution speed.
*/
void getnumbers(char *n1, char *n2);
int getlen(char *n);
void subtractnumbers(char *n1, char *n2, char *result);
void print(char *str);
void removeleading0s(char *str);
void strcopy(char *src, char *dst);
int compare(char *n1, char *n2);
void reverse(char *str);
#include<stdio.h>
int main()
{
    char number1[51], number2[51], result[52];
    getnumbers(number1, number2);
    subtractnumbers(number1, number2, result);
    print(result);
}
void subtractnumbers(char *n1, char *n2, char *r)
{
    int l1, l2,k =0, d1, d2, diff, borrow = 0, negative = 0, cmp;
    cmp = compare(n1,n2);
    char *large = n1;
    char *small = n2;
    if(cmp==-1)
    {
        large = n2;
        small = n1;
        negative = 1;
    }
    else if(cmp==0)
    {
        r[0] = '0';
        r[1] = '\0';
        return;
    }
    l1 = getlen(large)-1;
    l2 = getlen(small)-1;
    while(l1>=0)
    {
        d1 = large[l1--]-'0';
        d2 = (l2>=0)? small[l2--]-'0':0;
        diff = d1-d2-borrow;
        if(diff<0)
        {
            diff += 10;
            borrow = 1;
        }
        else
        {
            borrow = 0;
        }
        r[k++] = diff + '0';
    }
    if(negative)
        r[k++] = '-';
    r[k] = '\0';
    
    reverse(r);
}

int compare(char *n1, char *n2)
{
    int l1, l2;
    l1 = getlen(n1);
    l2 = getlen(n2);
    if(l1>l2)
    {
        return 1;
    }
    else if(l1<l2)
    {
        return -1;
    }
    while(*n1!='\0')
    {
        if(*n1<*n2)
                return -1;
        else if(*n1>*n2)
                return 1;
        n1++;
        n2++;
    }
    return 0;
}
void reverse(char *str)
{
    int l, temp;
    l = getlen(str);
    for(int i = 0; i<l/2; i++)
    {
        temp = str[i];
        str[i] = str[l-i-1];
        str[l-i-1] = temp;
    }
}
void removeleading0s(char *str)
{
   int l = getlen(str);
   int i = 0;
   while(*(str+i)=='0'&& i<l-1)
   {
       i++;
   }
   strcopy(&str[i],str);
}
void strcopy(char *src, char *dst)
{
    while(*src!='\0')
    {
        *dst = *src;
        dst++;
        src++;
    }
    *dst = '\0';
}
int getlen(char *n)
{
    int l = 0;
    while(*(n+l)!='\0')
    {
        l++;
    }
    return l;
}
void print(char *str)
{
    removeleading0s(str);
    printf("%s",str);
}
void getnumbers(char *n1, char *n2)
{
    printf("First Number\n");
    scanf("%s",n1);
    printf("Second Number\n");
    scanf("%s",n2);
}
