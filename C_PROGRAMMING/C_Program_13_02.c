/*
        C LEVEL 13 - Problem 02
        Question:
                  Create a sample link list about five entries using the following structure
                  insert a new entry before or after given a given id.
                  Menu Items
                  1. Insert Entry
                  2. Display List
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
node* fiveentries(node *list);
node* insertafter(node *list);
node* find_entry(node *list, int k);
void displayentry(node *list);
int user_choice(void);
int main()
{
    node *head = NULL;
    head = fiveentries(head);
    while(1)
    {
        int k = user_choice();
        if(k == 1)
        {
            printf("\nInsertion");
            head = insertafter(head);
        }
        else if(k == 2)
        {
            printf("\nDisplay Entry\n");
            displayentry(head);
        }
        else if(k == 3)
        {
            printf("\nExiting");
            break;
        }
        else
        {
            printf("Enter Valid Choice\n");
        }
    }
    return 0;
}
node* insertafter(node *list)
{
    int k;
    printf("\nEnter Id: ");
    scanf("%d",&k);
    node *temp;
    if(list->id == k)
    {
        temp->next = list;
        list = temp;
    }
    else
    {
        temp = find_entry(list,k);
        if(temp==NULL)
        {
            printf("\nEntry not found");
        }
        else 
        {
            node *n = malloc(sizeof(node));
            printf("\nEnter Id: ");
            scanf("%d",&n->id);
            printf("Enter Math Marks: ");
            scanf("%d",&n->math);
            printf("Enter Science Marks: ");
            scanf("%d",&n->science);
            n->next = temp->next;
            temp->next = n;
            printf("Inserted Successfully");
        }
    }
    return list;
}
node* find_entry(node *list, int k)
{
    node *temp = list;
    while(temp != NULL)
    {
        if(temp->id == k)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
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
        node *entry = find_entry(list, d);
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
int user_choice(void)
{
    int k;
    printf("\nMenu Items:\n1. Insert Entry\n2. Display Entry\n3. Exit");
    printf("\nSelect Choice: ");
    scanf("%d",&k);
    return k;
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
        printf("Enter Math Marks: ");
        scanf("%d",&new->math);
        printf("Enter Science Marks: ");
        scanf("%d",&new->science);
        new->next = NULL;
        if(list == NULL)    list = new;
        else                current->next = new;
        current = new;
    }   
    return list;
}
