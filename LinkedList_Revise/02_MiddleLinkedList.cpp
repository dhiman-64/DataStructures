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

void print(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* takeInput()
{
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

Node* getmiddle(Node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    if(head->next->next == NULL)
    {
        return head->next;
    }

    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL)
    {
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}

Node* middle(Node* head)
{
    return getmiddle(head);
}

int main()
{
    Node* n1 = takeInput();
    print(n1);

    Node* n2 = middle(n1);
    cout<< n2->data<<endl;
}