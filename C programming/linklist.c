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
    newNode->data = new_data;
    newNode->next = *head_ref;
    *head_ref = newNode;
}
void display(struct node *head)
{
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main()
{
    struct node *head = NULL;
    insertAtBeginning(&head, 30);
    insertAtBeginning(&head, 20);

    printf("Original Linked List:\n");
    display(head);
    insertAtBeginning(&head, 10);

    printf("Linked List after inserting 10 at the beginning:\n");
    display(head);

    return 0;
}
