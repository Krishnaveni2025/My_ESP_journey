/*
Self Assesment Test 01
Program Template
#include<stdio.h>
int main()
{
int x,y;
printf("Enter Number:");
scanf("%d",&x);
//your code here
printf("Result = %d",y);
return 0;
}
C LEVEL 1 - Problem 01 
Question:  Get a number from the user, add 2 to that number and print the result.
Example: 
Input:45    Output:47
Input:56789 Output:56791

#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter Number:");
    scanf("%d", &x);
    // your code here
    y = x + 2;
    //another way y = x - (-2); // subtraction operator
    //another way y = x + ~(-3); // bitwise NOT operator  45+~(-3) = 45+2  ; ~(-3) = 2 // ~n = -(n+1)  => ~(-3) = -(-3+1) = 2
    printf("Result = %d", y);
    return 0;
}
    C LEVEL 1 - Problem 02
Question:  Get a number from the user, subtract 5 from that number and print the result.
Example: 
Input:0    Output:-5
Input:56789 Output:56784
#include<stdio.h>
int main()  
{
    int x, y;
    printf("Enter Number:");
    scanf("%d", &x);
    // your code here
    y = x - 5;
    //another way y = x + (-5); // addition operator
    //another way y = x + ~4; // bitwise NOT operator  45+~4 = 45+(-5)  ; ~4 = -5 // ~n = -(n+1)  => ~4 = -(4+1) = -5
    //another way y = x + (~4 + 1); // bitwise NOT operator
    printf("Result = %d", y);
    return 0;
}
    C LEVEL 1 - Problem 03
Question:  Get a number from the user, multiply that number by 3 and print the result.
Example:
Input:45   Output:135
Input:1200 Output:3600
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x); 
    //your code here
    y = x * 3;
    //another way y = x << 1 + x; // bitwise left shift operator
    //another way y = (x + x + x); // addition operator

    printf("Result = %d", y);
    return 0;
}
    C LEVEL 1 - Problem 04
Question:  Get a number from the user, divide that number by 6 and print the result.
Example:
Input:45   Output:7
Input:143 Output:23
#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter Number:");
    scanf("%d", &x);
    // your code here
    y = x / 6;// division operator
    //another way y = x * 0.166666; // multiplication operator
    //another way y = x * (1/6.0); // multiplication operator
    //another way y = x * (1.0/6); // multiplication operator
    //another way y = x * (1.0/6.0); // multiplication operator
    
    printf("Result = %d", y);
    return 0;
}
    C LEVEL 1 - Problem 05
Question:  Get a number from the user, divide that number by 8 and print the remainder.
Example:
Input:45   Output:5
Input:143 Output:7
#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter Number:");
    scanf("%d", &x);
    // your code here
    y = x % 8;// remainder operator
    printf("Result = %d", y);
    return 0;
}
    C LEVEL 1 - Problem 06
    Question:  Get two digit number from the user, and print it's one's digit.
    Example:
    Input:45  Output:5
    Input:56  Output:6
    
   #include<stdio.h>
   int main()
    {
         int x, y;
         printf("Enter Number:");
         scanf("%d", &x);
         // your code here
         //y = x % 10; // remainder operator
         //another way y = x - (x / 10) * 10; // subtraction and multiplication operator
         //another way y = x - (x / 10 << 1) * 5; // subtraction, bitwise left shift and multiplication operator; x/10<<1 = (x/10)*2;45/10<<1 = 4<<1 = 8; 8*5=40; 45-40=5
         //56/10<<1 = 5<<1 = 10; 10*5=50; 56-50=6
          y = x & 0xF; // bitwise AND operator; 0xF = 15 = 1111 in binary 
         printf("Result = %d", y);
         return 0;
    }
         C LEVEL 1 - Problem 07
    Question:  Get two digit number from the user, and print it's ten's digit.
    Example:
    Input:45  Output:4
    Input:56  Output:5
   #include<stdio.h>
   int main()
    {
         int x, y;
         printf("Enter Number:");
         scanf("%d", &x);
         // your code here
         y = x / 10; // division operator
            //another way y = (x - (x % 10)) / 10; // subtraction and division operator
            //another way y = (x - (x & 0xF)) / 10; // subtraction, bitwise AND and division operator; 0xF = 15 = 1111 in binary;56 & 0xF = 6; 56-6=50; 50/10=5
         printf("Result = %d", y);
         return 0;
    }
         C LEVEL 1 - Problem 08
    Question:  Get three digit number from the user, and print it's one's digit.
    Example:
    Input:345  Output:5
    Input:956  Output:6
    #include<stdio.h>
    int main()
     {
            int x, y;
            printf("Enter Number:");
            scanf("%d", &x);
            // your code here
            y = x % 10; // remainder operator
            //another way y = x - (x / 10) * 10; // subtraction and multiplication operator
            //another way y = x - (x / 10 << 1) * 5; // subtraction, bitwise left shift and multiplication operator; x/10<<1 = (x/10)*2;45/10<<1 = 4<<1 = 8; 8*5=40; 45-40=5
            //another way y = x & 0xF; // bitwise AND operator; 0xF = 15 = 1111 in binary
            printf("Result = %d", y);
            return 0;
     }
            C LEVEL 1 - Problem 08
            Question:  Get three digit number from the user, and print it's hundred's digit.
            Example: 
            Input:345  Output:3
            Input:956  Output:9
            
           #include<stdio.h>
           int main()
           {
            int x, y;
            printf("Enter Number:");    
            scanf("%d", &x);
            // your code here
            y = x / 100; // division operator
            //another way y = (x - (x % 100)) / 100; // subtraction and division operator
            //another way y = (x - (x & 0xFF)) / 100; // subtraction, bitwise AND and division operator; 0xFF = 255 = 11111111 in binary;956 & 0xFF = 200; 956-200=756; 756/100=7
            //another way y = (x / 10) / 10; // division operator
            printf("Result = %d", y);   
            return 0;
           }
            C LEVEL 1 - Problem 10
            Question:  Get three digit number from the user, and print it's ten's digit.
            Example:
            Input:456 Output:5
            Input:789 Output:8
              #include<stdio.h>
              int main()
               {
                    int x, y;
                    printf("Enter Number:");
                    scanf("%d", &x);
                    // your code here
                    y = (x / 10) % 10; // division and remainder operator
                    printf("Result = %d", y);
                    return 0;
                }
                    C LEVEL 1 - Problem 11
    Question:Get a Two Digit Number from the user, and print it's sum of digits.
    Example:
    Input:56 Output:11
    Input:69 Output:15
    #include<stdio.h>
    int main()
    {
        int x, y;
        printf("Enter Number:");
        scanf("%d", &x);
        // your code here
        y = (x / 10) + (x % 10); // division and remainder operator
        printf("Result = %d", y);
        return 0;
    }
        C LEVEL 1 - Problem 12
        Question: Get a Three Digit Number from the user, and print it's sum of digits.
        Example:
        Input:562 Output:13
        Input:469 Output:19
        #include<stdio.h>
        int main()
        {
            int x, y;
            printf("Enter Number:");
            scanf("%d", &x);
            // your code here
            y = (x / 100) + ((x / 10) % 10) + (x % 10); // division and remainder operator
            printf("Result = %d", y);
            return 0;
        }
            C LEVEL 1 - Problem 13
            Question: Get a Two Digit number from the user and print the number in reverse order.
            Example:
            Input:56 Output:65
            Input:69 Output:96
            #include<stdio.h>
            int main()
            {
                int x, y;
                printf("Enter Number:");
                scanf("%d", &x);
                // your code here
                y = (x % 10) * 10 + (x / 10); // reverse the digits
                printf("Result = %d", y);
                return 0;
            }
                C LEVEL 1 - Problem 14
                Question: Get a Three Digit number from the user and print the number in reverse order.
                Example:
                Input:562 Output:265
                Input:469 Output:964
                #include<stdio.h>
                int main()
                {
                    int x, y;
                    printf("Enter Number:");
                    scanf("%d", &x);
                    // your code here
                    y = (x % 10) * 100 + ((x / 10) % 10) * 10 + (x / 100); // reverse the digits
                    printf("Result = %d", y);
                    return 0;
                }
                    C LEVEL 1 - Problem 15
            Question: Get a four digit number from the user, only reverse the first two digits and last two digits separately and print the result.
            Example:
            Input:9561 Output:9516
            Input:3859 Output:3895
            
           #include<stdio.h>
           int main()
           {
               int x, y;
               printf("Enter Number:");
               scanf("%d", &x);
               // your code here
               y = (x/1000)*1000 + ((x/100)%10)*100 + (x%10)*10 + ((x/10)%10); // reverse the first two and last two digits separately
               printf("Result = %d", y);
               return 0;
           }
                C LEVEL 1 - Problem 16
                Question: Get a four digit number from the user, only reverse the last two digits and print the result.
                Example:
                Input:9561 Output:5961
                Input:3859 Output:8359
                #include<stdio.h>
                int main()
                {
                    int x, y;
                    printf("Enter Number:");
                    scanf("%d", &x);
                    // your code here
                    y = (((x %1000)/100)*1000)+((x / 1000) * 100)+(x%100);
                    //5000+900+61=5961
                    printf("Result = %d", y);
                    return 0;
                }
           C LEVEL 1 - Problem 17
           Question: Get a two-digit number from the user, make the one's digit as zero and print the result.
           Example:
           Input:95 Output:90
           Input:18 Output:10
            #include<stdio.h>
            int main()
            {
                int x, y;
                printf("Enter Number:");
                scanf("%d", &x);
                // your code here
                y = (x / 10) * 10; // make the one's digit as zero
                printf("Result = %d", y);
                return 0;
            }
                C LEVEL 1 - Problem 18
        Question: Get a two-digit number from the user, make the ten's digit as 1 and print the result.
        Example:
        Input:95 Output:15
        Input:82 Output:12
        #include<stdio.h>
        int main()
        {
            int x, y;
            printf("Enter Number:");
            scanf("%d", &x);
            // your code here
            y = 10 + (x % 10); // make the ten's digit as 1
            printf("Result = %d", y);
            return 0;
        }
            C LEVEL 1 - Problem 19
    Question: Get a Three-digit number from the user, make the one's digit 2 then print it.
    Example:
    Input:695 Output:692
    Input:181 Output:182
    #include<stdio.h>
    int main()
    {
        int x, y;
        printf("Enter Number:");
        scanf("%d", &x);
        // your code here
        y = (x / 10) * 10 + 2; // make the one's digit 2
        //695/10=69; 69*10=690; 690+2=692
        printf("Result = %d", y);
        return 0;
    }
        C LEVEL 1 - Problem 20
        Question: Get a Three-digit number from the user, make the ten's digit 0 then print it.
        Example:
        Input:683 Output:603
        Input:194 Output:104
        #include<stdio.h>
        int main()  
        {
            int x, y;
            printf("Enter Number:");
            scanf("%d", &x);
            // your code here
            y = (x / 100) * 100 + (x % 10); // make the ten's digit 0
            //683/100=6; 6*100=600; 683%10=3; 600+3=603
            printf("Result = %d", y);
            return 0;
        }
            C LEVEL 1 - Problem 21
            Question: Get a number from the user and subtract 5 from that number, if the number is odd then print the result.
            Do not use if condition.
            Example:
            Input:695 Output:690
            Input:182 Output:182
            
            #include<stdio.h>
            int main()
            {
                int x, y;
                printf("Enter Number:");
                scanf("%d", &x);
                // your code here
                while(x&1)
                {
                    y = x - 5;
                    break;
                }
                while(!(x&1))
                {
                    y = x;
                    break;
                }
                printf("Result = %d", y);
                return 0;
            }
                C LEVEL 1 - Problem 22
                Question: Get a number from the user and subtract 5 from that number,
                //if the number's ten's digit is odd then print the result.
                //Do not use if condition.
                Example:
                Input:685 Output:685
                Input:89172 Output:89167
                #include<stdio.h>
                int main()
                {
                    int x,y;
                    printf("Enter Number:");
                    scanf("%d",&x);
                    //your code here
                    while((x/10)&1)
                    {
                        y = x - 5;
                        break;
                    }
                    while(!(x/10)&1)
                    {
                        y = x;
                        break;
                    }
                    printf("Result = %d", y);
                    return 0;
                }
                    C LEVEL 1 - Problem 23
                    Question: Get a two - digit number from the user and subtract 5 from that number,
                    //if the sum of the digits is odd then print the result. Do not use if condition.
                    Example:
                    Input:95 Output:95
                    Input:72 Output:67
                    #include<stdio.h>
                    int main()
                    {
                        int x, y;
                        printf("Enter Number:");
                        scanf("%d", &x);
                        // your code here
                        while (((x / 10) + (x % 10)) & 1)
                        {
                            y = x - 5;
                            break;
                        }
                        while (!(((x / 10) + (x % 10)) & 1))
                        {
                            y = x;
                            break;
                        }
                        printf("Result = %d", y);
                        return 0;
                    }
                        C LEVEL 1 - Problem 24
    Question: Get a Three digit number from the user and subtract 5 from that number,
    if the one's digit number and hundred's digit number are odd then print the result.
    Do not use if condition.
    Example:
    Input:795 Output:790
    Input:372 Output:372
    #include<stdio.h>
    int main()
    {
        int x, y;
        printf("Enter Number:");
        scanf("%d", &x);
        // your code here
        while (((x % 10) & 1) && ((x / 100) & 1))
        {
            y = x - 5;
            break;
        }
        while (!(((x % 10) & 1) && ((x / 100) & 1)))
        {
            y = x;
            break;
        }
        printf("Result = %d", y);
        return 0;
    }
        C LEVEL 1 - Problem 25
        Question: Get a three-digit number from the user . if the sum of it's digit's is less than 10 print sum of digits
        if the sum of the digits is less than 10 print the sum, otherwise add the digits of the sum and print the sum.
        Note: The result should always be a single digit.
        Example:
        Input:123 Output:6
        Input:149 Output:5(1+4+9=14; 1+4=5)
        Input:991 Output:1(9+9+1=19; 1+9=10; 1+0=1)*/
        #include<stdio.h>
        int main()
        {
            int x,y;
            printf("Enter Number:");
            scanf("%d",&x);
            //your code here
            y = (x / 100) + ((x / 10) % 10) + (x % 10); // sum of digits
            while(y>=10)
            {
                int sum = 0;
                while(y>0)
                {
                    sum = sum + (y % 10);
                    y = y / 10;
                }
                y = sum;
            }
            printf("Result = %d", y);
        }