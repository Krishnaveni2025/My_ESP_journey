/* 
  C LEVEL 01 Program 09
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
  Question: 
            Write a program to get a three digit number from the user and 
            print the hundred's digit of the number.
  Example:
            Input:456 Output:4
            Input:569 Output:5
  */
  #include<stdio.h>
  void get3d_print100s(void);
  int main()
  {
      get3d_print100s();
  }
  void get3d_print100s(void)
  {
      int threedigitNumber;
      printf("Enter Three Digit Number: ");
      scanf("%d",&threedigitNumber);
      printf("%d",threedigitNumber/100);
  }
