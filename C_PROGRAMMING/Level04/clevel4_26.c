//Question: Print the smallest Three digit prime number
//Answer: 101
/*#include <stdio.h>
int main() {
    int x = 100;
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
            printf("Smallest three-digit prime number: %d\n", x);
            break;
        }
        x++;
    }
    return 0;
}
*/
/*--------------------------------------Using Function---------------------------*/
#include<stdio.h>
int threeD_smallest_prime();//Function Declaration
int main()//Main Function
{
    int y ;
    y = threeD_smallest_prime();//Calling Function
    printf("Smallest three-digit prime number: %d\n", y);
    return 0;
}
int threeD_smallest_prime()//Function Defination
{
    int x = 100;
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
        x++;
    }   
}