## Circular link_list structure a node.
struct Node

{

    int number;
    
    node *next;
    
    node *previous;
    
};

## Circular link_list insert Head.

    newNode->number = number;
    
    newNode->next = newNode;
    
    newNode->previous = newNode;
    
    head = newNode;
    
    tail = newNode;
    
