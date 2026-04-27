/* 
    C LEVEL 13 - Problem 01
        Create a linked list for the following structure and 
        get user inputs id, math mark, science mark.
        once the user inputs the id as -1 exit the input mode and 
        display all the entries.
********************Hint**********************************
struct student{
    int id;
    int math;
    int science;
    struct student *next;
}
*/

#include<stdio.h>
#include<stdlib.h>
struct student{
    int id;
    int math;
    int science,
    struct student *next;
};
int main()
{
    struct student *head = NULL;
    int inputID;
    while(1)
    {
        printf("Enter ID: ");
        scanf("%d",&inputID);
        if(inputID == -1)
        {
            break;
        }
        head = malloc((sizeof(struct student)));
        
    }
}
