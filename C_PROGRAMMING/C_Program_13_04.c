/*
        C LEVEL 13 - Problem 04
        Question:
                  Create a Double linked list about 5 entries using the following structure
                  insert a new entry before or after given a given id.
                  Delete an entry of a given id.
                  Menu Items
                  1. Insert Entry
                  2. Delete Entry
                  3. Display List
                  3. Exit
        ********************Hint**********************************
        struct student{
          struct student *prev;
          int id;
          int math;
          int science;
          struct student *next;
        }
*/
#include <stdio.h>
#include <stdlib.h>

struct student {
    struct student *prev;
    int id;
    int math;
    int science;
    struct student *next;
};

typedef struct student node;

// Function Prototypes
node* fiveentries(node *list);
void display(node *list);
node* create(void);
int user_choice(void);
void display_Entry(node *list);
node* find(node *list, int id);
node* delete_Entry(node *list);
node* insert_Entry(node *list);

int main() {
    node *head = NULL;
    head = fiveentries(head);
    display(head);

    int k;
    while (1) {
        k = user_choice();
        if (k == 1) {
            head = insert_Entry(head);
        } else if (k == 2) {
            head = delete_Entry(head);
        } else if (k == 3) {
            display_Entry(head);
        } else if (k == 4) {
            printf("Exiting....\n");
            break;
        }
    }
    return 0;
}

// Helper function to find a node by ID
node* find(node *list, int id) {
    node *temp = list;
    while (temp != NULL) {
        if (temp->id == id) return temp;
        temp = temp->next;
    }
    return NULL;
}

node* insert_Entry(node *list) {
    int targetId, choice;
    printf("Enter existing ID to insert near: ");
    scanf("%d", &targetId);
    
    node *target = find(list, targetId);
    if (target == NULL) {
        printf("Target ID not found.\n");
        return list;
    }

    printf("1. Insert Before\n2. Insert After\nChoice: ");
    scanf("%d", &choice);
    
    node *newNode = create();

    if (choice == 1) { // Insert Before
        newNode->next = target;
        newNode->prev = target->prev;
        if (target->prev != NULL) {
            target->prev->next = newNode;
        } else {
            list = newNode; // New node becomes the new head
        }
        target->prev = newNode;
    } else { // Insert After
        newNode->next = target->next;
        newNode->prev = target;
        if (target->next != NULL) {
            target->next->prev = newNode;
        }
        target->next = newNode;
    }
    printf("Entry inserted successfully.\n");
    return list;
}

node* delete_Entry(node *list) {
    int k;
    printf("Enter Id to delete Entry: ");
    scanf("%d", &k);

    node *target = find(list, k);
    if (target == NULL) {
        printf("Entry not found.\n");
        return list;
    }

    // Adjust the neighbors' pointers
    if (target->prev != NULL) {
        target->prev->next = target->next;
    } else {
        list = target->next; // Move head if we delete the first node
    }

    if (target->next != NULL) {
        target->next->prev = target->prev;
    }

    free(target);
    printf("Entry %d deleted.\n", k);
    return list;
}

void display_Entry(node *list) {
    int k;
    printf("\nEnter Id to display ENTRY: ");
    scanf("%d", &k);
    
    node *temp = find(list, k);
    if (temp == NULL) {
        printf("Entry not found\n");
    } else {
        printf("\nStudent Id: %d | Math: %d | Science: %d\n", temp->id, temp->math, temp->science);
    }
}

int user_choice(void) {
    int c;
    printf("\n--- Menu ---\n1. Insert Entry\n2. Delete Entry\n3. Display Entry\n4. Exit\n");
    printf("Selected Choice: ");
    scanf("%d", &c);
    return c;
}

node* create(void) {
    node *new_node = (node*)malloc(sizeof(node));
    printf("Enter Id: ");
    scanf("%d", &new_node->id);
    printf("Enter Math Marks: ");
    scanf("%d", &new_node->math);
    printf("Enter Science Marks: ");
    scanf("%d", &new_node->science);
    new_node->next = NULL;
    new_node->prev = NULL;
    return new_node;
}

void display(node *list) {
    node *ptr = list;
    node *last = NULL;
    if (list == NULL) return;

    printf("\nForward:\n");
    while (ptr != NULL) {
        printf("ID: %d | Math: %d | Science: %d\n", ptr->id, ptr->math, ptr->science);
        last = ptr;
        ptr = ptr->next;
    }

    printf("Reverse:\n");
    ptr = last;
    while (ptr != NULL) {
        printf("ID: %d | Math: %d | Science: %d\n", ptr->id, ptr->math, ptr->science);
        ptr = ptr->prev;
    }
}

node* fiveentries(node *list) {
    node *current = NULL;
    for (int i = 0; i < 5; i++) {
        node *new_node = create();
        if (list == NULL) {
            list = new_node;
        } else {
            current->next = new_node;
            new_node->prev = current;
        }
        current = new_node;
    }
    return list;
}
