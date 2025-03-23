//Question: Write a program create a stack using linked list. 
//Use push & Pop. 
//Push will insert the entry in top of the list. 
//Pop will get top of the list and display. 
//Display will show from top to bottom. 
//Menu Items
//1. Push
//2. Pop
//3. Display Stack
//4. Exit
//struct student {
//int id;
//int Maths;
//int Science;
//struct student *next;}
/*#include <stdio.h>
#include <stdlib.h>

struct student {
 int id;
 int Maths;
 int Science;
 struct student *next;
};

void push(struct student **head, int id, int Maths, int Science) {
 struct student *new_student = (struct student *) malloc(sizeof(struct student));
 new_student->id = id;
 new_student->Maths = Maths;
 new_student->Science = Science;
 new_student->next = *head;
 *head = new_student;
}

void pop(struct student **head) {
 if (*head == NULL) {
  printf("Stack is empty\n");
  return;
 }

 struct student *temp = *head;
 printf("Popped ID: %d, Maths: %d, Science: %d\n", temp->id, temp->Maths, temp->Science);
 *head = (*head)->next;
 free(temp);
}

void display(struct student *head) {
 while (head != NULL) {
  printf("ID: %d, Maths: %d, Science: %d\n", head->id, head->Maths, head->Science);
  head = head->next;
 }
}

int main() {
 struct student *head = NULL;

 int choice;
 while (1) {
  printf("Menu:\n");
  printf("1. Push\n");
  printf("2. Pop\n");
  printf("3. Display Stack\n");
  printf("4. Exit\n");
  scanf("%d", &choice);

  switch (choice) {
   case 1: {
    int id, Maths, Science;
    printf("Enter ID, Maths mark, Science mark: ");
    scanf("%d %d %d", &id, &Maths, &Science);
    push(&head, id, Maths, Science);
    break;
   }
   case 2:
    pop(&head);
    break;
   case 3:
    display(head);
    break;
   case 4:
    exit(0);
  }
 }
 return 0;
}*/
/*----------------------------------------------Using Functions------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

// Structure definition
struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};

// Function declarations
void push(struct student **head, int id, int Maths, int Science);
void pop(struct student **head);
void display(struct student *head);

int main() {
    struct student *head = NULL;

    int choice;
    while (1) {
        printf("Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display Stack\n");
        printf("4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int id, Maths, Science;
                printf("Enter ID, Maths mark, Science mark: ");
                scanf("%d %d %d", &id, &Maths, &Science);
                push(&head, id, Maths, Science);
                break;
            }
            case 2:
                pop(&head);
                break;
            case 3:
                display(head);
                break;
            case 4:
                exit(0);
        }
    }
    return 0;
}

// Function to push an entry onto the stack
void push(struct student **head, int id, int Maths, int Science) {
    struct student *new_student = (struct student *) malloc(sizeof(struct student));
    new_student->id = id;
    new_student->Maths = Maths;
    new_student->Science = Science;
    new_student->next = *head;
    *head = new_student;
}

// Function to pop an entry from the stack
void pop(struct student **head) {
    if (*head == NULL) {
        printf("Stack is empty\n");
        return;
    }

    struct student *temp = *head;
    printf("Popped ID: %d, Maths: %d, Science: %d\n", temp->id, temp->Maths, temp->Science);
    *head = (*head)->next;
    free(temp);
}

// Function to display the stack from top to bottom
void display(struct student *head) {
    while (head != NULL) {
        printf("ID: %d, Maths: %d, Science: %d\n", head->id, head->Maths, head->Science);
        head = head->next;
    }
}
