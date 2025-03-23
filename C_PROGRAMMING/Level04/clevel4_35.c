//Question: Get 2 numbers from user and find the LCM of them.
//Example: Input 20,30 Output:60
#include <stdio.h>
int gcd_calculator(int a, int b);//Function Declaration
int main() //Main Function
{
    int num1, num2, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate LCM using the formula: LCM(a, b) = (a * b) / GCD(a, b)
    int gcd = gcd_calculator(num1, num2);//Calling Function
    lcm = (num1 * num2) / gcd;

    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}

int gcd_calculator(int a, int b) //Function Defination
{
    if (b == 0)
        return a;
    else
        return gcd_calculator(b, a % b);
}