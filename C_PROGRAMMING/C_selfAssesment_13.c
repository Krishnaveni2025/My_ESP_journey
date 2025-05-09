/*  C PROGRAMMING SELF ASSESSMENT 13*/
/*1. Create a link list for the following structure and get
user input of id,Maths Mark. Science Mark.
Once the user inputs id as -1 exit the input mode 
and display the entries.
*****Hint***** 
struct student
{
int id;
int maths;
int science;
struct student *next;
};
*/
#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int maths;
    int science;
    struct student *next;
};

void insertEntry(struct student **head, int id, int maths, int science) {
    struct student *newStudent = (struct student *)malloc(sizeof(struct student));
    newStudent->id = id;
    newStudent->maths = maths;
    newStudent->science = science;
    newStudent->next = *head;
    *head = newStudent;
}   
void displayList(struct student *head) {
    struct student *current = head;
    while (current != NULL) {
        printf("ID: %d, Maths: %d, Science: %d\n", current->id, current->maths, current->science);
        current = current->next;
    }
}

int main() {
    struct student *head = NULL;
    int id, maths, science;

    while (1) { 
        printf("Enter ID (or -1 to exit): ");
        scanf("%d", &id);
        if (id == -1) {
            break;
        }
        printf("Enter Maths Mark: ");
        scanf("%d", &maths);
        printf("Enter Science Mark: ");
        scanf("%d", &science);
        insertEntry(&head, id, maths, science);
    }
    
        printf("\nStudent List:\n");
        displayList(head);
        // Free the allocated memory
        struct student *current = head;
        struct student *nextStudent;
        while (current != NULL) {
            nextStudent = current->next;
            free(current);
            current = nextStudent;
        }
    return 0;
}
/*2. Create a sample link list with about 5 entries
using the following  Structure. 
Insert a new entry before or after a given id.
/*2. Create a sample link list with about 5 entries
using the following  Structure. 
Insert a new entry before or after a given id.

Menu Items
1.Insert Entry
2.Display List
3.Exit
*****Hint*****
struct student
{
int id;
int maths;
int science;
struct student *next;
};
*/
/*3.
Create a sample link list with about 5 entries
using the following  Structure. 
Insert a new entry before or after a given id.

Menu Items
1.Insert Entry
2.Delete Entry
3.Display List
4.Exit
struct student
{
int id;
int maths;
int science;
struct student *next;
};*/
/*4. Create a dpubly linked list with about 5 entries
using the following  Structure.
Insert a new entry before or after a given id.
Menu Items
1.Insert Entry
2.Delete Entry
3.Display List
4.Exit
struct student
{
int id;
int maths;
int science;
struct student *next;
struct student *prev;
};*/
/*5. Write a program to create a stack using linked list. 
Use pus & Pop . 
Push wiill insert the entry in top of the list. 
Pop will get top of thew list and delete it.
Display will show from top to bottom.
Menu Items
1.Push
2.Pop
3.Display
4.Exit
struct student
{
int id;
int maths;
int science;
struct student *next;
};*/
/*6. Write a program to create a queue using linked list.
Use add and remove . 
Add will insert the entry in top of the list. 
Remove will get top of the list and delete it.
Display will show from top to bottom.
Menu Items
1.Add
2.Remove
3.Display
4.Exit
struct student
{
int id;
int maths;
int science;
struct student *next;
};*/


