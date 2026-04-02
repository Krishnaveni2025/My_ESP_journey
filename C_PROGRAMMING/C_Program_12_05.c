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


char number1[51], number2[51], result[102];

void getnumbers(char *n1, char *n2);
void multiplynumbers(char *n1, char *n2, char *r);
int getlength(char *str);
void reverse(char *str, int s);
void print(char *str);

int main()
{
    getnumbers(number1, number2);
    multiplynumbers(number1, number2, result);
    print(result);  
}

void getnumbers(char *n1, char *n2)
{
    printf("Enter First Number\n");
    scanf("%s",n1);
    printf("Enter Second Number\n");
    scanf("%s",n2);
}

void multiplynumbers(char *n1, char *n2, char *r)
{
    int l1 = getlength(n1);
    int l2 = getlength(n2);
    int temp_res[102] = {0}; // Temporary int array to handle carries easily

    // Nested loops: Multiply each digit of n1 by each digit of n2
    for (int i = l1 - 1; i >= 0; i--) {
        for (int j = l2 - 1; j >= 0; j--) {
            int d1 = n1[i] - '0';
            int d2 = n2[j] - '0';
            
            // Calculate current product and add to the existing value at this position
            int product = (d1 * d2) + temp_res[i + j + 1];
            
            temp_res[i + j + 1] = product % 10; // Keep unit digit
            temp_res[i + j] += product / 10;    // Carry to the left
        }
    }

    // Convert the integer array back into your char *r (result)
    int k = 0, start = 0;
    while (start < (l1 + l2) && temp_res[start] == 0) start++; // Skip leading zeros
    
    if (start == (l1 + l2)) r[k++] = '0'; // Handle case where result is 0
    else {
        while (start < (l1 + l2)) {
            r[k++] = temp_res[start++] + '0';
        }
    }
    r[k] = '\0';
}

int getlength(char *str)
{
    int l = 0;
    while(str[l]!='\0')
    {
        l++;
    }
    return l;
}

void reverse(char *str, int s)
{
    int temp;
    for(int i = 0; i<s/2; i++)
    {
       temp = str[i];
       str[i] = str[s-i-1];
       str[s-i-1] = temp;
    }
}

void print(char *str)
{
    printf("Result: %s\n", str);
}
