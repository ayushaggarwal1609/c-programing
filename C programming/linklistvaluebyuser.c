#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void insertAtBeginning(struct node **head_ref, int new_data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data = new_data;
    newNode->next = *head_ref;
    *head_ref = newNode;
}

void display(struct node *head)
{
    struct node *temp = head;

    if (temp == NULL)
    {
        printf("Linked List is empty.\n");
        return;
    }

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct node *head = NULL;
    int n, value, i;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter data for node %d: ", i);
        scanf("%d", &value);

        insertAtBeginning(&head, value);
    }

    printf("\nLinked List:\n");
    display(head);

    return 0;
}