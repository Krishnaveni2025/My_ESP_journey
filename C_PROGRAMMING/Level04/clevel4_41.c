//Question: Get an integer and print each digit as character. 
// Print one character on one line.
/*#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        char ch = digit + '0';  // Convert digit to character
        printf("%c\n", ch);
        temp /= 10;
    }
    return 0;
}*/
/*--------------------------------using functions------------------------------*/
#include <stdio.h>
//Declaring Functions
void print_digits_as_characters(int num);//Declaration of Function to print each digit of the number as a character, one per line
int get_integer_input();//Declaration Function to get an integer from the user
int main() 
{
    // Get the integer input from the user
    int num = get_integer_input();

    // Print each digit as a character, one per line
    print_digits_as_characters(num);

    return 0;
}
//Defination of Function to print each digit of the number as a character, one per line
void print_digits_as_characters(int num) 
{
    int temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        char ch = digit + '0';  // Convert digit to character
        printf("%c\n", ch);
        temp /= 10;
    }
}

//Defination Function to get an integer from the user
int get_integer_input() 
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    return num;
}

