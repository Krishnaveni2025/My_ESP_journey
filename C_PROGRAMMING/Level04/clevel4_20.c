//Question: Write a program to print the total number of single digit Prime numbers
//Assume 0 & 1 are not Prime.
//Answer : 4
/*#include<stdio.h>
int main(){
int x,y,c;
c=0;
    for(x=2;x<9;x++){
        int is_prime = 1;
        for(y=2;y*y<=x;y++){
            if(x%y == 0){
                is_prime =0;
                break ; 
            }
        }
        if(is_prime){
        c++;
        }
    }
printf("The total number of single digit prime numbers are: %d",c);
}*/
/*------------------------------------Using Function------------------------------------*/
#include<stdio.h>
int single_digit_prime_numbers();//Function Declaration
int main()//Main Fucntion
{
    int count;
    count = single_digit_prime_numbers();//Calling Function
    printf("The total number of single digit prime numbers are: %d",count);
    return 0;
}
int single_digit_prime_numbers()//Function Defination
{
    int x,y,c;
    c=0;
    for(x=2;x<9;x++){
        int is_prime = 1;
        for(y=2;y*y<=x;y++){
            if(x%y == 0){
                is_prime =0;
                break ; 
            }
        }
        if(is_prime){
        c++;
        }
    }
    return c;   
}