/*
7. 16-bit Sum Product
Write a function named compute that calculates the sum and product of two 16-bit signed integers and returns both results using reference parameters.

Function Requirements:

a and b
Passed by value
Type: int16_t
sum and product
Passed by reference
Type: int32_t
Behavior:
sum = a + b
product = a * b
Arithmetic must be performed using 32-bit widening to avoid overflow
In main():

Read two integers a and b from standard input
Call compute(a, b, sum, product)
Print sum and product separated by a single space
 

Example 

Input:

30000 2
Output:

30002 60000
Constraints:

a and b are 16-bit signed integers
Range: -32768 to 32767
sum and product are 32-bit signed integers
The multiplication result will always fit within a 32-bit signed integer
Results must be returned only via reference parameters
Do not use:
Pointers
Global variables
Structs or classes
Dynamic memory
Use fixed-width integer types (<cstdint>) to ensure portability
*/
