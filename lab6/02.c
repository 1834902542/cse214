/*Define a function to display(only value for each node)the complete linked list and do the same as problem 1(Don't use DMA)*/
#include<stdio.h>
typedef struct Node node;
struct Node
{
    int value;
    node *next;
};
void display_linked_list(node *temp);
int main()
{
    node a, b, c;
    node *head;
    node *temp;
    head=&a;
    a.value=2;
    a.next=&b;
    b.value=4;
    b.next=&c;
    c.value=6;
    c.next=NULL;
    temp=head;
    display_linked_list(head);
    return 0;
}

void display_linked_list(node *temp)
{
    while(temp!=NULL)
    {
        printf(" %p\t %d \t%p\n ", temp, temp->value, temp->next);
        temp=temp->next;
    }
    return 0;
}

