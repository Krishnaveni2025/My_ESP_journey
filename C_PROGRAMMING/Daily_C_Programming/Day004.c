/*Logical Programming 
Problem 1: Sum of ARRAY Elements
#include<stdio.h>
int main()
{
    int arr[5] = {2,5,6,3,7};//an array of size 5
    int i,sum = 0;//initialize to 0 , because the default value of global variables is garbage
    for(i = 0; i<5;i++)// iterate a loop from 0 to array size-1
    {
        sum = sum + arr[i];//add array elements and store result in sum
    }
    printf("%d",sum);//print result
    return 0;
}
Problem 2: Biggest Element in an ARRAY
    #include<stdio.h>
    int main()
    {
        int arr[7]={9,8,27,48,39,49,87};
        int i,big;
        i = 0;
        big = arr[i];//9
        for(i = 1; i<7; i++)//8 27 48   39  49  87  false
        {
            if(arr[i]>big)  //f t   t    f  t   t
            {
                big = arr[i];//27   48      49  87
            }
        }
        printf("Biggest Element in the array is %d",big);//87
        return 0;
    }
        Problem 3: Passing an array as a parameter to the function*/
        #include<stdio.h>
        int modify(int []);
        int main()
        {
            int arr[5] = {5,6,8,2,7};
            modify(arr);
            int i = 0;
            printf("Array after passing as a parameter and making changes in the function\n");
            for(i = 0; i<5; i++)
            {
                printf("%d\t",arr[i]);
            }
            return 0;
        }
        int modify(int x[])
        {
            int j;
            for(j= 0; j<5; j++)
            {
                x[j] = x[j]+5;
            }
        }
