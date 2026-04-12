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
  void getnumbers(char *n1, char *n2);
  void addnumbers(char *n1, char *n2, char *r);
  void print(char *str);
  int getlength(char *str);
  void removeleading0s(char *str);
  void reversenum(char *str, int s);
  void strcopy(char *src, char *dst);
  
  int main()
  {
      char number1[51], number2[51], result[52];
      getnumbers(number1, number2);
      addnumbers(number1, number2, result);
      print(result);
  }
  void addnumbers(char *n1, char *n2,char *r)
  { 
      int d1, d2, l1, l2, l = 0, sum , carry = 0;
      l1 = getlength(n1)-1;
      l2 = getlength(n2)-1;
      while(l1>=0||l2>=0||carry>0)
      {
          d1 = (l1>=0)?n1[l1--]-'0':0;
          d2 = (l2>=0)?n2[l2--]-'0':0;
          sum = d1+d2+carry;
          carry = (sum/10);
          r[l++] = (sum%10)+'0';
      }
      r[l] = '\0';
      reversenum(r,l);
      removeleading0s(r);
  }
  void reversenum(char *str, int s)
  {
      int temp;
      for(int i = 0; i<s/2; i++)
      {
          temp = *(str+i);
          *(str+i) = *(str+s-i-1);
          *(str+s-i-1) = temp;
      }
  }
  void removeleading0s(char *str)
  {
      char temp[52];
      int firstnonzero = 0,j = 0;
      int len = getlength(str);
      while(*(str+firstnonzero)=='0'&& firstnonzero<len-1)
      {
          firstnonzero++;
      }
      if(firstnonzero>0)
      {
          while(*(str+firstnonzero)!='\0')
          {
              *(temp+j) = *(str+firstnonzero);
              j++;
              firstnonzero++;
          }
          *(temp+j) = '\0';
          strcopy(temp,str);
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
  int getlength(char *str)
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
      printf("\n%s",str);
  }
  void getnumbers(char *n1, char *n2)
  {
      printf("Enter First Number(upto 50 digits)\n");
      scanf("%s",n1);
      printf("Enter Second Number(upto 50 digits)\n");
      scanf("%s",n2);
  }
