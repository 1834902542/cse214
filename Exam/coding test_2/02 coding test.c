#include <stdio.h>
#include <stdlib.h>
typedef struct Node node;
struct Node
{
    int data;
    node *next;
};

void insert_back(node **temp, int data)
{
    node *new_node = (struct Node*)malloc(sizeof(struct Node));
    node* last = *temp;

    new_node->data = data;
    new_node->next = NULL;

    if (*temp == NULL)
    {
        *temp = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return;
}

void delete_value(node **ref, int value)
{
    node *temp = *ref, *prev;

    if (temp != NULL && temp->data == value)
    {
        *ref = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != value)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
        return;

    prev->next = temp->next;

    free(temp);
}

void deleteNode(node **ref, int position)
{

    if (*ref == NULL)
        return;

    node* temp = *ref;

    if (position == 0)
    {
        *ref = temp->next;
        free(temp);
        return;
    }

    for (int i=0; temp!=NULL && i<position-1; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL)
        return;
    node *next = temp->next->next;
    free(temp->next);

    temp->next = next;
}

void back_delete(node **temp)
{
    node *ptr,*ptr1;
    node *head=*temp;
    if(head == NULL)
    {
        printf("\nlist is empty");
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nOnly node of the list deleted ...");
    }

    else
    {
        ptr = head;
        while(ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr ->next;
        }
        ptr1->next = NULL;
        free(ptr);
        printf("\n Deleted Node");
    }
}


void display(node *head)
{
    node *temp=head;
    while (temp != NULL)
    {
        printf(" %d ", temp->data);
        temp = temp->next;
    }
}
void merge(node *temp, node **temp2)
{
    node *current = temp, *current2 = *temp2;
    node *newnode1, *newnode2;
    while (current != NULL && current2 != NULL)
    {

        newnode1 = newnode1->next;
        newnode2 = newnode2->next;
        current2->next = newnode1;
        current->next = newnode2;
        current = newnode1;
        current2 = newnode2;
    }

    *temp2 = current;
}
int main()
{
    node *head = NULL,*head2;

    insert_back(&head, 1);
    insert_back(&head, 4);
    insert_back(&head, 2);
    insert_back(&head, 3);
    printf("Linked list: ");
    display(head);

    delete_value(&head, 1);
    deleteNode(&head, 2);
    back_delete(&head);

    display(head);

    insert_back(&head2, 1);
    insert_back(&head2, 4);
    insert_back(&head2, 2);
    insert_back(&head2, 3);
    printf("Linked list: ");
    display(head);
    merge(head,&head2);
}
