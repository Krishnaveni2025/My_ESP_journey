/*logical Programming
Problem 4: Swapping two numbers

#include<stdio.h>
int main()
{
//with a temp variable
int a,b,temp;
a = 10;
b = 20;
printf("%d %d\n",a,b);
temp = a;
a = b;
b = temp;
printf("%d %d",a,b);
}
Problem 5: Biggest of three numbers using conditional operator

#include<stdio.h>
int main()
{
    int a,b,c;
    a = 10;
    b = 20;
    c = 60;
    ((a>b) && (a>c)) ? printf("%d",a) : ((b>a)&&(b>c))?printf("%d",b) : printf("%d",c) ;
    return 0;
}
    Problem 6: Print even numbers from 1 to 10 using while loop.

#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 10)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
}
    Problem 7: Biggest of three numbers using if.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers");
    scanf("\n%d %d %d", &a, &b, &c);
    if ((a > b) && (a > c))
    {
        printf("%d", a);
    }
    else if ((b > a) && (b > c))
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", c);
    }
}
    Problem 8: swapping  two numbers without using a temp variable
    #include<stdio.h>
    int main()
    {
        int a, b;
        printf("Enter Two numbers\n");
        scanf("%d %d",&a,&b);//read a,b
        printf("\nBefore Swapping : a = %d b = %d\n",a,b);
        a = a+b;
        b = a-b;
        a = a-b;
        printf("after swapping : a = %d  b = %d",a,b);
    }

    */
