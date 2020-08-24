/*Implement an Insert After function to insert an element after a node with value key of the linked list.
Take input key and new node value from user.(check index out of range). */

#include <stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node{
int data;
node *next;
};

  void display(node *temp);
  node *create_list();
 node *insert_after(node *temp, int key, int value);
  int main()
  {
      node *head=NULL;
      head=create_list();
      display(head);
      head=insert_after(head,1,10);
      printf("\n");
      display(head);
      return 0;
  }

  node *insert_after(node *temp, int key, int value)
  {
      node *head=temp;
      while(temp)
      {
          if(temp->data==key){
            node *new_node=(node*)malloc (sizeof(node));
          new_node->data=value;
           new_node->next=temp->next;
                   temp->next=new_node;
                    return head;
          }
          temp=temp->next;
      }
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
