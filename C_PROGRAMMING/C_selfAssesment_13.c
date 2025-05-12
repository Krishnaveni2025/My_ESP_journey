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
}*/
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
#include <stdio.h>

#include <stdlib.h>
#include <string.h>

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
void insertAfter(struct student *prevStudent, int id, int maths, int science) {
    if (prevStudent == NULL) {
        printf("The given previous student cannot be NULL.\n");
        return;
    }
    struct student *newStudent = (struct student *)malloc(sizeof(struct student));
    newStudent->id = id;
    newStudent->maths = maths;
    newStudent->science = science;
    newStudent->next = prevStudent->next;
    prevStudent->next = newStudent;
}

    void insertBefore(struct student **head, int id, int maths, int science, int beforeId) {
        struct student *current = *head;
        struct student *prev = NULL;
        while (current != NULL && current->id != beforeId) {
            prev = current;
            current = current->next;
        }
        if (current == NULL) {
            printf("Student with ID %d not found.\n", beforeId);
            return;
        }
        struct student *newStudent = (struct student *)malloc(sizeof(struct student));
        newStudent->id = id;
        newStudent->maths = maths;
        newStudent->science = science;
        newStudent->next = current;
        if (prev == NULL) {
            *head = newStudent;
        } else {
            prev->next = newStudent;
        }


    }int main() {
    struct student *head = NULL;
    int choice, id, maths, science, beforeId;

    // take user input for the initial list scanf
    printf("Enter 5 student entries:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter ID, Maths, Science for student %d: ", i + 1);
        scanf("%d %d %d", &id, &maths, &science);
        insertEntry(&head, id, maths, science);
    }
    displayList(head);
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert Entry\n");
        printf("2. Display List\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter ID, Maths, Science for new student: ");
                scanf("%d %d %d", &id, &maths, &science);
                printf("Insert after which ID? ");
                scanf("%d", &beforeId);
                insertAfter(head, id, maths, science);
                break;
            case 2:
                displayList(head);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    // Free the allocated memory
    struct student *current = head;
    struct student *next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    head = NULL;
    printf("Memory freed successfully.\n");
    return 0;
}/*
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
};
#include<stdio.h>
#include<stdlib.h>// to use malloc
#include<string.h>// to use strcpy
struct student
{
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
    //if emplty
    if (head == NULL) {
        printf("List is empty.\n");
    }
}
void deleteEntry(struct student **head, int id) {
    struct student *current = *head;
    struct student *prev = NULL;

    while (current != NULL && current->id != id) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Student with ID %d not found.\n", id);
        return;
    }

    if (prev == NULL) {
        *head = current->next;
    } else {
        prev->next = current->next;
    }
    free(current);
}
int main() {
    struct student *head = NULL;
    int choice, id, maths, science;

    // take user input for the initial list
    printf("Enter 5 student entries:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter ID, Maths, Science for student %d: ", i + 1);
        scanf("%d %d %d", &id, &maths, &science);
        insertEntry(&head, id, maths, science);
    }
    displayList(head);
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert Entry\n");
        printf("2. Delete Entry\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter ID, Maths, Science for new student: ");
                scanf("%d %d %d", &id, &maths, &science);
                insertEntry(&head, id, maths, science);
                break;
            case 2:
                printf("Enter ID to delete: ");
                scanf("%d", &id);
                deleteEntry(&head, id);
                break;
            case 3:
                displayList(head);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    // Free the allocated memory
    struct student *current = head;
    struct student *next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    head = NULL;
    printf("Memory freed successfully.\n");
    return 0;
}*/
/*4. Create a doubly linked list with about 5 entries
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
};
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student {
    int id;
    int maths;
    int science;
    struct student *next;
    struct student *prev;
};
void insertEntry(struct student **head, int id, int maths, int science) {
    struct student *newStudent = (struct student *)malloc(sizeof(struct student));
    newStudent->id = id;
    newStudent->maths = maths;
    newStudent->science = science;
    newStudent->next = *head;
    newStudent->prev = NULL;

    if (*head != NULL) {
        (*head)->prev = newStudent;
    }
    *head = newStudent;
}
void displayList(struct student *head) {
    struct student *current = head;
    while (current != NULL) {
        printf("ID: %d, Maths: %d, Science: %d\n", current->id, current->maths, current->science);
        current = current->next;
    }
    //if empty
    if (head == NULL) {
        printf("List is empty.\n");
    }
}
void deleteEntry(struct student **head, int id) {
    struct student *current = *head;
    struct student *prev = NULL;

    while (current != NULL && current->id != id) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Student with ID %d not found.\n", id);
        return;
    }

    if (prev == NULL) {
        *head = current->next;
    } else {
        prev->next = current->next;
    }
    if (current->next != NULL) {
        current->next->prev = prev;
    }
    free(current);
}
int main() {
    struct student *head = NULL;
    int choice, id, maths, science;

    // take user input for the initial list
    printf("Enter 5 student entries:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter ID, Maths, Science for student %d: ", i + 1);
        scanf("%d %d %d", &id, &maths, &science);
        insertEntry(&head, id, maths, science);
    }
    displayList(head);
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert Entry\n");
        printf("2. Delete Entry\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter ID, Maths, Science for new student: ");
                scanf("%d %d %d", &id, &maths, &science);
                insertEntry(&head, id, maths, science);
                break;
            case 2:
                printf("Enter ID to delete: ");
                scanf("%d", &id);
                deleteEntry(&head, id);
                break;
            case 3:
                displayList(head);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    // Free the allocated memory
    struct student *current = head;
    struct student *next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    head = NULL;
    printf("Memory freed successfully.\n");
    return 0;
}*/

/*5. Write a program to create a stack using linked list.
Use push & Pop .
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
};
#include <stdio.h>
#include <stdlib.h>
struct student {
    int id;
    int maths;
    int science;
    struct student *next;
};
void push(struct student **top, int id, int maths, int science) {
    struct student *newStudent = (struct student *)malloc(sizeof(struct student));
    newStudent->id = id;
    newStudent->maths = maths;
    newStudent->science = science;
    newStudent->next = *top;
    *top = newStudent;
}
void pop(struct student **top) {
    if (*top == NULL) {
        printf("Stack is empty. Cannot pop.\n");
        return;
    }
    struct student *temp = *top;
    *top = (*top)->next;
    free(temp);
}
void displayStack(struct student *top) {
    struct student *current = top;
    while (current != NULL) {
        printf("ID: %d, Maths: %d, Science: %d\n", current->id, current->maths, current->science);
        current = current->next;
    }
    //if empty
    if (top == NULL) {
        printf("Stack is empty.\n");
    }
}
int main() {
    struct student *top = NULL;
    int choice, id, maths, science;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter ID, Maths, Science for new student: ");
                scanf("%d %d %d", &id, &maths, &science);
                push(&top, id, maths, science);
                break;
            case 2:
                pop(&top);
                break;
            case 3:
                displayStack(top);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    // Free the allocated memory
    struct student *current = top;
    struct student *next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    top = NULL;
    printf("Memory freed successfully.\n");
    return 0;
}
*/
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
#include <stdio.h>
#include <stdlib.h>
struct student
{
    int id;
    int maths;
    int science;
    struct student *next;
};
void add(struct student **front, struct student **rear, int id, int maths, int science)
{
    struct student *newStudent = (struct student *)malloc(sizeof(struct student));
    newStudent->id = id;
    newStudent->maths = maths;
    newStudent->science = science;
    newStudent->next = NULL;

    if (*rear == NULL)
    {
        *front = *rear = newStudent;
        return;
    }
    (*rear)->next = newStudent;
    *rear = newStudent;
}
void removeStudent(struct student **front)
{
    if (*front == NULL)
    {
        printf("Queue is empty. Cannot remove.\n");
        return;
    }
    struct student *temp = *front;
    *front = (*front)->next;
    free(temp);
}
void displayQueue(struct student *front)
{
    struct student *current = front;
    while (current != NULL)
    {
        printf("ID: %d, Maths: %d, Science: %d\n", current->id, current->maths, current->science);
        current = current->next;
    }
    // if empty
    if (front == NULL)
    {
        printf("Queue is empty.\n");
    }
}
int main()
{
    struct student *front = NULL;
    struct student *rear = NULL;
    int choice, id, maths, science;

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Add\n");
        printf("2. Remove\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter ID, Maths, Science for new student: ");
            scanf("%d %d %d", &id, &maths, &science);
            add(&front, &rear, id, maths, science);
            break;
        case 2:
            removeStudent(&front);
            break;
        case 3:
            displayQueue(front);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
    // Free the allocated memory
    struct student *current = front;
    struct student *next;
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }

    front = rear = NULL;
    printf("Memory freed successfully.\n");
    return 0;
}
