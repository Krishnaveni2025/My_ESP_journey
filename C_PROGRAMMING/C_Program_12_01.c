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

 char number1[51],number2[51], result[52];

 void getnumbers(char *n1, char *n2);
 void addnumbers(char *n1, char *n2, char *r);
 int getlength(char *str);
 void reverse(char *str, int l);
 void removeleading0s(char *str);
 void strcopy(char *src, char *dst);
 void print(char *str);

 int main()
 {
    getnumbers(number1, number2);
    addnumbers(number1, number2, result);
    print(result);
 }
 void addnumbers(char *n1, char *n2, char *r)
 {
     int l1, l2,l = 0, d1, d2, carry = 0, sum;
     l1 =getlength(n1)-1;
     l2 = getlength(n2)-1;
     while(l1>=0||l2>=0||carry>0)
     {
         d1 = (l1>=0) ? n1[l1--]-'0': 0;
         d2 = (l2>=0) ? n2[l2--]-'0': 0;
         
         sum = d1+ d2+ carry;
         carry /= 10;
         r[l++] = (sum%10)+'0';
     }
     r[l] = '\0';
     reverse(r,l);
 }
 void reverse(char *str, int l)
 {
     int temp;
     for(int i =0 ; i< l/2; i++)
     {
        temp = str[i];
        str[i] = str[l-i-1];
        str[l-i-1] = temp;
     }
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
 void print(char *str)
 {
     removeleading0s(str);
     printf("%s",str);
 }
 void strcopy(char *src, char *dst)
 {
     while(*src!= '\0')
     {
         *(dst++) = *(src++);
     }
     *dst = '\0';
}
 void removeleading0s(char *str)
 {
     int i = 0, j = 0;
     char temp[52];
     while(str[i]!='\0')
     {
         if(str[i]!= '0')
         {
             temp[j] = str[i];
             j++;
         }
         i++;
     }
     temp[j] = '\0';
     strcopy(temp, str);
 }
 void getnumbers(char *n1, char *n2)
 {
     printf("Enter First Number\n");
     scanf("%s",n1);
     printf("Enter Second Number\n");
     scanf("%s",n2);
 }
