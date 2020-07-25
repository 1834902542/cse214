## Double way circular linked list


## Introduction

Circular Doubly Linked List: Circular doubly linked list is a more complexed type of data structure in which a node contains pointers to its previous node as well as the next node. Circular doubly linked list doesn't contain NULL in any of the node.
Circular Doubly Linked List has properties of both doubly linked list and circular linked list in which two consecutive elements are linked or connected by previous and next pointer and the last node points to first node by next pointer and also the first node points to last node by previous pointer.
We can say easily Circular Doubly Linked Lists are used for implementation of advanced data structures like Fibonacci Heap.

Follow operation in our code:
Implementation of double way circular linked list in data structure may provide same of the following operations:

*	Head.
*	Tail.
*	Empty.
*	Size.
*	Front.
*	Back.
*	Push Front.
*	Push Back.
*	Pop Front.
*	Pop Back.
*	Clear.


## Uses

*	A circular doubly linked list is one which has both the successor pointer and predecessor pointer in circular manner. 
*	The main advantage of using a circular doubly linked list is that it makes search operation twice as efficient.
*	Doubly linked list can be used in navigation systems where both front and back navigation is required. 
*	It is used by browsers to implement backward and forward navigation of visited web pages i.e. back and forward button.
*	It is also used by various application to implement Undo and Redo functionality.
*	It can be traversed from both the directions i.e. from head to tail or from tail to head. 
*	Managing songs playlist in media player applications and managing shopping cart in online shopping.





## Circular doubly link_list structure a node.

Node attitude(properties) of Circular doubly link_list.

    
    int number;
    
    node *next;
    
    node *previous;
    


## Circular doubly link_list insert Head.
Creat a list and then set(connected) circuler doubly link list head.  

    newNode->number = number;
    
    newNode->next = newNode;
    
    newNode->previous = newNode;
    
    head = newNode;
    
    tail = newNode;
    
 ## Circular doubly link_list insert tail.
 
Creat a list and then set(connected) tail circuler doubly link list.  
 
    node *newNode = (node *) malloc(sizeof(node));

    newNode->number = number;
    
    newNode->next = newNode;
    
    newNode->previous = newNode;
    
    tail->next = newNode;
    
    newNode->next = head;
    
    newNode->previous = tail;
    
    tail = newNode;
    
    head->previous = tail;
    
  ## Circular doubly link_list insert Mid.
  Creat a list and then search position(any) and set(cannected) circuler doubly link list.  
  
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
                
## Circular doubly link_list pop(Delete) head.
head node count and selection this node fee this list .
    
    node *temp = head;

    tail->next = head->next;
    
    head = head->next;
    
    head->previous = tail;

    free(temp);
    
## Circular doubly link_list pop(Delete) tail.
Travers and identify tail node and this node fee

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

## Circular doubly link_list count length
 
 do
    {
        count++;
        
        current = current->next;
        
    }
    
    while(current != head);
    
 Travers and conder count this list namber of item .
 
 ## Circular doubly link_list print
 
 Circular link list benefit of two way Travers head/tail.
 
 
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
  ## Serch iteam Circular doubly.
  
  Travers and matching value. result yes or no . result yeas to break and No show index and  continue.
  
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
    
    
    
 ##exit 
