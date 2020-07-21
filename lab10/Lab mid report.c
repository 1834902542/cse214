#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node
{
    int number;
    node *next;
    node *previous;
};
node *head = NULL, *tail = NULL;
void pushfront(int number);
void pushback(int number);
void popfront();
void popback();
void Head();
void Tail();
void print();
int size();
void search(int value);
void empty();
int main()
{
    int choice =0,x,y,z;
    while(choice != 11)
    {
        printf("\n\nDouble way circular Linked List :\n\n");
        printf("1.Push font\n");
        printf("2.Push Back\n");
        printf("3.Pop font\n");
        printf("4.Pop Back\n");
        printf("5.Head\n");
        printf("6.Tail\n");
        printf("7.Size\n");
        printf("8.Search\n");
        printf("9.Show\n");
        printf("10.Empty\n");
        printf("11. clear\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter the value: ");
            scanf("%d",&x);
            pushfront(x);
            break;
        case 2:
            printf("Enter the value: ");
            scanf("%d",&x);
            pushback(x);
            break;
        case 3:
            popfront();
            break;
        case 4:
            popback();
            break;
        case 5:
            printf("Head Node \n");
            Head();
            break;
        case 6:
            printf("Tail Node \n");
            Tail();
            break;
        case 7:
            size();
            break;
        case 8:
            scanf("%d",&x);
            search(x);
            break;
        case 9:
            print();
            break;
        case 10:
            empty();
            break;
        case 11:
            exit(0);
            break;
        default:
            printf("Please enter valid choice..");
        }
    }
    return 0;
}
void Head()
{

    if(head==NULL)
    {
        printf("list empty\n");
    }
    else
    {
        printf("%d ",head->number);
    }
}
void Tail()
{
    if(tail==NULL)
    {
        printf("list empty\n");
    }
    else
    {
        printf("%d ",tail->number);
    }
}
void pushfront(int number)
{
    node *newNode = (node *) malloc(sizeof(node));

    newNode->number = number;
    newNode->next = newNode;
    newNode->previous = newNode;

    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        newNode->previous = tail;
        head->previous = newNode;
        tail->next = newNode;
        head = newNode;
    }
    printf("\nNode inserted\n");
}
void pushback(int number)
{
    node *newNode = (node *) malloc(sizeof(node));

    newNode->number = number;
    newNode->next = newNode;
    newNode->previous = newNode;

    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->next = head;
        newNode->previous = tail;
        tail = newNode;
        head->previous = tail;
    }
    printf("\nNode inserted\n");
}
void popfront()
{
    if(head==NULL)
        return;

    node *temp = head;

    tail->next = head->next;
    head = head->next;
    head->previous = tail;

    free(temp);
    printf("\n");
}
void popback()
{
    if(head==NULL)
        return;
    node *temp = head;
    node *current = head;

    while(current->next != head)
    {
        temp = current;
        current = current->next;
    }
    temp->next = head;
    tail = temp;
    head->previous = tail;
    free(current);
    printf("\n");
}
void print()
{
    int x;
    printf("Font list  choice 1\nBack list choice Any number\n");
    scanf("%d",&x);
    if(x!=0)
    {
        printf("Forward order print:\n");
        if(head==NULL)
        {
            printf("list Empty\n");
            return;
        }
        node *current = head;
        do
        {
            printf("%d ", current->number);
            current = current->next;
        }
        while(current != head);
    }
    if(x==0)
    {
        printf("Forward order print:\n");
        if(head==NULL)
        {
            printf("list Empty\n");
            return;
        }
        node *current = tail;
        do
        {
            printf("%d ", current->number);
            current = current->previous;
        }
        while(current != tail);
        printf("\n");
    }
}
int size()
{
    if(head==NULL)
        return 0;

    int count = 0;
    node *current = head;
    do
    {
        count++;
        current = current->next;
    }
    while(current != head);
    printf("Total list length:  %d :  \n",count);
    return count;

}
void search(int value)
{
    int count=0;
    if(head==NULL)
    {
        return;
    }
    node *current = head;
    do
    {
        count++;
        if(current->number==value)
        {
            printf("%d ", count);
            break;
        }
        current = current->next;
    }
    while(current != head);
    printf("\n");
}
void empty()
{
    head=NULL;
    tail=NULL;
    print("List empty ' please again inserted value ' \n");
}
