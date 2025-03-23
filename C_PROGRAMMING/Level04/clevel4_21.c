//Question: Write a program to print the total number of two digit Prime numbers
//Answer : 21
/*#include<stdio.h>
int main(){
int x,y,c;
c=0;
    for(x=10;x<100;x++){
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
printf("The total number of Two digit prime numbers are: %d",c);
}*/
/*------------------------------------Using Function------------------------------------*/
#include<stdio.h>
int two_digit_prime_numbers();//Function Declaration
int main()//Main Fucntion
{
    int count;
    count = two_digit_prime_numbers();//Calling Function
    printf("The total number of two digit prime numbers are: %d",count);
    return 0;
}
int two_digit_prime_numbers()//Function Defination
{
    int x,y,c;
    c=0;
    for(x=10;x<100;x++){
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