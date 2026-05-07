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
#include<Stdio.h>
#include<stdlib.h>
struct student{
    int id;
    int math;
    int science;
    struct student *next;
};
typedef struct student node;
void create(node *list);
void display(node *list);
void freelist(node *list);
node *head = NULL;
int main()
{
    create(head);
    display(head);
    freelist(head);
}
void freelist(node *list)
{
    node *nextnode;
    node *ptr = list;
    while(ptr!=NULL)
    {
        nextnode = ptr->next;
        free(ptr);
        ptr = nextnode;
    }
}
void display(node *list)
{
    node *ptr = list;
    if(ptr==NULL)
    {
        printf("No Entries to display");
    }
    while (ptr!=NULL)
    {
        printf("Student ID: %d |Math: %d |Science: %d\n",ptr->id, ptr->math, ptr->science);
        ptr = ptr->next;
    }
}
void create(node *list)
{
    node *new = NULL;
    node *current = NULL;
    int inid;
    while (1)
    {
        printf("Enter Id: ");
        scanf("%d",&inid);
        if(inid==-1) break;
        new = malloc(sizeof(node));
        new->id = inid;
        printf("Enter Math Marks: ");
        scanf("%d",&new->math);
        printf("Enter Science Marks: ");
        scanf("%d",&new->science);
        new->next = NULL;
        if(head == NULL)    head = new;
        else                current->next = new;
        current = new;   
    }   
}
