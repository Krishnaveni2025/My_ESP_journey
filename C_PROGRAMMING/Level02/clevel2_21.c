//Question: Write a program get number from user
//print the total number digits
//which are odd in the number.
//Answer:
//Input : 12345678 - Output : 4
//Input : 987531 - Output : 5
/*#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    //your code here
    int count=0;
    while (x!=0) {
        int digit =x%10;
        if(digit%2 == 1)
            count++;
      x=x/10;
    }
    printf("Result: %d", count);

}*/
/*Using Function*/
#include <stdio.h>
int check_odd(int num); // Function Declaration
int main()
{
    int x;
    printf("Enter a Number:");
    scanf("%d", &x);
    // Your code Here
    int result;
    result = check_odd(x); // Calling Function
    printf("The Total Number Of Odd Digits in the Given Number are %d", result);
    return 0;
}
int check_odd(int num) // Function Defination
{
    int number,count;
    count = 0;
    while(num>0)
    {
        number = num/10;
        if(number%2 != 0)//odd
        {
            count = count +1;
        }
        num = num/10;
        
    }
    return count;    
}