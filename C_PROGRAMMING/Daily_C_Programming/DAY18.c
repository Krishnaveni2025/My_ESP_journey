//DAY18
/*C program to print
// all natural numbers
// upto N without using semi-colon
#include <stdio.h>
#define N 10

int main(int val)
{
    if (val <= N && printf("%d ", val) && main(val + 1)) {
    }
}*/
/*C Program print Pyramid pattern
#include <stdio.h>

int main()
{
    int N = 5;

    // Outer Loop for number of rows
    for (int i = 1; i <= N; i++) {

        // inner Loop for space printing
        for (int j = 1; j <= N - i; j++)
            printf(" ");

        // inner Loop for star printing
        for (int j = 1; j < 2 * i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}*/
/*// C Program to print
// Pascal's Triangle
#include <stdio.h>

int main()
{
    int n = 5;
    
      
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }

        int x = 1;

        for (int j = 1; j <= i; j++) {
            printf("%d   ", x);
            x = x * (i - j) / j;
        }
        printf("\n");
    }

    return 0;
}*/
