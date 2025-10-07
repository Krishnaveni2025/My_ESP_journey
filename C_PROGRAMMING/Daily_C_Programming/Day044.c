/*=========================C LEVEL 2====================================
1) use only int variables
2) use only decimals
3) use the following operations only
    +,-,*,/,%,&, ==,>,<,!=,<=,=>
4) use only if, for, while, arrays, pointers, strings etc
1. Get a number from the user and check if the number is equals to 50. If yes, then print 1, otherwise print 0
2. Get a number from the user and check if the number is not equal to 50. If yes, then print 1, otherwise print 0
3. Get a number from the user and check if the number is less than 50. If yes, then print 1, otherwise print 0 
4. Get a number from the user and check if the number is greater than 50. If yes, then print 1, otherwise print 0
5. Get a number from the user and check if the number is less than or equal to 50. If yes then print 1, otherwise print 0
6. Get a number from the user and check if the number is greater than or equals to 50. If yes then print 1, otherwise print 0
7. Get a two-digit number from the user and check if the digit 0 and digit 1 are identical. If yes, then print 1, otherwise print 0
8. Get a two-digit number from the user and check if the digit 0 and digit 1 are not identical. If yes, then print 1, otherwise print 0
9. Get a two-digit number from the user and check if the digit 0 is less than the digit 1. If yes print 1; otherwise print 0
10. Get a two digit number from the user and check if the digit 0 is greater than digit 1. If yes print 1: otherwise print 0
11. Get a two-digit number from the user and check if the digit 1 is less than or equals to digit 0. If yes print 1; otherwise print 0
12. Get a two-digit number from the user and check if the digit 1 is greater than or equal to digit 0. If yes print 1; otherwise print 0
13. Get a three-digit number from the user and check if the digit 1 and digit 0 are same and digit 1 , digit 2 are different. If yes print 1; otherwise print 0
14. Get a four-digit number from the user and check if the first two digits and last two digits are same. If yes print 1; otherwise print 0
*/
#include<stdio.h>
int main()
{
    int x,y;
    //your code here
    printf("Enter a number: ");
    scanf("%d",&x);
    //y = x==50;//Question 1: if x equals to 50 y will be 1, otherwise 0
    //y = !(x==50);//Question 2: if x equals to 50 y will be 0, otherwise 1
    //y = x<50;//Question 3: if x is less than 50 y will be 1, otherwise 0
    //y = x>50;//Question 4: if x is greater than 50 y will be 1, otherwise 0
    //y = x <= 50;//Question 5: if x is less than or equal to 50 y will be 1, otherwise 0
    //y = (x>=50);//Question 6: if x is greater than or equal to 50 y will be 1, otherwise 0
    //y = (x%10)==(x/10);//Question 7: if 0th and 1st digits are same then y will be 1, otherwise 0
    //y = ((x%10)!=(x/10));//Question 8: if 0th and 1st digits are not same then y will be 1, otherwise 0
    //y = ((x%10)<=(x/10));//Question 9: if 0th digit is less than or equal to 1st digit then y will be 1, otherwise 0
    //y = ((x%10)>=(x/10));//Question 10: if the 0th digit is greater than or equal to 1st digit then y will be 1; otherwise 0
    //y = ((x/10)<=(x%10));//Question 11: if the 1st digit is less than or equal to 0th digit then y will be 1; otherwise 0
    //y = ((x/10)>=(x%10));//Question 12: if the 1st digit is greater than or equal to 0th digit then y will be 1; otherwise 0
    //y= (((x%10)==((x/10)%10))&((x/100)!=((x/10)%10)));//Question 13: if digit 1,0 are same and digit 1,2 are different then y will be 1; otherwise 0
    y = ((x/100)==(x%100));//Question 14: if the first 2 and last 2 digits are same then y will be 1; otherwise 0
    printf("Result = %d",y);
    return 0;
}
/*
Detect Alternating Pattern
You are given a memory block as an integer array of size n. 

Your task is to check if a segment of size k starting from the beginning of the array follows an alternating pattern — e.g., 1 0 1 0 ... or 0 1 0 1 ....

Return:

1 if the segment follows an alternating pattern
0 if not
You must use pointer arithmetic only, not array indexing.

Example-1

Input: n = 6, k = 6, mem = [1, 0, 1, 0, 1, 0]
Output: 1

Example-2

Input: n = 6, k = 6, mem = [0, 1, 0, 1, 0, 1]
Output: 1


Example-3

Input: n = 6, k = 6, mem = [1, 1, 0, 1, 0, 1]
Output: 0

*/

#include <stdio.h>

int is_alternating_pattern(int *mem, int k) {
    // Write your pointer logic here
    int *p = mem;
    for(int i = 1; i<k-1; i++)
    {
        if(*(p+i)==*(p+i-1))
        {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, k, arr[100];
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int res = is_alternating_pattern(arr, k);
    printf("%d", res);

    return 0;
}

Solving Approach

assign the starting address of the array to a pointer

iterate a loop from i=1 to i=k-1

at each step compare  *(p+1) == *(p+i-1)  if equal chain breaks then return 0

when loop terminates return 1
*/
