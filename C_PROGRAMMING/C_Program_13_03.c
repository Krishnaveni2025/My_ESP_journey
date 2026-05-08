/*
        C LEVEL 13 - Problem 03
        Question:
                  Create a sample link list about 5 entries using the following structure
                  insert a new entry before or after given a given id.
                  Delete an entry of a given id.
                  Menu Items
                  1. Insert Entry
                  2. Delete Entry
                  3. Display List
                  3. Exit
        ********************Hint**********************************
        struct student{
          int id;
          int math;
          int science;
          struct student *next;
        }
*/
#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int math;
    int science;
    struct student *next;
};

typedef struct student node;
int user_choice(void);
node* fiveentries(node *list);
node* insertafter(node *list);
node* delete_entry(node *list);
void displayentry(node *list);
node* find_Entry(node *list, int k);
int main()
{
    node *head = NULL;
    head = fiveentries(head);
    int k;
    while(1)
    {
        k = user_choice();
        if(k == 1)
        {
            head = insertafter(head);
        }
        else if(k == 2)
        {
            head = delete_entry(head);
        }
        else if(k == 3)
        {
            displayentry(head);
        }
        else if(k == 4)
        {
            printf("\nExiting");
            break;
        }
    }
    return 0;
}
node* delete_entry(node *list)
{
    int k;
    printf("Delete Entry\n Enter Id: ");
    scanf("%d",&k);
    node *d;
    if(list->id == k)
    {
        d = list->next;
        free(list);
        list = d->next;
    }
    else
    {
        node *n1 = find_Entry(list->next, k);
        if(n1 == NULL)
        {
            printf("\nEntry Not Found Deletion Failed");
        }
        d =  n1->next;
        free(n1);
        n1 = d;
    }
    return list;
}

void displayentry(node *list)
{
    int d;
    printf("\nEnter Id: ");
    scanf("%d",&d);
    if(list->id == d)
    {
        printf("Id: %d| Math: %d| Science: %d\n",list->id, list->math, list->science);
    }
    else
    {
        node *entry = find_Entry(list, d);
        if(entry == NULL)
        {
            printf("Entry not found\n");
        }
        else
        {
            printf("Id: %d| Math: %d| Science: %d\n", entry->id, entry->math, entry->science);
        }
    }
}
node* find_Entry(node *list, int k)
{
    node *temp = list;
    while(temp!=NULL)
    {
        if(temp->id == k)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}
node* insertafter(node *list)
{
    int k;
    node *temp;
    printf("Insertion\nEnter Id(insert after): ");
    scanf("%d",&k);
    if(list->id == k)
    {
        temp = list;
    }
    else
    {
        temp = find_Entry(list->next, k);
        if(temp == NULL)
        {
            printf("Entry not found\n");
            return list;
        }
    }
    node *n = malloc(sizeof(node));
    printf("Enter New Id: ");
    scanf("%d",&n->id);
    printf("Enter Math Marks: ");
    scanf("%d",&n->math);
    printf("Enter Science Marks: ");
    scanf("%d",&n->science);
    n->next = temp->next;
    temp->next = n;
    printf("\nInsertion Succesfull");
    return list;
}
node* fiveentries(node *list)
{
    node *new = NULL;
    node *current = NULL;
    for(int i = 0; i<5; i++)
    {
        new = (node *)malloc(sizeof(node));
        printf("Enter Id: ");
        scanf("%d",&new->id);
        printf("Ennter Math Marks: ");
        scanf("%d",&new->math);
        printf("Enter Science Marks: ");
        scanf("%d",&new->science);
        new->next = NULL;
        if(list==NULL)
        {
            list = new;
        }
        else
        {
            current->next = new;
        }
        current = new;
    }
    return list;
}
int user_choice(void)
{
    int c;
    printf("\nMenu Items\n1. Insert Entry\n2. Delete Entry\n3. Display Entry\n4. Exit\n");
    printf("Selected Choice: ");
    scanf("%d",&c);
    return c;
}
