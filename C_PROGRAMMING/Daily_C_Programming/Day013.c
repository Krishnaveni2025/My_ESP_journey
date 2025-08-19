// Contact Book application using C Complete Source Code

#include <stdio.h>
#include <string.h>

// Max number of contacts
#define MAX 100

// Parallel arrays to store names and phones
char names[MAX][100];
char phones[MAX][15];

// Number of contacts
int count = 0;

// Helper to remove newline character from fgets
void trimNewline(char *str)
{
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';
}

int isValidPhone(const char *phone)
{
    int len = strlen(phone);

    // Remove newline if present (for fgets compatibility)
    if (phone[len - 1] == '\n')
        len--;

    // Length must be between 7 and 14
    if (len < 7 || len > 14)
        return 0;

    // Must contain only digits
    for (int i = 0; i < len; i++)
    {
        if (phone[i] < '0' || phone[i] > '9')
            return 0;
    }

    return 1;
}

// Add new contact
void addContact()
{
    if (count >= MAX)
    {
        printf("Contact book is full!\n");
        return;
    }

    printf("Enter name: ");
    fgets(names[count], sizeof(names[count]), stdin);
    trimNewline(names[count]);

    while (1)
    {
        printf("Enter phone number: ");
        fgets(phones[count], sizeof(phones[count]), stdin);
        trimNewline(phones[count]);

        if (isValidPhone(phones[count]))
        {
            break; // valid number
        }
        else
        {
            printf("Invalid phone number! It must be 7-14 digits and contain only numbers.\n");
        }
    }

    printf("Contact added successfully.\n");
    count++;
}

// Display all contacts
void displayContacts()
{
    if (count == 0)
    {
        printf("No contacts to display.\n");
        return;
    }

    printf("\n--- Contact List ---\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d. Name: %s, Phone: %s\n", i + 1, names[i], phones[i]);
    }
}

// Recursive search by name
int searchByName(int index, const char *query)
{
    if (index == count)
        return -1;
    if (strcmp(names[index], query) == 0)
        return index;
    return searchByName(index + 1, query);
}

// Recursive search by phone
int searchByPhone(int index, const char *query)
{
    if (index == count)
        return -1;
    if (strcmp(phones[index], query) == 0)
        return index;
    return searchByPhone(index + 1, query);
}

// Delete contact using efficient swap-from-last method
void deleteContact()
{
    char query[100];
    int index;

    printf("Enter the name to delete: ");
    fgets(query, sizeof(query), stdin);
    trimNewline(query);

    index = searchByName(0, query);
    if (index == -1)
    {
        printf("Contact not found.\n");
        return;
    }

    // If it's the last contact, just reduce count
    if (index == count - 1)
    {
        count--;
    }
    // Else, copy last to current index and reduce count
    else
    {
        strcpy(names[index], names[count - 1]);
        strcpy(phones[index], phones[count - 1]);
        count--;
    }

    printf("Contact deleted successfully.\n");
}

// Main menu
int main()
{
    int choice;
    char query[100];
    int index;

    while (1)
    {
        printf("\n--- Contact Book Menu ---\n");
        printf("1. Add Contact\n");
        printf("2. Search by Name\n");
        printf("3. Search by Phone\n");
        printf("4. Display All Contacts\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear leftover newline from input buffer

        switch (choice)
        {
        case 1:
            addContact();
            break;

        case 2:
            printf("Enter name to search: ");
            fgets(query, sizeof(query), stdin);
            trimNewline(query);
            index = searchByName(0, query);
            if (index == -1)
                printf("Contact not found.\n");
            else
                printf("Found: Name: %s, Phone: %s\n", names[index], phones[index]);
            break;

        case 3:
            printf("Enter phone number to search: ");
            fgets(query, sizeof(query), stdin);
            trimNewline(query);
            index = searchByPhone(0, query);
            if (index == -1)
                printf("Contact not found.\n");
            else
                printf("Found: Name: %s, Phone: %s\n", names[index], phones[index]);
            break;

        case 4:
            displayContacts();
            break;

        case 5:
            deleteContact();
            break;

        case 6:
            printf("Exiting Contact Book. Goodbye!\n");
            return 0;

        default:
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}