/*loops in c
to demonstrate the use of loops in C, we will create a simple program that uses a for loop, a while loop, and a do-while loop to print numbers from 0 to 4
#include <stdio.h>

int main() {
    int i;

    // for loop
    for (i = 0; i < 5; i++) {
        printf("For loop iteration %d\n", i);
    }

    // while loop
    i = 0;
    while (i < 5) {
        printf("While loop iteration %d\n", i);
        i++;
    }

    // do-while loop
    i = 0;
    do {
        printf("Do-while loop iteration %d\n", i);
        i++;
    } while (i < 5);

    return 0;
}*/
/*printing of multiplcation table using do while loop
#include <stdio.h>
#define COLMAX 10
#define ROWMAX 20
int main()
{
    int row, column, y;
    row = 1;
    printf("            multiplication table            \n");
    printf("-------------------------------------------------\n");
    do
    {
        column = 1;
        do
        {
            y = row * column;
            printf("%4d", y);
            column = column + 1;
        } while (column <= COLMAX);
        printf("\n");
        row = row + 1;

    } while (row <= ROWMAX);
    printf("-------------------------------------------------\n");
}*/
/*program to print 'power of 2' table using for loop*/
#include <stdio.h>
int main()
{
    long int p;
    int n;
    double q;
    printf("..................................................\n");
    printf("2 to power          n               2 to power -n\n");
    printf("......................................................\n");
    p = 1;
    for (n = 0; n < 21; ++n)
    {
        if (n == 0)
            p = 1;
        else    
            p = p*2;
        q = 1.0/(double)p;
        printf("%10ld %10d %20.12lf\n",p,n,q);
    }
    printf("........................................................\n");
}
