//Print the number of zeroes you encounter between the numbers 0 to 1000
/*#include <stdio.h>
int main() {
    int c = 0;
    for (int i = 0; i <= 1000; i++) {
        int x = i;
        while (x != 0) {
            int digit = x% 10;
            if (digit == 0) {
                c++;
            }
            x = x / 10;
        }
    }
    printf("Number of zeroes: %d\n", c);
    return 0;
}*/
/*-------------------Using Functions----------------------------------------*/
#include <stdio.h>
int no_of_zeroes();//Function Declaration
int main()//Main Function 
{
    int count;
    count = no_of_zeroes();//Calling Function
    printf("Number of zeroes: %d\n", count);
    return 0;
}
int no_of_zeroes()//Function Defination
{
    int c = 0;
    for (int i = 0; i <= 1000; i++) {
        int x = i;
        while (x != 0) {
            int digit = x% 10;
            if (digit == 0) {
                c++;
            }
            x = x / 10;
        }
    }
    return c;
}
