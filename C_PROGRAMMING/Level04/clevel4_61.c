//Question: Write a program to create a queue using linked list. 
//Use add and remove. 
//Add will insert the entry in top of the list. 
//Remove will get bottom of the list and display. 
//Display will show from top to bottom. 
//Menu Items
//1. Add
//2. Remove
//3. Display Stack
//4. Exit
//struct student {
//int id;
//int Maths;
//int Science;
//struct student *next;}
/*
#include <stdio.h>
#include <stdlib.h>

struct student {
 int id;
 int Maths;
 int Science;
 struct student *next;
};

void add(struct student **head, int id, int Maths, int Science) {
 struct student *new_student = (struct student *) malloc(sizeof(struct student));
 new_student->id = id;
 new_student->Maths = Maths;
 new_student->Science = Science;
 new_student->next = *head;
 *head = new_student;
}
void removef(struct student **head) {
    if (*head == NULL) {
        printf("Queue is empty\n");
        return;
    }

    struct student *temp = *head;
    struct student *prev = NULL;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    printf("Removed ID: %d, Maths: %d, Science: %d\n", temp->id, temp->Maths, temp->Science);

    if (prev == NULL) {
        *head = NULL;
    } else {
        prev->next = NULL;
    }

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
  printf("1. Add\n");
  printf("2. Remove\n");
  printf("3. Display Queue\n");
  printf("4. Exit\n");
  scanf("%d", &choice);

  switch (choice) {
   case 1: {
    int id, Maths, Science;
    printf("Enter ID, Maths mark, Science mark: ");
    scanf("%d %d %d", &id, &Maths, &Science);
    add(&head, id, Maths, Science);
    break;
   }
   case 2:
    removef(&head);
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
/*----------------------------------------------using functions------------------------------*/
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
void add(struct student **head, int id, int Maths, int Science);
void removef(struct student **head);
void display(struct student *head);

int main() {
    struct student *head = NULL;

    int choice;
    while (1) {
        printf("Menu:\n");
        printf("1. Add\n");
        printf("2. Remove\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int id, Maths, Science;
                printf("Enter ID, Maths mark, Science mark: ");
                scanf("%d %d %d", &id, &Maths, &Science);
                add(&head, id, Maths, Science);
                break;
            }
            case 2:
                removef(&head);
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

// Function to add an entry to the queue
void add(struct student **head, int id, int Maths, int Science) {
    struct student *new_student = (struct student *) malloc(sizeof(struct student));
    new_student->id = id;
    new_student->Maths = Maths;
    new_student->Science = Science;
    new_student->next = *head;
    *head = new_student;
}

// Function to remove an entry from the queue (bottom of the list)
void removef(struct student **head) {
    if (*head == NULL) {
        printf("Queue is empty\n");
        return;
    }

    struct student *temp = *head;
    struct student *prev = NULL;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    printf("Removed ID: %d, Maths: %d, Science: %d\n", temp->id, temp->Maths, temp->Science);

    if (prev == NULL) {
        *head = NULL;
    } else {
        prev->next = NULL;
    }

    free(temp);
}

// Function to display the queue from top to bottom
void display(struct student *head) {
    while (head != NULL) {
        printf("ID: %d, Maths: %d, Science: %d\n", head->id, head->Maths, head->Science);
        head = head->next;
    }
}
