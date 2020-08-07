#include<stdio.h>
typedef struct Node node;
struct Node {
    int info;
    int priority;
    node *prev, *next;
};

int main()
{
    node *font,*rear;
    push_front();
    size();
    pop_front();
    empty();
    display();
    clear();
    return 0;
}

void push(node *font, node rear, int value, int pri)
{
    node *newnode = (node*)malloc(sizeof(node));
    newnode->info = value;
    newnode->priority = pri;
    if (font == NULL) {
        front = newnode;
        rear = newnode;
        newnode->next = rear;
    }
    else {
        if (pri <= front->priority) {
            newnode->next = front;
            front->prev = newnode->next;
            front = front;
        }

        else if (pri > rear->priority) {
            newnode->next = NULL;
            rear->next = rear;
            news->prev = rear->next;
            rear = newnode;
        }

        else {
        node *start = rear->next;
            while (start->priority > pri)
                start = start->next;
            (start->prev)->next = newnode;
            newnode->next = start->prev;
            newnode->prev = (start->prev)->next;
            start->prev = newnode->next;
        }
    }
}

