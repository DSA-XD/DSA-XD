#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

int max_size;
Node *front = NULL;
Node *rear = NULL;

void view()
{
    if (front == rear == NULL)
    {
        printf(" The linked list is empty.");
        return;
    }
    else
    {
        Node *ptr = (Node *)malloc(sizeof(Node));
        ptr = front;
        printf("The QUEUE is - ");
        while (ptr != rear)
        {
            printf("%d ", &ptr->data);
        }
    }
}

void insertion()
{
    int x = 0;
    Node *ptr = (Node *)malloc(sizeof(Node));
    printf("Enter the element - ");
    scanf("%d", &ptr->data);
    ptr->next = NULL;
    if (front == NULL && rear == NULL)
    {
        front = rear = ptr;
        x++;
    }
    else if (x == max_size - 1)
    {
        printf("Overflow");
    }
    else
    {
        rear->next = ptr;
        ptr->next = NULL;
        rear = ptr;
    }
}

void deletion()
{
    if (front->data == rear->data == NULL)
    {
        printf("UNDERFLOW");
    }
    else
    {
        printf("The %d", front->data);
        front = front->next;
        // front = ;
    }
}

int main()
{
    printf("Enter the size of the array - ");
    scanf("%d", &max_size);
    int p = 1;
    // scanf("%d",&p);
    while (p)
    {
        printf("*********MENU********\n1. Insertion\n2. Deletion\n3. View the queue\n4. Exit\nEnter your choice - ");
        int a;
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            insertion();
            break;
        case 2:
            deletion();
            break;
        case 3:
            view();
            break;
        case 0:
            p = 0;
            break;
        default:
            printf("INVALID INPUT");
            break;
        }
    }
    return 0;
}