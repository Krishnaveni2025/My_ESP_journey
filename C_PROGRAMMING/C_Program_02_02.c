/* 
    C LEVEL 02 Program 02
            Use only int variables
            Use only Decimals
            Use the following operations only
            +, -, /, *, %, ==, !=, <, >, <=, >=
            Do not use if, for, while, arrays, pointers, strings, etc.
   Question: 
            Get a number from the user and 
            check if the number is not equals to 50. 
            If yes print 1, 
            otherwise print 0.
   Example:
            Input:50    Output:0
            Input:56789 Output:1
  */
 #include<stdio.h>
 int not50(int n);
 int main()
 {
     int number;
     printf("Input: ");
     scanf("%d",&number);
     printf("Output: %d",not50(number));
 }
 int not50(int n)
 {
     return n!=50;
 }
