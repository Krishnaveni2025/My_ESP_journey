/*
 Identify Trap in Signed vs Unsigned Comparison
You are given two variables:

A signed 8-bit integer int8_t a
An unsigned 8-bit integer uint8_t b
Your task is to:

Compare them using if (a < b)
Return 1 if the condition is true, else 0
You must understand and handle the signed-to-unsigned promotion trap. Use your own logic to make the comparison accurate as per actual numeric intent.


Example-1

Input: a = -1, b = 1
Output: 1
(Since -1 is less than 1)

Example-2

Input: a = 250, b = 240
Output: 1
(Since a is int_8t, it can hold value -128 to +127 only, so if we assign 250 it will be considered as -6 in decimal)

Example-3

Input: a = -128, b = 255
Output: 1
  */
#include <stdio.h>
#include <stdint.h>

int safe_compare(int8_t a, uint8_t b) {
    // Your logic here
    return (a < b) ? 1 : 0;
}

int main() {
    int8_t a;
    uint8_t b;
    scanf("%hhd %hhu", &a, &b);
    printf("%d", safe_compare(a, b));
    return 0;
}
