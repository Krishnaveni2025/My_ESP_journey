/* 
   C LEVEL 12 - Problem 01
             Use Pointers
   Question: 
             Get two numbers upto 50 digits and perform addition and print the result.
             #include<stdio.h>
             int main()
             {
                 getnumbers(number1, number2);
                 addnumbers(number1, number2, result);
                 print(result);
             }
*/
#include<stdio.h>
#define SIZE 50
void getnumbers(char *n1, char *n2);
void addnumbers(char *n1, char *n2, char *r);
void removeleading0s(char *n);
void strcopy(char *src, char *dst);
void reverse(char *n);
int getlength(char *n);
void print(char *n);
#include<stdio.h>
int main()
{
    char number1[SIZE], number2[SIZE], result[SIZE+1];
    getnumbers(number1, number2);
    addnumbers(number1, number2, result);
    print(result);
}
void addnumbers(char *n1, char *n2, char *r)
{
    int l1, l2, l = 0, d1, d2, sum, carry = 0;
    l1 = getlength(n1)-1;
    l2 = getlength(n2)-1;
    while(l1>=0||l2>=0||carry>0)
    {
        d1 = (l1>=0) ? n1[l1--]-'0': 0;
        d2 = (l2>=0) ? n2[l2--]-'0': 0;
        sum = d1 + d2 + carry;
        carry = (sum/10);
        r[l++] = (sum%10)+'0';
    }
    r[l] = '\0';
    reverse(r);
}
void removeleading0s(char *n)
{
    int l, i = 0;
    l = getlength(n);
    while(n[i]=='0'&& i<l)
    {
        i++;
    }
    strcopy(&n[i], n);
}
void strcopy(char *src, char *dst)
{
    while(*src!='\0')
    {
        *(dst++) = *(src++);
    }
    *dst = '\0';    
}
void reverse(char *n)
{
    int l, i, temp;
    l = getlength(n);
    for(i = 0; i<l/2; i++)
    {
        temp = n[i];
        n[i] = n[l-i-1];
        n[l-i-1] = temp;
    }
}
int getlength(char *n)
{
    int l = 0;
    while(*(n+l)!='\0')
    {
        l++;
    }
    return l;
}
void getnumbers(char *n1, char *n2)
{
    printf("Number 1: ");
    scanf("%s",n1);
    printf("Number 2: ");
    scanf("%s",n2);
}
void print(char *n)
{
    removeleading0s(n);
    printf("Result: %s",n);
}
