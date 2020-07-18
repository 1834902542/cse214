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
void inserthead(int number);
void inserttail(int number);
void insertmiddle(int number, int position);
void deletehead();
void deletetail();
void deletemiddle(int posision);
void print();
int length();
void search(int value);
void emptycheck();

int main()
{
    int choice =0,x,y,z;
    while(choice != 11)
    {

        printf("\n\nDouble way circular Linked List :\n\n");
        printf("1.Push in font\n");
        printf("2.Push at Back\n");
        printf("3.Push any position\n");
        printf("4.Pop from font\n");
        printf("5.Pop from Back\n");
        printf("6.Pop any\n");
        printf("7.Search\n");
        printf("8.length\n");
        printf("9.Show\n");
        printf("10.Empty(check)\n");
        printf("11. clear\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter the value: ");
            scanf("%d",&x);
            inserthead(x);
            break;
        case 2:
            printf("Enter the value: ");
            scanf("%d",&x);
            inserttail(x);
            break;

        case 3:
            printf("Enter the value and position: ");
            scanf("%d %d",&x,&y);
            insertmiddle(x,y);
            break;
        case 4:
            deletehead();
            break;
        case 5:
            deletetail();
            break;
        case 6:
            printf("position \n");
            scanf("%d",&x);
            deletemiddle(x);
            break;
        case 7:
            scanf("%d",&x);
            search(x);
            break;
        case 8:
            length();
            break;
        case 9:
            print();
            break;
        case 10:
            emptycheck();
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

// Insert a node at front of a circular doubly linked list
void inserthead(int number)
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
void inserttail(int number)
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
void insertmiddle(int number, int position)
{
    if(position==1)
    {
        inserthead(number);
        return;
    }
    else if(position>1 && head!=NULL)
    {
        node *current = head;
        node *temp = (node *) malloc(sizeof(node));
        int count = 0;

        do
        {
            count++;
            temp = current;
            current = current->next;
        }
        while(current->next != head && count<position-1);

        if(count==position-1)
        {
            if(temp==tail)
                inserttail(number);
            else
            {
                node *newNode = (node *) malloc(sizeof(node));
                newNode->number = number;

                temp->next = newNode;
                newNode->next = current;
                newNode->previous = temp;
                current->previous = newNode;

            }
            printf("\n");
            return;
        }

    }
    printf("Position does not exist!\n\n");
}
void deletehead()
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
void deletetail()
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
void deletemiddle(int position)
{
    if(head==NULL)
        return;

    if(position==1)
    {
        deletehead();
        return;
    }
    node *current = head;
    node *temp;
    int count = 0;
    do
    {
        count++;
        temp = current;
        current = current->next;
    }
    while(current->next != head && count<position-1);

    if(count==position-1)
    {
        if(current==tail)
        {
            deletetail();
            return;
        }
        temp->next = current->next;
        current->next->previous = temp;
        free(current);
        return;
    }
    printf("Position (%d) does not exist!\n", position);
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
        } // also can check `tail==NULL`. both are same
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
int length()
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
void emptycheck()
{
    int count=0;
    if(head==NULL)
    {
        printf("List Empty\n");
        return;
    }
    else
    {
        printf("List Not Empty\n");
    }
    printf("\n");
}
