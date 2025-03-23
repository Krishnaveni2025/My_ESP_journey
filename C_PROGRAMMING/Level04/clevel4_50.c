//Question: Get two numbers of up to 50 digits and perform addition and 
//print the result.
/*#include <stdio.h>

int main() {
    int len1, len2;
    printf("Enter length of first array: ");
    scanf("%d", &len1);
    int arr1[len1];
    printf("Enter elements of first array: ");
    for (int i = 0; i < len1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter length of second array: ");
    scanf("%d", &len2);
    int arr2[len2];
    printf("Enter elements of second array: ");
    for (int i = 0; i < len2; i++) {
        scanf("%d", &arr2[i]);
    }

    int max_len = (len1 > len2) ? len1 : len2;
    int result[max_len + 1];  // Extra digit for carry
    int carry = 0;

    for (int i = 0; i < max_len; i++) {
        int sum = (i < len1 ? arr1[i] : 0) + (i < len2 ? arr2[i] : 0) + carry;
        result[i] = sum % 10;
        carry = sum / 10;
    }
    result[max_len] = carry;  // Store final carry

    // Print result
    for (int i = max_len; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");

    return 0;
}*/
/*-------------------------------------------------------Using Functions-----------------------------------------*/
#include <stdio.h>

// Function declarations
void get_array(int *arr, int len);
void add_arrays(const int *arr1, int len1, const int *arr2, int len2, int *result, int max_len);
void print_result(const int *result, int len);

int main() {
    int len1, len2;
    printf("Enter length of first array: ");
    scanf("%d", &len1);
    int arr1[len1];
    get_array(arr1, len1);

    printf("Enter length of second array: ");
    scanf("%d", &len2);
    int arr2[len2];
    get_array(arr2, len2);

    int max_len = (len1 > len2) ? len1 : len2;
    int result[max_len + 1];  // Extra digit for carry

    // Add the two arrays
    add_arrays(arr1, len1, arr2, len2, result, max_len);

    // Print the result
    print_result(result, max_len + 1);

    return 0;
}

// Function to get an array from the user
void get_array(int *arr, int len) {
    printf("Enter elements of array: ");
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to add two arrays and store the result in a third array
void add_arrays(const int *arr1, int len1, const int *arr2, int len2, int *result, int max_len) {
    int carry = 0;
    for (int i = 0; i < max_len; i++) {
        int sum = (i < len1 ? arr1[i] : 0) + (i < len2 ? arr2[i] : 0) + carry;
        result[i] = sum % 10;
        carry = sum / 10;
    }
    result[max_len] = carry;  // Store final carry
}

// Function to print the result array
void print_result(const int *result, int len) {
    int start = len - 1;
    while (start > 0 && result[start] == 0) {
        start--;  // Skip leading zeros
    }
    for (int i = start; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");
}
