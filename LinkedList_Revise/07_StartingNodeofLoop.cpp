/*

Node* floyd(Node* head)
{
    Node* slow = head;
    Node* fast = head;
    
    while(slow != NULL && fast != NULL)
    {

        if(head == NULL)
        {
            return NULL;
        }

        fast = fast->next;
        if(fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}

Node* getStarting(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }
    Node* intersection = floyd(head);
    Node* slow = head;
    while(slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

*/