/* 
   C LEVEL 12 - Problem 05
            Use Pointers
   Question: 
            Write a program to multiply upto 50 digit numbers.
            #include<stdio.h>
            int main()
            {
                getnumbers(number1, number2);
                multiplynumbers(number1, number2, result);
                print(result);
            }
*/
#include<stdio.h>
void getnumbers(char *n1, char *n2);
void multiplynumbers(char *n1, char *n2, char *r);
void print(char *n);
int getlength(char *n);
void strcopy(char *src, char *dst);
void removeleading0s(char *n);
void conv_int_str(int *n, int l,char *s);
int main()
{
    char number1[51], number2[51], result[102];
    getnumbers(number1, number2);
    multiplynumbers(number1, number2, result);
    print(result);
}
void multiplynumbers(char *n1, char *n2, char *r)
{
    int d1, d2, product, l1, l2,l;
    l1 = getlength(n1);
    l2 = getlength(n2);
    l = l1+l2;
    int temp[102] = {0};
    for(int i = l1-1; i>=0; i--)
    {
        for(int j = l2-1; j>=0; j--)
        {
            d1 = n1[i] - '0';
            d2 = n2[j] - '0';
            product = (d1*d2)+temp[i+j+1];
            temp[i+j+1] = (product%10);
            temp[i+j] += (product/10);
        }
    }
    conv_int_str(temp,l,r);
}
void conv_int_str(int *n, int l,  char *s)
{
    int i;
    for(i = 0; i<l; i++)
    {
        *(s+i) = n[i]+'0';
    }
    *(s+i) = '\0';
}
void print(char *n)
{
    removeleading0s(n);
    printf("Result: %s",n);
}
void removeleading0s(char *n)
{
    int l, i = 0;
    l = getlength(n)-1;
    while(*(n+i)=='0' && i<l)
    {
        i++;
    }
    if(i>0)
            strcopy(&n[i], n);
}
void strcopy(char *src, char *dst)
{
    while(*(src)!='\0')
    {
        *(dst++) = *(src++);
    }
    *dst = '\0';
}
int getlength(char *n)
{
    int l = 0;
    while(*(n+l) != '\0')
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
