/* C LEVEL 12 - Problem 01
        Use Pointers
   Question: Get two numbers upto 50 digits and perform addition and print the result.
  #include<stdio.h>
  int main()
  {
    getnumbers(number1, number2);
    addnumbers(number1, number2, result);
    print(result);
  }

*/
#include<stdio.h>
void getnumbers(char *n1, char *n2);
void addnumbers(char *n1, char *n2, char *r);
void print(char *str);
int getlength(char *str);
void reversestring(char *str, int length);

char number1[51], number2[51], result[52];
int main()
{
    getnumbers(number1, number2);
    print(number1);
    print(number2);
    addnumbers(number1, number2, result);
    print(result);
}
void getnumbers(char *n1, char *n2)
{
    printf("Enter First Number\n");
    scanf("%s",n1);
    printf("Enter Second Number\n");
    scanf("%s",n2);
}
void addnumbers(char *n1, char *n2, char *r)
{
    int d1, d2, l1, l2, l = 0, i, j, sum , carry = 0;
    l1 = getlength(n1);
    l2 = getlength(n2);
    i = l1-1;
    j = l2-1;
    while(n1[i]!='\0'|| n2[j]!='\0'||carry>0)
    {
        d1 = (i>=0) ? n1[i--]-'0' : 0;
        d2 = (j>=0) ? n2[j--]-'0' : 0;
        sum = d1+d2+carry;
        carry = sum /10;
        r[l] = sum + '0';
        l++;
    }
    r[l] = '\0';
    reversestring(r,l);
}
void reversestring(char *str, int length)
{
    int temp, i;
    for(i = 0; i<length/2; i++)
    {
        temp = str[i];
        str[i] = str[length-i-1];
        str[length-i-1] = temp;
    }
}
void print(char *str)
{
    printf("%s\n",str);
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
