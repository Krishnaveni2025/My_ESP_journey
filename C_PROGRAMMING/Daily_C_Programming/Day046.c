/*
1) Use int variables
2) Use only decimals
3) Use if/else statement.
=======================C LEVEL 3==========================================
1. Get a number from the user and check if the number equals 50. If yes, then print "SUCCESS", otherwise print "Failure"
2. Get a number from the user and check if the number is not equals to 50. If yes, then print "Success", otherwise print "Failure"
3. Get a number from the user and check if the number is less than 50. If yes, then print "Success", otherwise print "Failure"
4. Get a number from the user and check if the number is greater than 50. If yes, then print "Success", otherwise print "Failure"
5. Get a number from the user and check if the number is less than or equal to 50. IF yes, then print "Success", otherwise print "Failure"
6. Get a number from the user and check if the number is greater than or equal to 50. If yes print "Success", otherwise print "Failure"
7. Get a two-digit number from the user and check if the digit 0 and  digit 1 are identical. If yes, print "Success", otherwise print "Failure"
8. Get a two-digit number from the user and check if the digit 0 and  digit 1 are not identical. If yes, print "Success", otherwise print "Failure"
9. Get a two-digit number from the user and check if the digit 0 is less than digit 1. If yes, print "Success", otherwise print "Failure"
10. Get a two-digit number from the user and check if the digit 0 is greater than digit 1. If yes, print "Success", otherwise print "Failure"
11. Get a two-digit number from the user and check if the digit 1 is less than or equal to the digit 0. If yes, print "Success", otherwise print "Failure"
12. Get a two-digit number from the user and check if the digit 1 is greater than or equal to the digit 0. If yes, print "Success", otherwise print "Failure"
13. Get a three-digit number from the user and check if the digit 0 and digit 1 are same and if digit 1 and digit 2 are different. If yes, print "Success", otherwise print "Failure"
14. Get a four-digit number from the user and check if the first 2 digits and last two digits are same. If yes, print "Success", otherwise print "Failure"*/
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
#if 0
    if(x==50)
        printf("Success");
    else
        printf("Failure");
#endif // Question 1
#if 0
    if(x!=50)
        printf("Success");
    else
        printf("Failure");
#endif // Queston 2
#if 0
    if(x<50)
        printf("Success");
    else
        printf("Failure");
#endif // Question 3
#if 0
    if(x>50)
        printf("Success");
    else
        printf("Failure");
#endif // Question 4
#if 0
    if(x<=50)
        printf("Success");
    else
        printf("Failure");
#endif // Question 5
#if 0
    if(x>=50)
        printf("Success");
    else
        printf("Failure");
#endif // Question 6
#if 0
    if((x%10)==(x/10))
        printf("Success");
    else
        printf("Failure");
#endif // Question 7: input is two digit number
#if 0
    if((x%10)!=(x/10))
        printf("Success");
    else
        printf("Failure");
#endif // Question 8: input is two digit number
#if 0
    if((x%10)<=(x/10))
        printf("Success");
    else
        printf("Failure");
#endif // Question 9: input is two digit number
#if 0
    if((x%10)>=(x/10))
        printf("Success");
    else
        printf("Failure");
#endif // Question 10: input is two digit number
#if 0
    if ((x / 10) <= (x % 10))//can use above logic here ((x%10)>=(x/10))
        printf("Success");
    else
        printf("Failure");
#endif // Question 11: input is two digit number
#if 0       
    if((x%10)<=(x/10))//((x/10)>=(x/10))
        printf("Success");
    else
        printf("Failure");
#endif // Question 12: input is two digit number
#if 0
    if ((x % 10) == ((x / 10) % 10))
    {
        if ((x / 100) != ((x / 10) % 10))
             printf("Success");
    }
    else
             printf("Failure");
#endif // Question 13: input is a three-digit number
    if ((x / 100) == (x % 100))
        printf("Success");
    else
        printf("Failure"); // Question 14: input is a four-digit number
    return 0;
}

/*
void pointer and Casting
You are writing a utility function that adds two values — but the values can be either:

int, or
float
You will be given void* pointing to the first and second value and a char type specifier: 'i' for int, 'f' for float.

Your task is to:

Cast the void* to appropriate type based on the specifier
Perform the addition
Print the result (as integer or float)
Use proper void* casting and dereferencing logic


Example-1

Input: type = i, a = 10, b = 20
Output: 30


Example-2

Input: type = f, a = 3.5, b = 2.5
Output: 6.0


Example-3

Input: type = i, a = -5, b = 7
Output: 2
Code

#include <stdio.h>

void add_and_print(void *a, void *b, char type) {
    // Write your logic here using type casting
    if(type == 'i')
    {
        printf("%d",(*(int*)a)+(*(int*)b));
    }
    else if(type == 'f')
    {
        printf("%.1f",(*(float*)a)+(*(float*)b));
    }
}

int main() {
    char type;
    scanf(" %c", &type);

    if (type == 'i') {
        int x, y;
        scanf("%d %d", &x, &y);
        add_and_print(&x, &y, type);
    } else if (type == 'f') {
        float x, y;
        scanf("%f %f", &x, &y);
        add_and_print(&x, &y, type);
    }

    return 0;
}

Solving Approach

Cast the void* to appropriate type based on the specifier

Perform the addition

Print the result (as integer or float)

*/


