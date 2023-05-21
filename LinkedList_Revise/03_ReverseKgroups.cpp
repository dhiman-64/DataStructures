/*
    // Recusive Approach
    TC - N
    SC - N/k = N ( Rescusive Stack )

Node* kReverse(Node* head, int k) {

    if(head == NULL) 
    {
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    int count = 0;

    while( curr != NULL && count < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    if(forward != NULL)
    {
        head->next = kReverse(forward , k);
    }
    return prev;
}

*/