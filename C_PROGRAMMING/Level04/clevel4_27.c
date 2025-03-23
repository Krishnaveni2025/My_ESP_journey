
//Question: Print the largest Three digit prime number
//Answer: 997
/*#include <stdio.h>
int main() {
    int x = 1000;
    while (1) {
        int is_prime = 1;
        int i;
        for (i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("Largest three-digit prime number: %d\n", x);
            break;
        }
        x--;
    }
    return 0;
}
*/
/*-------------------------------using Function--------------------------------*/
#include <stdio.h>
int threeD_largest_prime();//Function Declaration
int main()//Main Function
{
    int y;
    y = threeD_largest_prime();//Calling Function
    printf("Largest three-digit prime number: %d\n", y);
    return 0;
}
int threeD_largest_prime()//Function Defination
{
    int x = 1000;
    while (1) {
        int is_prime = 1;
        int i;
        for (i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            return x;
            break;
        }
        x--;
    }
}