/*Implement an Insert At function to insert an element at the nth index of the linked list.
Take input n and value from user.(check index out of range)[let for the first element n=1]*/

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
node *insert_at(node *temp, int pos, int value);
int main()
{
    node *head=NULL;
    head=create_list();
    display(head);
    head=insert_at(head,1,5);
    printf("\n");
    display(head);
    return 0;
}

node *insert_at(node *temp, int pos, int value)
{
    node *head=temp, *prev, *new_node;
    int i=2;
    if(pos==1)
    {
        new_node=(node*)malloc (sizeof(node));
        new_node->data=value;
        new_node->next=temp;
        return new_node;
    }
    while(temp)
    {
        prev=temp;
        if(i==pos)
            new_node=(node*)malloc(sizeof(node));
        new_node->data=value;
        new_node->next=temp->next;
        prev->next=new_node;
        return head;
    }
    i++;
    temp=temp->next;
    printf("Invalid Index\n");
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
