//Question: Create a link list for the following structure and
//get user inputs of id, Maths mark, Science Mark. 
//Once the user inputs id as -1 exit the 
//input mode and display all the entries.
//********** Hint ***************
//struct student {
//int id;
//int Maths;
//int Science;
//struct student *next;}
#include <stdio.h>
#include <stdlib.h>

// Structure definition
struct student {
    int id;//single digit numbers
    int Maths;
    int Science;
    struct student *next;
};

// Function declarations
struct student* create_node(int id, int maths, int science);
void insert_node(struct student **head, int id, int maths, int science);
void display_list(struct student *head);

int main() {
    struct student *head = NULL;
    int id, maths, science;

    while (1) {
        printf("Enter student ID (enter -1 to stop): ");
        scanf("%d", &id);
        if (id == -1) {
            break;
        }
        printf("Enter Maths mark: ");
        scanf("%d", &maths);
        printf("Enter Science mark: ");
        scanf("%d", &science);

        insert_node(&head, id, maths, science);
    }

    printf("Student List:\n");
    display_list(head);

    return 0;
}

// Function to create a new node
struct student* create_node(int id, int maths, int science) {
    struct student *new_node = (struct student*)malloc(sizeof(struct student));
    if (!new_node) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    new_node->id = id;
    new_node->Maths = maths;
    new_node->Science = science;
    new_node->next = NULL;
    return new_node;
}

// Function to insert a node into the linked list
void insert_node(struct student **head, int id, int maths, int science) {
    struct student *new_node = create_node(id, maths, science);
    new_node->next = *head;
    *head = new_node;
}

// Function to display the linked list
void display_list(struct student *head) {
    struct student *current = head;
    while (current != NULL) {
        printf("ID: %d, Maths: %d, Science: %d\n", current->id, current->Maths, current->Science);
        current = current->next;
    }
}
