
/*

    // Add Two Linked List

    TC - O(MAX( M + N ))
    SC - N


class Solution
{
    private:
    Node* reverse(struct Node* head)
    {
        if(head == NULL)
        {
            return NULL;
        }
        
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;
        
        while(curr != NULL)
        {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    
 
    
    public:
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node* head1 = reverse(first);
        Node* head2 = reverse(second);
        
        Node* dummy = new Node(-1);
        Node* temp = dummy;
        int carry = 0;
        
        while(head1 != NULL || head2 != NULL || carry != 0)
        {
            int sum = 0;
            if(head1 != NULL)
            {
                sum = sum + head1->data;
                head1 = head1->next;
            }
            if(head2 != NULL)
            {
                sum = sum + head2->data;
                head2 = head2->next;
            }
            sum = sum + carry;
            carry = sum/10;
            int digit = sum%10;
            // Single Node 
            Node* ans = new Node(digit);
            temp->next = ans;
            temp = temp->next;
        }
        // Using Recursion next List
        Node* resultList = reverse(dummy->next);
        return resultList;
    }
};

*/