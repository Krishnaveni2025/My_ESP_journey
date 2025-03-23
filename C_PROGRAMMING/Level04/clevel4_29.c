//Question: Print the Largest Four digit prime number
//Answer: 9973
/*#include <stdio.h>

int main() {
    int x = 10000;
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
            printf("Largest four-digit prime number: %d\n", x);
            break;
        }
        x--;
    }
    return 0;
}*/
/*--------------------------Using Function-----------------------------*/
#include<stdio.h>
int fourD_largest_prime();//Function Declaration
int main()//Main Function 
{
    int y ;
    y = fourD_largest_prime();//Calling Function
    printf("Largest four-digit prime number: %d\n", y);
    return 0;
}
int fourD_largest_prime()//Function Defination
{
int x = 10000;
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