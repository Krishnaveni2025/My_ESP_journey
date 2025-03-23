// Question: Write a program to get a number from user and interchange the first and
// last digits and print the result.
// Answer:
// Input : 123456 - Output – 623451
// Input : 76895439- Output – 96895437
// Input : 675 – Output - 576
/*#include<stdio.h>
int main () {
    int x,fd,ld,num,mul=1;
    printf("Enter a number: ");
    scanf("%d",&x);      //x=12345
    num=x;    //num=12345
    ld=x%10;    //ld=5
    while(num>9) {    //    T       T    T         T
        num =num/10;    // 1234    123   12        1
        mul=mul*10;    //    10   100   1000    10000
    }
    fd=num%10;    //fd=1%10=1

    x=x-ld;    //x=12345-5=12340

    x=x+fd;    //x=12340+1=12341

    x=x-(fd*mul);    //x=12341-10000=2341

    x=x+(ld*mul);    //x=2341+50000=52341
    printf("%d",x);
}
*/
/*Using Function*/
#include<stdio.h>
int interchange_fd_ld(int x);//Function Declaration
int main () {
    int x, result;
    printf("Enter a number: ");
    scanf("%d",&x);      //x=12345
    result = interchange_fd_ld(x);//CALLING FUNCTION
    printf("Result = %d ", result);
    return 0;
}
int interchange_fd_ld(int x)
{
    // Function defination
    int ld, fd,num, mul = 1;
    num=x;    //num=12345
    ld=x%10;    //ld=5
    while(num>9) {    //    T       T    T         T
        num =num/10;    // 1234    123   12        1
        mul=mul*10;    //    10   100   1000    10000
    }
    fd=num%10;    //fd=1%10=1

    x=x-ld;    //x=12345-5=12340

    x=x+fd;    //x=12340+1=12341

    x=x-(fd*mul);    //x=12341-10000=2341

    x=x+(ld*mul);    //x=2341+50000=52341
    return x;
}