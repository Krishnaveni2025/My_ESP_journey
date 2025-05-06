/*C PROGRAMMING SELF ASSESSMENT 9
1. Use only int variables
2. Use only Decimals
3. Use Arrays
*/
/*1. Get 5 numbers from user and print the sum of all numbers. 

#include<stdio.h>
int main()
{
    int a[5];//Array Declaration
    int i,j,sum;
    i =0;
    j=0;
    sum =0;
    for(i=0;i<5;i++)
    {
        printf("Enter a Number: ");
        scanf("%d",&a[i]);//Storing numbers in array
    }
    for(j=0;j<5;j++)
    {
        sum = sum+a[j];//Reading data from array
    }
    printf("%d",sum);
}*/
/*2. Get 5 numbers from user and print the average all numbers. 
#include<stdio.h>
int main()
{
    int average[5];//Array Declaration
    int i,avg,sum=0;
    for(i=0;i<5;i++)
    {
        printf("Enter a Number: ");
        scanf("%d",&average[i]);//Storing numbers into  array 
    }
    for(i=0;i<5;i++)
    {
        sum = sum+average[i];
    }
    avg = sum/5;
    printf("Average of 5 numbers = %d",avg);
}
*/
/*3. Get 5 numbers from user and print the
smallest number. *
#include <stdio.h>

int main() {
    int numbers[5];
    int smallest;
    
    // Get 5 integers from the user
    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // Initialize smallest with the first number
    smallest = numbers[0];
    
    // Find the smallest number
    for (int i = 1; i < 5; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    
    // Print the smallest number
    printf("The smallest integer is: %d\n", smallest);
    
    return 0;
}
*/

/*4.Get 5 numbers from user and
print the biggest number
#include <stdio.h>

int main() {
    int numbers[5];
    int biggest;
    
    // Get 5 integers from the user
    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // Initialize biggest with the first number
    biggest = numbers[0];
    
    // Find the biggest number
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > biggest) {
            biggest = numbers[i];
        }
    }
    
    // Print the biggest number
    printf("The biggest integer is: %d\n", biggest);
    
    return 0;
}*/

/*5. Get 5  numbers from user and
print the arrange in ascending order and print the same. 
#include <stdio.h>

int main() {
    int numbers[5];
    int temp;
    
    // Get 5 integers from the user
    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // Sort the numbers in ascending order
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (numbers[i] > numbers[j]) {
                // Swap numbers[i] and numbers[j]
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    
    // Print the sorted numbers
    printf("The numbers in ascending order are: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}
*/
/*6. Get 5 numbers from user and print the 
arrange in ascending order and print the same. 
#include <stdio.h>

int main() {
    int numbers[5];
    int temp;
    
    // Get 5 integers from the user
    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // Sort the numbers in ascending order
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (numbers[i] > numbers[j]) {
                // Swap numbers[i] and numbers[j]
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    
    // Print the sorted numbers
    printf("The numbers in ascending order are: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}
*/
/*7. Get 5 numberes from user and arrange in
descending order and print the same.
#include <stdio.h>

int main() {
    int numbers[5];
    int temp;
    
    // Get 5 integers from the user
    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // Sort the numbers in descending order
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (numbers[i] < numbers[j]) {
                // Swap numbers[i] and numbers[j]
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    
    // Print the sorted numbers
    printf("The numbers in descending order are: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}
*/
/*8.Get 5 numbers from user, remove the odd numbers
and create a new array then print the same. 
#include <stdio.h>

int main() {
    int numbers[5];
    int evenNumbers[5];
    int j = 0;
    
    // Get 5 integers from the user
    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // Remove odd numbers and create a new array with even numbers
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            evenNumbers[j] = numbers[i];
            j++;
        }
    }
    
    // Print the new array with even numbers
    printf("The new array with even numbers is: ");
    for (int i = 0; i < j; i++) {
        printf("%d ", evenNumbers[i]);
    }
    printf("\n");
    
    return 0;
}
*/
/*9. GEt 5 numbers from user , remove the 
even numbers, create a new array , and print the same. 
#include <stdio.h>

int main() {
    int numbers[5];
    int oddNumbers[5];
    int j = 0;
    
    // Get 5 integers from the user
    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // Remove even numbers and create a new array with odd numbers
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) {
            oddNumbers[j] = numbers[i];
            j++;
        }
    }
    
    // Print the new array with odd numbers
    printf("The new array with odd numbers is: ");
    for (int i = 0; i < j; i++) {
        printf("%d ", oddNumbers[i]);
    }
    printf("\n");
    
    return 0;
}
*/
/*10. Get 5 numbers from user , remove the prime numbers
and create a new array , then print the same. 

#include <stdio.h>

// Function to check if a number is prime
int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int numbers[5];
    int nonPrimeNumbers[5];
    int j = 0;
    
    // Get 5 integers from the user
    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    // Remove prime numbers and create a new array with non-prime numbers
    for (int i = 0; i < 5; i++) {
        if (!is_prime(numbers[i])) {
            nonPrimeNumbers[j] = numbers[i];
            j++;
        }
    }
    
    // Print the new array with non-prime numbers
    printf("The new array with non-prime numbers is: ");
    for (int i = 0; i < j; i++) {
        printf("%d ", nonPrimeNumbers[i]);
    }
    printf("\n");
    
    return 0;
}
*//*11. Get upto 5 numbers from the user , reverse each number,
create a new array, and print the sum of all numbers in
the new array. 

#include<Stdio.h>
int main()
{
    int num[5];
    int i = 0,j =0;
    //get five numbers
    for(int i=0;i<5;i++)
    {
    printf("Enter integer  %d : ",i+1);
    scanf("%d",&num[i]);
    }
} */
/*12. Get multiple numbers from the user and 
store them in an array . Stop when the number is 0. 
Print the total numbers entered by the user and
print the sum of numbers. 
#include<Stdio.h>
int main()
{
    int num[50];
    int i = 0,j =0,sum = 0;
    //get five numbers
    for(int i=0;i<50;i++)
    {
    printf("Enter integer  %d : ",i+1);
    scanf("%d",&num[i]);
    if(num[i]==0) //stop when the number is 0
    {
        for(j=0;j<i;j++)//print the total numbers entered by the user
        {
            printf("Number : %d\n",num[j]);
        }
        for(j=0;j<i;j++)//print the sum of numbers
        {
            sum = sum + num[j];
        }
        printf("Sum of numbers: %d\n", sum);
        break;
    }
    }
}
*/
/*13. GEt  multiple numbers from the user and 
store them in an array . Stop getting numbers
when the number is 0. If 4 numbers are entered
and the first and last numbers are equal , print "Success"
else "Failure" . 

#include <stdio.h>
int main()
{
    int arr[100], i, n;
    for (i = 0; i < 100; i++)//100 is the maximum size of the array
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n == 0)//if the number is 0 then break the loop
        {
            break;
        }
        {
            break;
        }
        arr[i] = n;
    }
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n == 0)//if the number is 0 then break the loop
        {
            break;
        }
        {
            break;
        }
        arr[i] = n;
    }
    if (arr[0] == arr[i - 1] && i == 4)//if the first and last number are equal and the total number is 4
    {
        printf("Success\n");
    }
    else
    {
        printf("Failure\n");
    }
    {
        printf("Success\n");
    }
    else
    {
        printf("Failure\n");
    }
    return 0;
}*/
/*14. Get multiple numbers from user and store 
them in an array. Stop getting numbers
when the number is 0. If the total numbers is odd
then print the middle number, Otherwise print the
average of middle two numbers. 
#include <stdio.h>
int main()
{
    int arr[100], i, n;
    for (i = 0; i < 100; i++)//100 is the maximum size of the array
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n == 0)//if the number is 0 then break the loop
        {
            break;
        }
        arr[i] = n;
    }
    if (i % 2 == 1)//if the total number is odd
    {
        printf("Middle number: %d\n", arr[i / 2]);
    }
    else//if the total number is even
    {
        printf("Average of middle two numbers: %.2f\n", (arr[i / 2] + arr[i / 2 - 1]) / 2.0);
    }
    return 0;
}*/
/*15. Get multiple numbers from user and store 
them in an array. Stop getting numbers
when the number is 0.
Add each number's digits and put them in a new
array and arrange the new array in ascending order
and print same. */
//Output: Enter the numbers: 123 456 789 0
//        6 9 15
//Output: Enter the numbers: 123 456 789 0
//        6 9 15
/*#include<stdio.h>
int main ()
{
   //get multiple numbers from user and store them in an array
   int a[100],i=0;
   printf("Enter the numbers: ");
    while(1){
         scanf("%d",&a[i]);
         if(a[i]==0){
              break;
         }
         i++;
    }
    //Add each number's digits and put them in a new array
    int b[100],j=0;
    for(int k=0;k<i;k++){
        int sum=0;
        while(a[k]>0){
            sum+=a[k]%10;
            a[k]=a[k]/10;
        }
        b[j]=sum;
        j++;
    }
    //arrange the new array in ascending order
    for(int k=0;k<j;k++){
        for(int l=k+1;l<j;l++){
            if(b[k]>b[l]){
                int temp=b[k];
                b[k]=b[l];
                b[l]=temp;
            }
        }
    }
    //print the new array
    for(int k=0;k<j;k++){
        printf("%d ",b[k]);
    }
}
*/
/*16. Add two integer arrays of upto 50 digits and
store the result in a 51-digit arrAY.*/

/*
#include<stdio.h>
int main ()
{
    //Add two integer arrays of upto 50 digits
    int a[50],b[50],c[51],i=0,j=0;
    printf("Enter the first number: ");
    while(1){
        scanf("%d",&a[i]);
        if(a[i]==0){
            break;
        }
        i++;
    }
    printf("Enter the second number: ");
    while(1){
        scanf("%d",&b[j]);
        if(b[j]==0){
            break;
        }
        j++;
    }
    //store the result in a 51-digit array
    int k=0,carry=0;
    for(int l=0;l<i || l<j;l++){
        c[k]=a[l]+b[l]+carry;
        carry=c[k]/10;
        c[k]=c[k]%10;
        k++;
    }
    c[k]=carry;
    //print the result
    for(int l=0;l<=k;l++){
        printf("%d",c[l]);
    }
}
*/
/*17. Adjust the carry in an integer array.
 (i.e convert the 2 digit number into single digit
 and add the carry to the next number) 
 
 #include<stdio.h>
 int main ()
 {
     //Adjust the carry in an integer array
     int a[50],i=0;
     printf("Enter the number: ");
     while(1){
         scanf("%d",&a[i]);
         if(a[i]==0){
             break;
         }
         i++;
     }
     //convert the 2 digit number into single digit
     int carry=0;
     for(int j=0;j<i;j++){
         a[j]=a[j]+carry;
         carry=a[j]/10;
         a[j]=a[j]%10;
     }
     //print the result
     for(int j=0;j<i;j++){
         printf("%d",a[j]);
     }
 }
*/ 