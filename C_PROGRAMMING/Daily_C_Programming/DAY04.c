
//Question 8:
#include <stdio.h>
void solve() {
    int x = 1, y = 2;
    printf(x > y ? "Greater" : x == y ? "Equal" : "Lesser");
}         //1>2 false 1==2 false 1==2 false --->lesser
int main() {
    solve();
    return 0;
}
//Question 9:
#include <stdio.h>
void solve() {
    int first = 10, second = 20;
    int third = first + second;//30
    {
        int third = second - first;//10
        printf("%d ", third);//10
    }
    printf("%d", third);//30
    // The first printf prints the value of the inner third, which is 10.
    // The second printf prints the value of the outer third, which is 30.
    // The outer third is not affected by the inner third's scope.
    // This demonstrates the concept of variable shadowing.
    // The inner third shadows the outer third.
    // This means that within the inner block, the inner third is used instead of the outer third.
}
int main() {
    solve();
    return 0;
}

//Question 10:
#include <stdio.h>
#include <stdbool.h>
// The code uses the stdbool.h header to include the boolean type in C.
// The boolean type allows for the use of true and false values in C programs.
void solve() {
    bool ok = false;
    printf(ok ? "YES" : "NO");// The variable 'ok' is false, so it will print "NO"
    // The ternary operator checks the value of 'ok'.
    // If 'ok' is true, it prints "YES"; otherwise, it prints "NO".
    // In this case, since 'ok' is false, it will print "NO".
}
int main() {
    solve();
    return 0;
}

//Question 11:
#include <stdio.h>
void solve() {
    int ch = 2;
    switch(ch) {
        case 1: printf("1 ");// This case will not execute because ch is 2
        case 2: printf("2 ");// This case will execute because ch is 2
        case 3: printf("3 ");// This case will also execute because there is no break statement after case 2
        default: printf("None");// This case will execute because there is no matching case
    }
}
int main() {
    solve();
    return 0;
}

//Question 12:
#include <stdio.h>
#define VAL 3 * (2 + 6)//3 * 8 = 24
// The macro VAL is defined as 3 * (2 + 6), which evaluates to 24.
// When VAL is used in the code, it will be replaced with 24.
void solve() {
    int a = 10 + VAL;//34
    printf("%d", a);
}
int main() {
    solve();
    return 0;
}
// Question 28:
 #include < stdio.h >
     struct point 3.
{
     int x;
    int y;
    
};
struct notpoint 
{
     int x;
     int y;
    
};
int main() 
{
     struct point p = {1};
     struct notpoint p1 = p;
    printf("%d\n", p1.x);

}
#include <stdio.h>

int main() {
    int i = 1;
    printf("%d %d %d\n", i++, i++, i++);
    return 0;
}
//Question 18:
        #include <stdio.h>
        struct p
        {
            int x;
            int y;
        };
        int main()
        {
            struct p p1[] = {1, 2, 3, 4, 5, 6};
            struct p *ptr1 = p1;
            // ptr1 points to the first element of the array p1
            printf("%d %d\n", ptr1->x, (ptr1 + 2)->x);
            // ptr1->x accesses the x value of the first element (1)
            // (ptr1 + 2)->x accesses the x value of the third element (3)
            return 0;
            
        }
//Question 18:
        #include <stdio.h>
        struct p
        {
            int x;
            int y;
        };
        int main()
        {
            struct p p1[] = {1, 2, 3, 4, 5, 6};
            struct p *ptr1 = p1;
            printf("%d %d\n", ptr1->x, (ptr1 + 2)->x);
        }
//Question 19:
 #include <stdio.h>
int main() {
int x[5] = {1, 2, 3, 4, 5};
int* ptr;

ptr = &x[2];
printf("*ptr = %d \n", *ptr);
printf("*(ptr+1) = %d \n", *(ptr+1));
printf("*(ptr-1) = %d", *(ptr-1));
return 0;
}

//Question 20:
#include <stdio.h>
int main()
{char flag=0x0f;// 00001111
flag &= ~0x02;// 00001111 & 11111101 = 00001101
// The bitwise AND operation with the negation of 0x02 (00000010
printf("%d",flag);// The result is 13, which is the decimal representation of 00001101
return 0;
}
*/
//Question 21:
#include <stdio.h>
int main()
{int x = 10 ^ 2;// 10 in binary is 1010, and 2 in binary is 0010
// The XOR operation will result in 1000, which is 8 in decimal
printf ("%d", x);
return 0;
}
