## Circular doubley link_list structure a node.

Node attitude(properties) of Circular doubley link_list.

    
    int number;
    
    node *next;
    
    node *previous;
    


## Circular doubley link_list insert Head.
Creat a list and then set(connected) circuler doubley link list head.  

    newNode->number = number;
    
    newNode->next = newNode;
    
    newNode->previous = newNode;
    
    head = newNode;
    
    tail = newNode;
    
 ## Circular doubley link_list insert tail.
 
Creat a list and then set(connected) tail circuler doubley link list.  
 
    node *newNode = (node *) malloc(sizeof(node));

    newNode->number = number;
    
    newNode->next = newNode;
    
    newNode->previous = newNode;
    
    tail->next = newNode;
    
    newNode->next = head;
    
    newNode->previous = tail;
    
    tail = newNode;
    
    head->previous = tail;
    
  ## Circular doubley link_list insert Mid.
  Creat a list and then search position(any) and set(cannected) circuler doubley link list.  
  
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
                
## Circular doubley link_list pop(Delete) head.
head node count and selection this node fee this list .
    
    node *temp = head;

    tail->next = head->next;
    
    head = head->next;
    
    head->previous = tail;

    free(temp);
    
## Circular doubley link_list pop(Delete) tail.
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

## Circular doubley link_list count length
 
 do
    {
        count++;
        
        current = current->next;
        
    }
    
    while(current != head);
    
 Travers and conder count this list namber of item .
 
 ## Circular doubley link_list print
 
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
  ## Serch iteam Circular doubley.
  
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
