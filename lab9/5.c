/* Implement an “Insert Before” function to insert an element
before a node with value ‘key’of the Linked List. Take input ‘key’
 and new node value from user. (Check index out of range) */

#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
struct Node
{
    int data;
    node *next;
};

node* create_list();
void display(node *temp);
node* insert_before(node *temp, int key, int value);

int main()
{
    int key;
    node *head = NULL;

    head = create_list();
    display(head);

    scanf("%d",&key);

    head = insert_before(head, key, 100);
    display(head);

    return 0;
}

node* insert_before(node *temp, int key, int value)
{
    node *prev, *head = temp;
    int i = 0;
    int j = 0;
    while(temp)
    {
        if(temp->data == key)
        {
            if(temp == head)
            {
                node *new_node = (node*) malloc(sizeof(node*)) ;
                new_node->data = value;
                new_node->next = temp;
                i++;
                return new_node;
            }
            else
            {
                node *new_node = (node*) malloc(sizeof(node*));
                new_node->data= value;
                new_node->next = temp;
                prev->next = new_node;
                j++;
                return head;
            }
        }
        prev = temp;
        temp = temp->next;
    }
    if(i < 1 || i > 4 || j < 1 || j > 4)
    {
        printf("Index out of range\n");
        printf("Element Not Found\n");
    }
    else
        printf("Element Not Found\n");
    return head;
}

node* create_list()
{
    node *a, *b, *c, *d;

    a = (node *) malloc(sizeof(node));
    b = (node *) malloc(sizeof(node));
    c = (node *) malloc(sizeof(node));
    d = (node *) malloc(sizeof(node));

    a->data = 10;
    a->next = b;
    b->data = 20;
    b->next = c;
    c->data = 30;
    c->next = d;
    d->data = 40;
    d->next = NULL;

    return a;
}

void display(node *temp)
{
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
