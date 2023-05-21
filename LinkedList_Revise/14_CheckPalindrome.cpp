/*

        // NAIVE APPROACH - 
        TC - N
        SC - N



#include<vector>
class Solution{
    
    private:
    bool checkPal(vector<int> arr)
    {
        int n = arr.size();
        int s = 0;
        int e = n-1;
        
        while(s < e)
        {
            if(arr[s] != arr[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
    
    
  public:
    bool isPalindrome(Node *head)
    {
        vector<int> arr;
        Node* temp = head;
        while(temp != NULL)
        {
            arr.push_back(temp->data);
            temp = temp->next;
        }
        return checkPal(arr);
    }
};


*/




/*


        // optimised approach ->
        1. Find the middle       - O(N)
        2. reverse lL after Middle    -O(N)
        3. Compare Both Halfs     -O(N)
        4. Repeat 2 Step    -O(N)

        TC - O(4N) = O(N)
        SC - 1




class Solution{

  private:
  Node* getMiddle(Node* head)
  {
      Node* slow = head;
      Node* fast = head->next;
      while(fast != NULL && fast->next != NULL)
      {
            fast = fast->next->next;
            slow = slow->next;
      }
      return slow;
  }
  
  Node* reverse(Node* head)
  {
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
    bool isPalindrome(Node *head)
    {
        if(head == NULL || head->next == NULL)
        {
            return true;
        }
        // step1 -> get Middle
        Node* middle = getMiddle(head);
        
        
        // step2 -> reverse list after it
        Node* temp = middle->next;
        middle->next = reverse(temp);
        
        
        // step3 -> compare both halfs
        Node* head1 = head;
        Node* head2 = middle->next;
        
        while(head2 != NULL)
        {
            if(head1->data != head2->data)
            {
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        
        // step4 -> Reapeat step 2
        temp = middle->next;
        middle->next = reverse(temp);
        
        return true;
    }
};






*/