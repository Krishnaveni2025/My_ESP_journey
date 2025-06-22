/*.....arrays...using.....pointers..... 
#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // Pointer to the first element of the array

    // Print array elements using pointer
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i)); // Accessing elements using pointer arithmetic
    }
    printf("\n");
    return 0;
}
    Pass an integer array to a function and
incerment each array element inside the function*/
#include <stdio.h>
void increment(int *arr, int size);
int main()
{
    int array[5] = {1, 2, 3, 4, 5}; // Example array
    int size = sizeof(array) / sizeof(array[0]); // Calculate size of the array
    increment(array, size); // Call the function to increment each element

    // Print the incremented array
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}

void increment(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) += 1; // Increment each element using pointer arithmetic
    }
}
//increment each element of the array by 1
// This function takes a pointer to the array and its size as parameters
//output
// 2 3 4 5 6
