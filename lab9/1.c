/*Implement an Insert Front function to insert an element at the beginning(front)linked list. */
#include <stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node{
    int data;
    node *next;
};
  void display(node *temp);
  node *create_list();
  node *insert_front(node *temp, int key);
  int main()
  {
      node *head=NULL;
      head=create_list();
      display(head);
      head=insert_front(head,0);
      printf("\n");
      display(head);
      return 0;
  }

 node *insert_front(node *temp, int key)
  {
      node *new_head;
      new_head=(node*) malloc (sizeof(node));
      new_head->data=key;
      new_head->next=temp;
      return new_head;
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
