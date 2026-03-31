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
void reverse_str(char *str, int s);
int getlength(char *str);
void print(char *str);

char number1[51], number2[51], result[52];

int main()
{
    getnumbers(number1, number2);
    addnumbers(number1, number2, result);
    print(result);
}
void addnumbers(char *n1, char *n2, char *r)
{
    int d1, d2, l1, l2, i, j,k = 0, sum, carry = 0;
    l1 = getlength(n1);
    l2 = getlength(n2);
    i = l1-1;
    j = l2-1;
    while(i>=0 || j>= 0|| carry>0)
    {
        d1 = (i>=0) ? n1[i--]-'0' : 0;
        d2 = (j>=0) ? n2[j--]-'0' : 0;
        
        sum = d1+ d2+ carry;
        carry = sum/10;
        r[k] = sum + '0';
        k++;
    }
    r[k] = '\0';
    reverse_str(r,k);
}
void reverse_str(char *str, int s)
{
    int temp;
    for(int i = 0; i<s/2; i++)
    {
       temp =  str[i];
       str[i] = str[s-i-1];
       str[s-i-1] = temp;
    }
}
void getnumbers(char *n1, char *n2)
{
    printf("Enter First Number(upto 50 digits):\n");
    scanf("%s",n1);
    printf("Enter Second Number(upto 50 digits):\n");
    scanf("%s",n2);
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
void print(char *str)
{
    printf("Result = %s",str);
}
