
//Question: Adjust the carry in an integer array. (i.e. convert the 2 digit number 
//into single digit and add the carry to the next number)
//E.g.: 
//Array - 6 12 3 15 7
//Answer: 7 2 4 5 7
/*#include <stdio.h>

int main() {
    int len;
    printf("Enter length of array: ");
    scanf("%d", &len);
    int arr[len];
    printf("Enter elements of array: ");
    for (int i = len - 1; i >= 0; i--) {
        scanf("%d", &arr[i]);
    }

    int carry = 0;
    for (int i = len - 1; i >0; i--) {
        int sum = arr[i] + carry;
        arr[i] = sum % 10;
        carry = sum / 10;
    }

    printf("Adjusted array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
*/
/*-------------------------------------------Using Function -----------------------------------------------*/
#include <stdio.h>

// Function declarations
void get_array(int *arr, int len);
void adjust_carry(int *arr, int len);
void print_array(const int *arr, int len);

int main() {
    int len;
    printf("Enter length of array: ");
    scanf("%d", &len);
    int arr[len];

    // Get the elements of the array
    get_array(arr, len);

    // Adjust the carry in the array
    adjust_carry(arr, len);

    // Print the adjusted array
    printf("Adjusted array: ");
    print_array(arr, len);

    return 0;
}

// Function to get elements of the array from the user
void get_array(int *arr, int len) {
    printf("Enter elements of array: ");
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to adjust the carry in the array
void adjust_carry(int *arr, int len) {
    for (int i = len - 1; i > 0; i--) {
        arr[i - 1] += arr[i] / 10;
        arr[i] %= 10;
    }
    if (arr[0] >= 10) {
        int temp = arr[0];
        arr[0] = temp % 10;
        arr[1] += temp / 10;
    }
}

// Function to print the array
void print_array(const int *arr, int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
