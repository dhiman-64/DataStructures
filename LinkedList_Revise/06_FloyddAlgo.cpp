

/*
        // Floyd detection Loop
        TC - N
        SC - 1

Node* Floyd(Node* head)
{
    if( head == NULL) return NULL;

    Node* fast = head;
    Node* slow = head;
    while(slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if(fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if(slow == fast )
        {
            return true;
        }
    }
    return false;    
}

*/