// Get a number from the user and check if it is a prime number or not & Print the result(don't change the program).
#include <stdio.h>
int isPrime(int no);/*Function Declaration*/
int main()
{
    int number, Result;
    scanf("%d", &number);
    Result = isPrime(number);/*Calling Function*/
    if(Result == 1)
         printf("Number is Prime ");
    else
         printf("Number is Not Prime");
    return 0;
}
int isPrime(int no1)/*Function Defination*/
{
    int result;
    // Your Program Here
    int count , i;
    count = 0, i=0;
    for (i = 2; i < no1; i++)
    {
        if (no1 % i == 0)
        {
            count = count + 1;
        }

        if (count == 2)
        {
            result = 1;
        }
        if (count > 2)
        {
            result = 0;
        }
    }
    return result;
}