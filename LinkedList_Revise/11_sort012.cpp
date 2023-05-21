

/*

        // Naive Approach
            TC - N+N = N
            SC - N

Node* sort012(Node* head)
{
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    Node* temp = head;
    while(temp != NULL)
    {
        if(temp->data == 0)
        {
            count0++;
        }
        else if (temp->data  == 1)
        {
            count1++;
        }
        else if(temp->data == 2)
        {
            count2++;
        }
        temp = temp->next;
    }
    temp = head;
    while( temp != NULL)
    {
        if(count0 != 0)
        {
            temp->data = 0;
            count0--
        }
        else if (count1 != 0)
        {
            temp->data = 1;
            count1--
        }
        else if (count2 != 0)
        {
            temp->data = 2;
            count2--
        }
        temp = temp->next;
    }
    return head;
}

*/



/*

    // Optimised Approach
        TC - 
        SC - 


void insertAtTail(Node* &tail , Node* curr)
{
    tail->next = curr;
    tail = curr;
}

Node* sortList(Node *head)
{
    Node* head0 = new Node(-1);
    Node* tail0 = head0;
    Node* head1 = new Node(-1);
    Node* tail1 = head1;
    Node* head2 = new Node(-1);
    Node* tail2 = head2;

    Node* curr = head;

    while(curr != NULL)
    {
        int val = curr->data;
        if(val == 0)
        {
            insertAtTail(tail0,curr);
        }
        else if(val == 1)
        {
            insertAtTail(tail1,curr);
        }  
        else if ( val == 2)
        {
            insertAtTail(tail2,curr);
        }
        curr = curr->next;      
    }

    // Merge Lists
    if(head1->next != NULL){
        tail0->next = head1->next;
    }
    else{
        tail0->next = head2->next;
    }

    tail1->next = head2->next;
    tail2->next = NULL;

    head = head0->next;
    delete head0;
    delete head1;
    delete head2;

    return head;


}



*/