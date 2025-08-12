// C program to find maximum value in an array
#include <stdio.h>

int main()
{

    // Initialize an array
    int arr[] = { 23, 12, 45, 20, 90, 89, 95, 32, 65, 19 };

    // Find the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Intialize the variable which will denote the  maximum
    // element
    int res = arr[0];

    // Find the maximum value in the array and store it in
    // res

    for (int i = 0; i < n; i++) {
        if (res < arr[i])
            res = arr[i];
    }
    // print the elements of the array
    printf("Array Elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // print the  maximum value
    printf("The maximum value of the array is: %d", res);

    return 0;
}
#include <stdio.h>

int getSum(int arr[], int n) {

    // Initialize sum to 0
    int sum = 0;
    for (int i = 0; i < n; i++) {

        // Add each element to sum
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

  	// Find the sum
    int res = getSum(arr, n);
  
    printf("%d", res);
    return 0;
}
#include <stdio.h>

void rev(int arr[], int n) {
  
  	// Two pointers
    int l = 0, r = n - 1;
    while (l < r) {
      
        // Swap the elements
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        
        // Move pointers towards middle
        l++;
        r--;
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

  	// Reverse array arr
    rev(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

#include <stdio.h>

void insert(int arr[], int *n, int pos, int val) {
  
    // Shift elements to the right
    for (int i = *n; i > pos; i--)
        arr[i] = arr[i - 1];

    // Insert val at the specified position
    arr[pos] = val;

    // Increase the current size
    (*n)++;
}

int main() {
    int arr[7] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 3;
    int val = 25;

    // Insert the value at the specified position
    insert(arr, &n, pos, val);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

#include <stdio.h>

void del(int arr[], int *n, int key) {
  
  	// Find the element
  	int i = 0;
  	while (arr[i] != key) i++;
  	
    // Shifting the right side elements one
  	// position towards left
    for (int j = i; j < *n - 1; j++) {
        arr[j] = arr[j + 1];
    }
  
  	// Decrease the size
    (*n)--; 
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

  	// Delete the key from array
    del(arr, &n, key);
  
  	for (int i = 0; i < n; i++)
      	printf("%d ", arr[i]);

    return 0;
}

// C++ program to illustrate how to rotate array
#include <stdio.h>

// Function to rotate array left by one position
void leftRotateByOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

// Function to rotate array left by d positions
void leftRotate(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++) {
        leftRotateByOne(arr, n);
    }
}

// Function to print an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    // Rotate array left by d positions
    leftRotate(arr, d, n);

    printf("Array  after rotated by %d positions is: ", d);
    printArray(arr, n);

    return 0;
}

// C program to rotate an array by
// d elements
#include <stdio.h>

/* function to print an array */
void printArray(int arr[], int size);

/*Function to get gcd of a and b*/
int gcd(int a, int b);

/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int d, int n)
{
    int i, j, k, temp;
    /* To handle if d >= n */
    d = d % n;
    int g_c_d = gcd(d, n);
    for (i = 0; i < g_c_d; i++) {
        /* move i-th values of blocks */
        temp = arr[i];
        j = i;
        while (1) {
            k = j + d;
            if (k >= n)
                k = k - n;
            if (k == i)
                break;
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}

/*UTILITY FUNCTIONS*/
/* function to print an array */
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

/*Function to get gcd of a and b*/
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

/* Driver program to test above functions */
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    leftRotate(arr, 2, 7);
    printArray(arr, 7);
    getchar();
    return 0;
}

// C Program to return an array in C using Pointers
#include <stdio.h>
#include <stdlib.h>

// Function to create and return an array using dynamic
// memory allocation
int* createArray(int size)
{
    // Allocate memory for the array
    int* array = (int*)malloc(size * sizeof(int));

    // Check if memory allocation was successful
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        exit(1); // Exit the program if allocation fails
    }

    // Initialize the array with example values
    for (int i = 0; i < size; i++) {
        array[i] = i * 2;
    }

    // Return the pointer to the allocated array
    return array;
}

int main()
{
    // Define the size of the array
    int size = 5;
    // Call the function to create the array and store the
    // returned pointer
    int* myArray = createArray(size);

    // Print the elements of the array
    printf("Array Elements: ");
    for (int i = 0; i < size; i++) {

        printf("%d ", myArray[i]);
    }
    printf("\n");

    // Free the allocated memory to avoid memory leaks
    free(myArray);

    return 0;
}

// C Program to return an array in C using static arrays
#include <stdio.h>

// Function to create and return a static array
int* createStaticArray()
{
    // Declare a static array of size 5
    static int array[5];

    // Initialize the array with example values
    for (int i = 0; i < 5; i++) {
        array[i] = i * 2;
    }

    // Return the pointer to the static array
    return array;
}

int main()
{
    // Call the function to get the static array and store
    // the returned pointer
    int* myArray = createStaticArray();

    // Print the elements of the array
    printf("Array Elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}


// C Program to return an array in C using Structures
#include <stdio.h>

// Define a structure to hold an array
typedef struct {
    int array[5];
} ArrayStruct;

// Function to create and return a structure containing an
// array
ArrayStruct createStructArray()
{
    // Declare a variable of type ArrayStruct
    ArrayStruct arrStruct;
    for (int i = 0; i < 5; i++) {
        // Initialize the array
        arrStruct.array[i] = i * 2;
    }
    // Return the structure
    return arrStruct;
}

int main()
{
    // Call the function to get a structure containing the
    // array
    ArrayStruct myArrayStruct = createStructArray();

    // Print the elements of the array
    printf("Array Elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", myArrayStruct.array[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

// Custom comparator
int comp(const void* a, const void* b) {
  	
  	// If a is smaller, positive value will be returned
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[] = { 2 ,6, 1, 5, 3, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array using qsort
    qsort(arr, n, sizeof(int), comp);

    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
   
    return 0;
}

#include <stdio.h>

// Selection sort implementation
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
       if (min != i) {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}

int main() {
    int arr[] = { 2 ,6, 1, 5, 3, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
  
    // Perform Selection Sort
    selectionSort(arr,n);
    
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
  
    return 0;
}

#include <stdio.h>

// Bubble sort implementation
void bubbleSort(int arr[], int n) {
   for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = { 2 ,6, 1, 5, 3, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Perform bubble sort
      bubbleSort(arr,n);
    
    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
    
    return 0;
}

#include <stdio.h>

int getSum(int arr[], int n) {

    // Initialize sum to 0
    int sum = 0;
    for (int i = 0; i < n; i++) {

        // Add each element to sum
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

  	// Find the sum
    int res = getSum(arr, n);
  
    printf("%d", res);
    return 0;
}


#include <stdio.h>

int getSum(int arr[], int n) {
  
    // Base case: No elements left
    if (n == 0) return 0;  
  
    // Add current element and move to the
  	// rest of the array
    return arr[n - 1] + getSum(arr, n - 1);  
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Finding the sum
    int res = getSum(arr, n);

    printf("%d", res);
    return 0;
}


