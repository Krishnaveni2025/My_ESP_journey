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
void getnumbers(char *n1, char *n2);
void print(char *str);
void strcopy(char *src, char *dst);
void reverse(char *str);
int getlen(char *str);
void addnumbers(char *n1, char *n2, char *r);
void removeleading0s(char *num);
#include<stdio.h>
int main()
{
    char number1[51], number2[51], result[52];
    getnumbers(number1, number2);
    addnumbers(number1, number2, result);
    print(result);
}
void removeleading0s(char *num)
{
    int i = 0;
    int l = getlen(num);
    while(num[i]=='0'&& i<l-1)
    {
        i++;
    }
    if(i>0)
    {
        strcopy(&num[i], num);
    }
}
void addnumbers(char *n1, char *n2, char *r)
{
    int d1, d2, l1, l2,l=0, sum, carry = 0;
    l1 = getlen(n1)-1;
    l2 = getlen(n2)-1;
    while(l1>=0||l2>=0||carry>0)
    {
        d1 = (l1>=0) ? n1[l1--]-'0': 0;
        d2 = (l2>=0) ? n2[l2--]-'0': 0;
        sum = d1+d2+carry;
        carry = sum/10;
        r[l++] = (sum%10)+'0';
    }
    r[l] = '\0';
    reverse(r);
}
int getlen(char *str)
{
    int l = 0;
    while (*(str+l)!='\0')
    {
        l++;
    }
    return l;
}
void reverse(char *str)
{
    int l = getlen(str);
    int temp;
    for(int i = 0; i<l/2; i++)
    {
        temp = str[i];
        str[i] = str[l-i-1];
        str[l-i-1] = temp;
    }
}
void strcopy(char *src, char *dst)
{
    while(*src!='\0')
    {
        *(dst++) = *(src++);
    }
    *dst = '\0';
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
