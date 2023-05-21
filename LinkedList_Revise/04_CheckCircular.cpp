/*
    TC - N
    SC - 1

bool isCircular(Node* head)
{
    if( head == NULL)
    {
        return true;
    }
    Node* temp = head->next;
    while(temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if(temp == head)
    {
        return true;
    }
    return false;
}

*/


    
/*
    // Other Approach - Using Map ( mark visited )

    TC - N
    SC - N

*/
    