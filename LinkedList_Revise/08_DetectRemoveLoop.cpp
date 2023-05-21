/*

    // DETECT AND REMOVE LOOP
    TC - N
    SC - 1

Node* floyd(Node* head)
{
    if(head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;
    while(slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if(fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if(slow == fast)
        {
            return slow;
        }
    }
    return NULL;
}


Node* StartingNode(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }
    Node* intersection = floyd(head);
    Node* slow = head;

    while(intersection != slow)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }
    Node* startLoop = StartingNode(head);

    if(startLoop == NULL)
    {
        return NULL;
    }

    Node* temp = startLoop;
    while(temp->next != startLoop)
    {
        temp =  temp->next;
    }
    temp->next  = NULL;
    
}


*/