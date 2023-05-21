

/*
    // Sorted Linked list
    TC - N
    SC - 1 


Node* uniqueSortedList(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }
    Node* curr = head->next;
    while( curr != NULL)
    {
        if((curr->next != NULL) && curr->data == curr->next->data)
        {
            Node* next_next = curr->next->next;
            Node* deleteNode = curr->next;
            delete(deleteNode);
            curr->next = next_next;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}


*/