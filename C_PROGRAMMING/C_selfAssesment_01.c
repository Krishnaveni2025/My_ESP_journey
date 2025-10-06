/********* C PROGRAMMING FOUNDATION COURSE ********** */
/*=================================== C LEVEL 1 ======================================================
  1. Get a number from the user and add 2 to that number and print the result.
  2. Get a number from the user and subtract 5 from that number and print the result
  3. Get a number from the user and multiply 3 by the number and print the result
  4. Get a number from the user and divide the number by 6 and print the result
  5. Get a number from the user and divide the number by 8 and print the remainder
  6. Get a two-digit number from the user and print it's one's digit
  7. Get a two-digit number from the user and print it's ten's digit
  8. Get a three-digit number from the user and print it's one's digit
  9. Get a three-digit number from the user and print it's hundred's digit
  10. Get a three-digit number from the user and print it's ten's digit
  12. Get a three-digit number from the user and print it's sum of digits
  13. Get a two-digit number froom the user and print reverse of  number
  14. Get a three-digit number from the user and print reverse of the number
  15. Get a four-digit number from the user and reverse only first two digits (one's & ten's)of the number then print the number
  17. Get a two-digit number from the user and make the one's digit 0, then print it
  18. Get a two-digit number from the user and make the ten's digit 1, then print it
  19. Get a three-digit number from the user and make the one's digit 2, then print it
  21. Get a number from the user and subtract 5 from that number if the number is odd, then print the result. Do not use 'if'
  22. Get a number from the user and subtract 5 from that number if the number's ten's digit is odd, then print the result. Do not use 'if'
  23. Get a two-digit number from the user and subtract 5 from that number if the sum of the digits of the number is odd, then print the result. Do not use 'if'
  24. Get a three-digit number from the user and subtract 5 from the number if one's digit and 100's digit are odd, then print the result. Do not use 'if'
  25. Get a three-digit number from the user, if the sum of the digits is less than 10 then print the sum, otherwise print the digits of the sum. If the sum of the digits is less than 10 print the sum, otherwise add the digits of the sum and print the sum.
        Note: The result should always be a single digit only
  20. Get a three-digit number from the user and make ten's digit as 0, then print it.
  16. Get a four-digit number from the user and reverse only last two digits (1000's & 100's digits) of the number, then print the number
  11. Get a two-digit number from the user and print the sum of the digits of the number.      */
#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    //your code here
// y = x + 2;//Question 1
// y = x - 5;//Question 2
// y = x * 3;//Question 3
// y = x / 6;//Question 4
// y = x % 8;//Question 5
// y = x % 10;//Question 6
// y = x / 10;//Question 7
// y = x % 10;//Question 8
// y = x / 100;//Question 9
// y = (x/10) % 10;//Question 10
// y = ((x/100) + ((x/10)%10) + (x%10));//Question 12
// y = (((x%10)*10)+(x/10));//Question 13
// y = (((x%10)*100)+(((x/10)%10)*10)+(x/100));//Question 14
// y = ((x/100)*100)+((x%10)*10)+((x/10)%10);//Question 15
// y = ((x/10)*10);//Question 17
// y = 10+(x%10);//Question 18
// y = ((x/10)*10)+2;//Question 19
//#if 0
    while(x%2)
    {
        y = x-5;
        break;
    }
    while(!(x%2))
    {
        y = x;
        break;
    }//Question 21
    //#endif 
    //#if 0
    while((((x/10)%10)%2))//ten's position is odd
    {
        y = x -5;//subtract 5 and then print
        break;
    }
    while(!(((x/10)%10)%2))//ten's position not odd
    {
        y = x;//print same number
        break;
    }//Question 22
    //#endif
    //#if 0
    while(((x/10)+(x%10))%2)
    {
        y = x - 5;
        break;
    }
    while(!(((x/10)+(x%10))%2))
    {
        y = x;
        break;
    }//Question 23
    //#endif
    //#if 0
    while((x/100)%2)
    {
        while((x%10)%2)
        {
            y = x - 5;
            break;
        }
        while(!((x%10)%2))
        {
            y = x;
            break;
        }
        break;
    }//Question 24
//#endif
//if 0  
y = ((x % 10) + (x / 100) + ((x / 10) % 10));
    while(y>10)
    {
        y = (y%10)+(y/10);
        while(y==10)
        {
            y = 1;
            break;
        }
        break;
    }//Question 25
    #endif
    //y = ((x/100)*100)+(x%10);//Question 20
    //y = (((x/100)%10)*1000)+((x/1000)*100)+(((x/10)%10)*10)+(x%10);//Question 16
    y = (x/10)+(x%10);//Question 11
    printf("Result = %d", y);
    return 0;
} 
