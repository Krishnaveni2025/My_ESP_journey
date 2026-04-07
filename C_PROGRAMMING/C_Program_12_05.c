/* C LEVEL 12 - Problem 05
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
void print(char *str);
int getlength(char *str);
#include<stdio.h>
int main()
{
    char number1[51],number2[51],result[102];
    getnumbers(number1,number2);
    multiplynumbers(number1, number2, result);
    print(result);
}
void multiplynumbers(char *n1, char *n2, char *r)
{
    int temp_res[101] = {0};
    int l1,l2,i,j,d1,d2,product;
    l1 = getlength(n1);
    l2 = getlength(n2);
    for(i = l1-1; i>=0; i--)
    {
        for(j = l2-1; j>=0; j--)
        {
            d1 = *(n1+i)-'0';
            d2 = *(n2+j)-'0';
            product = (d1*d2)+temp_res[i+j+1];
            temp_res[i+j+1] = product%10;
            temp_res[i+j] += (product/10);
        }
    }
    int k = 0, start = 0;
    while((start<(l1+l2)) && (temp_res[start]==0)) start++;
    if(start==(l1+l2)) r[k++] = '0';
    else
    {
        while(start<(l1+l2))
        {
            r[k++] = temp_res[start++]+'0';
        }
    }
    r[k] = '\0';
}
int getlength(char *str)
{
    int length = 0;
    while(str[length]!='\0')
    {
        length++;
    }
    return length;
}
void getnumbers(char *n1, char *n2)
{
    printf("Enter First Number(Upto 50 digits)\n");
    scanf("%s",n1);
    printf("Enter Second Number(Upto 50 digits)\n");
    scanf("%s",n2);
}
void print(char *str)
{
    printf("%s",str);
}
