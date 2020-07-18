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
    
 ## Circular link_list insert tail.
 
    node *newNode = (node *) malloc(sizeof(node));

    newNode->number = number;
    
    newNode->next = newNode;
    
    newNode->previous = newNode;
    
    tail->next = newNode;
    
    newNode->next = head;
    
    newNode->previous = tail;
    
    tail = newNode;
    
    head->previous = tail;
    
  ## Circular link_list insert Mid.
    
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
