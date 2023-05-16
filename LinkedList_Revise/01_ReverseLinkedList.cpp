#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node* takeInput(){
    Node* head = NULL;
    Node* tail = NULL;

    int data;
    cin>>data;
    while(data != -1)
    {
        Node* newNode = new Node(data);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin>>data;
    }
    return head;
}

void print(Node* head)
{
    Node* temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}




/* Recursively Solution I


void reverseSolve(Node* &head , Node* curr, Node* prev)
{
    if(curr == NULL)
    {
        head = prev;
        return;
    }
    Node* forward = curr->next;
    reverseSolve(head, forward, curr);
    curr->next = prev;
}



Node* reverseLL(Node* head)
{
    Node* curr = head;
    Node* prev = NULL;
    reverseSolve(head, curr, prev );
    return head;
}

*/


Node* reverseII(Node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    Node* chotaHead = reverseII(head->next);
    head->next->next = head;
    head->next = NULL;

    return chotaHead;

}


Node* reverseLL(Node* head)
{
    return reverseII(head);
}



/*  Iteratively

T(N) = O(N)
S(N) = O(1)

Node* reverseLL(Node* head)
{

    if(head == NULL || head->next == NULL)
    {
        return head; 
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

*/

int main()
{
    Node* n1 = takeInput();
    print(n1);

    Node* n2 = reverseLL(n1);
    print(n2);
}
