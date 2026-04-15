/* 
   C LEVEL 12 - Problem 01
             Use Pointers
   Question: 
             Get two numbers upto 50 digits and perform addition and print the result.
*/

#include<stdio.h>

void getnumbers(char *n1, char *n2);
void addnumbers(char *n1, char *n2 , char *r);
void print(char *str);
void reverse(char *str, int s);
void strcopy(char *src, char *dst);
void removeleading0s(char *str);
int getlength(char *str);

int main()
{
    char number1[51], number2[51], result[52];
    getnumbers(number1, number2);
    addnumbers(number1, number2, result);
    print(result);
    return 0;
}

void addnumbers(char *n1, char *n2 , char *r)
{
    int l1, l2, l=0, d1, d2, sum, carry = 0;
    l1 = getlength(n1)-1; // Example: "92" -> length 2, l1 = 1
    l2 = getlength(n2)-1; // Example: "08" -> length 2, l2 = 1
    
    while(l1>=0 || l2>=0 || carry>0) 
    {
        d1 = (l1>=0) ? n1[l1--]-'0' : 0; // 2, 9
        d2 = (l2>=0) ? n2[l2--]-'0' : 0; // 8, 0
        sum = d1 + d2 + carry;           // 10, 10
        carry = sum/10;                  // 1, 1
        r[l++] = (sum%10)+'0';           // '0', '0', '1' (due to final carry)
    }
    r[l] = '\0'; // r is "001"
    reverse(r, l);
}

void removeleading0s(char *str)
{
    int i = 0;
    int l = getlength(str);
    
    // Example: If str is "00100"
    // Loop finds the first character that isn't '0'
    while(str[i] == '0' && i < l-1)
    {
        i++; // i becomes 1, then 2
    }
    
    // If i > 0, it means we found leading zeros
    if(i > 0)
    {
        // strcopy starting from index 2 to the start of the string
        strcopy(&str[i], str); // "100" is copied over "00100"
    }
}

void reverse(char *str, int s)
{
    // If r was "001", it becomes "100"
    int temp;
    for(int i = 0; i < s/2; i++) 
    {
        temp = *(str + i);
        *(str + i) = *(str + s - i - 1);
        *(str + s - i - 1) = temp;
    }
    // Now call the function to clean up any leading zeros
    removeleading0s(str);
}

void strcopy(char *src, char *dst)
{
    // Copies character by character using pointers
    while(*src != '\0')
    {
        *(dst++) = *(src++);
    }
    *(dst) = '\0';
}

void getnumbers(char *n1, char *n2)
{
    printf("First Number: ");
    scanf("%s", n1); // User enters: 92
    printf("Second Number: ");
    scanf("%s", n2); // User enters: 08
}

void print(char *str)
{
    printf("Final Result: %s\n", str);
}

int getlength(char *str)
{
    int l = 0;
    while(*(str + l) != '\0')
    {
        l++;
    }
    return l;
}
