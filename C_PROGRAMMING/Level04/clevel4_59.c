//Question: Create a doubly linked list with about 5 entries using the following structure. 
//Insert a new entry before or after a given id. Delete an
//entry of a given id.
//Menu Items
//1. Insert Entry
//2. Delete Entry
//3. Display List
//4. Exit
//struct student {
//struct student *prev;
//int id;
//int Maths;
//int Science;
//struct student *next;}
#include <stdio.h>
#include <stdlib.h>

// Structure definition
struct student {
    struct student *prev;
    int id;
    int Maths;
    int Science;
    struct student *next;
};

// Function declarations
void add_student(struct student **head, int id, int Maths, int Science);
void insert_before(int id, int new_id, int Maths, int Science, struct student **head);
void insert_after(int id, int new_id, int Maths, int Science, struct student **head);
void delete_entry(int id, struct student **head);
void display_students(struct student *head);
void show_menu(struct student **head);

int main() {
    struct student *head = NULL;

    // Add sample students
    add_student(&head, 1, 80, 70);
    add_student(&head, 2, 90, 80);
    add_student(&head, 3, 70, 60);
    add_student(&head, 4, 85, 75);
    add_student(&head, 5, 95, 90);

    // Show menu for user interaction
    show_menu(&head);

    return 0;
}

// Function to add a student to the doubly linked list
void add_student(struct student **head, int id, int Maths, int Science) {
    struct student *new_student = (struct student *) malloc(sizeof(struct student));
    new_student->prev = NULL;
    new_student->id = id;
    new_student->Maths = Maths;
    new_student->Science = Science;
    new_student->next = *head;
    if (*head != NULL) {
        (*head)->prev = new_student;
    }
    *head = new_student;
}

// Function to insert a student before a given ID
void insert_before(int id, int new_id, int Maths, int Science, struct student **head) {
    struct student *current = *head;

    while (current != NULL && current->id != id) {
        current = current->next;
    }

    if (current == NULL) {
        printf("ID not found\n");
        return;
    }

    struct student *new_student = (struct student *) malloc(sizeof(struct student));
    new_student->prev = current->prev;
    new_student->id = new_id;
    new_student->Maths = Maths;
    new_student->Science = Science;
    new_student->next = current;
    current->prev = new_student;
    if (new_student->prev != NULL) {
        new_student->prev->next = new_student;
    } else {
        *head = new_student;
    }
}

// Function to insert a student after a given ID
void insert_after(int id, int new_id, int Maths, int Science, struct student **head) {
    struct student *current = *head;

    while (current != NULL && current->id != id) {
        current = current->next;
    }

    if (current == NULL) {
        printf("ID not found\n");
        return;
    }

    struct student *new_student = (struct student *) malloc(sizeof(struct student));
    new_student->prev = current;
    new_student->id = new_id;
    new_student->Maths = Maths;
    new_student->Science = Science;
    new_student->next = current->next;
    current->next = new_student;
    if (new_student->next != NULL) {
        new_student->next->prev = new_student;
    }
}

// Function to delete a student by ID
void delete_entry(int id, struct student **head) {
    struct student *current = *head;

    while (current != NULL && current->id != id) {
        current = current->next;
    }

    if (current == NULL) {
        printf("ID not found\n");
        return;
    }

    if (current->prev != NULL) {
        current->prev->next = current->next;
    } else {
        *head = current->next;
    }

    if (current->next != NULL) {
        current->next->prev = current->prev;
    }

    free(current);
}

// Function to display all students in the doubly linked list
void display_students(struct student *head) {
    while (head != NULL) {
        printf("ID: %d, Maths: %d, Science: %d\n", head->id, head->Maths, head->Science);
        head = head->next;
    }
}

// Function to show menu and handle user input
void show_menu(struct student **head) {
    int choice;
    while (1) {
        printf("Menu:\n");
        printf("1. Insert Entry\n");
        printf("2. Delete Entry\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int id, new_id, Maths, Science, position;
                printf("Enter ID to insert before/after: ");
                scanf("%d", &id);
                printf("Enter new ID, Maths mark, Science mark: ");
                scanf("%d %d %d", &new_id, &Maths, &Science);
                printf("Enter 1 to insert before, 2 to insert after: ");
                scanf("%d", &position);
                if (position == 1) {
                    insert_before(id, new_id, Maths, Science, head);
                } else if (position == 2) {
                    insert_after(id, new_id, Maths, Science, head);
                }
                break;
            }
            case 2: {
                int id;
                printf("Enter ID to delete: ");
                scanf("%d", &id);
                delete_entry(id, head);
                break;
            }
            case 3:
                display_students(*head);
                break;
            case 4:
                exit(0);
        }
    }
}
