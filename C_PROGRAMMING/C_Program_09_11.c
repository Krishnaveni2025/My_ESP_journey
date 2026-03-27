/*
  C LEVEL 09 Problem 11
    Use only int variables
    Use ont decimals
    Use arrays
  Question: 
    Get 5 numbers from the user and 
    reverse each number and 
    create a new array and then  
    print the sum of all numbers in the new array 
*/
#include <stdio.h>
// Function Prototypes
void get5numbers(int a[]);
int getbitwidth(int num);
int revers_number(int a[], int b[]);

int main() {
    int numbers[5], reversen[5], sum;
    
    get5numbers(numbers);
    
    // Reverse the numbers and get the total sum
    sum = revers_number(numbers, reversen);
    
    printf("\nTotal Sum of Reversed Numbers: %d\n", sum);
    
    return 0;
}

int revers_number(int a[], int b[]) {
    int sum = 0;
    
    for(int i = 0; i < 5; i++) {
        unsigned int n = (unsigned int)a[i];
        int rev = 0;
        int bit = getbitwidth(n);
        
        for(int j = 0; j < bit; j++) {
            rev <<= 1;          // Shift reversed left
            if(n & 1) {         // Check if current bit is 1
                rev |= 1;       // Set bit in reversed
            }
            n >>= 1;            // Move to next bit in original
        }
        
        b[i] = rev;             // FIX: Store 'rev', not the depleted 'n'
        sum += b[i];
        printf("Original: %d -> Reversed: %d\n", a[i], b[i]);
    }
    return sum;
}

int getbitwidth(int num) {
    if (num == 0) return 1;
    int count = 0;            
    while(num) {
        count++;
        num >>= 1;
    }
    return (count+1);
}

void get5numbers(int a[]) {
    for(int i = 0; i < 5; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}
