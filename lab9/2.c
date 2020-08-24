/*Implement an Insert Back function to insert an element at the end(back) of the linked list. */

#include <stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node
{
    int data;
    node *next;
};

void display(node *temp);
node *create_list();
node *insert_back(node *temp, int key);

int main()
{
    node *head=NULL;
    head=create_list();
    display(head);
    head=insert_back(head,5);
    printf("\n");
    display(head);
    return 0;
}

node *insert_back(node *temp, int key)
{
    if(temp==NULL)
    {
        node *new_head;
        new_head=(node*)malloc(sizeof(node));
        new_head->data=key;
        new_head->next=temp;
        return new_head;
    }
    node *head=temp;
    while(temp->next)
    {
        temp=temp->next;
    }
    node *new_node;
    new_node=(node*)malloc(sizeof(node));
    new_node->data=key;
    new_node->next=NULL;
    temp->next=new_node;

    return head;
}

node *create_list()
{
    node *a, *b, *c, *d;
    a=(node*)malloc(sizeof(node));
    b=(node*)malloc(sizeof(node));
    c=(node*)malloc(sizeof(node));
    d=(node*)malloc(sizeof(node));
    a->data=10;
    a->next=b;
    b->data=20;
    b->next=c;
    c->data=30;
    c->next=d;
    d->data=40;
    d->next=NULL;
    return a;
}
void display(node *temp)
{

    while(temp!=NULL)
    {
        printf("%p\t %d\t %p\n ", temp, temp->data);

        temp=temp->next;
    }
}
