//Question: Write a program to get a number from user, print whether that number is 
//prime, and sum of digit is equal to 14.
//Answer: 
//Input: 59 - Output: Prime & Sum of Digits is 14
//Input: 77 - Output: Not Prime but sum of digits is 14
//Input: 13 - Output: Prime, but sum of Digits is not 14
/*#include<stdio.h>
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    int i,ones,tens,sum,c=0;
    ones=x%10;
    tens=x/10;
    sum=ones+tens;
    i=1;
    while(i<=x) {
        if(x%i ==0)
            c++;
        i++;
    }
    if(c==2)    
        if(sum==14)
            printf("%d is prime & sum of digits is 14",x);
        else
             printf("%d is prime but sum of digits is not 14",x);   
    else
        if(sum==14)
            printf("%d is not prime but sum is 14 ",x);
        else
            printf("%d is not prime & sum is not 14",x);    

}*/
/*Using Functions*/
#include<stdio.h>
//Declaration of functions
int sumofDigitsis14(int num);// Function1 to check Whether the sum of digits is 14 or not DEFINATION1
int isPrime(int num);//Function2 To check whether the number is Prime or not DEFINATION2
int main()
{
    int number, result1, result2;
    printf("Enter a number: ");
    scanf("%d",&number);
    result1 = sumofDigitsis14(number);//Calling Function1
    result2 = isPrime(number);//Calling Function2
    if(result1 == 1) 
    {
        if(result2 == 1)
          printf("%d is prime & sum of digits is 14",number); 
        else
           printf("%d is not prime but sum is 14 ",number); 
    }
    else
    {
        if(result2 == 1)
          printf("%d is not prime but sum is 14 ",number);
        else
          printf("%d is not prime & sum is not 14",number);    
    }
return 0;
}
int sumofDigitsis14(int num) //Defination of Function 1
{
    int sum,result;
    sum = 0;
    while(num != 0 )
    {
        int digit = num%10;
        sum = sum+digit;
        num = num/10;
    }
    if(sum == 14)
    {
        result=1;
    }
    else
    {
        result = 0;
    }
    return result;
}
int isPrime(int num) // Defination of Function 2
{
    int i, result,c=0;
    i=1;
    while(i<=num) {
        if(num%i ==0)
            c++;
        i++;
    }
    if(c == 2)
    {
        result = 1;
    }
    else
    {
        result = 0;
    }
    return result;
}