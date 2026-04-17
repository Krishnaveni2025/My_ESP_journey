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
void getnumbers(char *n1, char *n2);
void print(char *str);
int getlen(char *str);
void strcopy(char *src, char *dst);
void removeleading0s(char *num);
void multiplynumbers(char *n1, char *n2, char *r);
void con_int_to_char_array(int *a,int s, char *str);
#include<stdio.h>
int main()
{
    char number1[51], number2[51], result[102];
    getnumbers(number1, number2);
    multiplynumbers(number1, number2, result);
    print(result);
}
void con_int_to_char_array(int *a,int s, char *str)
{
    int i;
    for(i = 0; i<s; i++)
    {
        *(str+i) = a[i]+'0';
    }
    *(str+i) = '\0'; 
}
void multiplynumbers(char *n1, char *n2, char *r)
{
    int l1, l2, d1, d2, product;
    l1 = getlen(n1);
    l2 = getlen(n2);
    int temp[102];
    for(int i = l1-1; i>=0; i--)
    {
        for(int j = l2-1;j>=0; j--)
        {
            d1 = n1[i]-'0';
            d2 = n2[j]-'0';
            product = (d1*d2)+temp[i+j+1];
            temp[i+j+1] = (product%10);
            temp[i+j] += (product/10);
        }
    }
    con_int_to_char_array(temp, l1+l2, r);
}
void removeleading0s(char *num)
{
    int l, i = 0;
    l = getlen(num);
    while(*(num+i)=='0'&&i<l-1)
    {
            i++;
    }
    if(i>0)
    {
        strcopy(&num[i],num);
    }
}
void strcopy(char *src, char *dst)
{
    while(*(src)!='\0')
    {
        *(dst++) = *(src++);
    }
    *(dst) = '\0';
}
int getlen(char *str)
{
    int l = 0;
    while(*(str+l)!='\0')
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
