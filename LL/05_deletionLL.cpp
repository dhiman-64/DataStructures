#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"Mem FREE: "<<value<<endl;
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

void AtHead(Node* &head, int data)
{
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void AtTail(Node* &tail , int data)
{
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = tail->next;
}



void deleteNode(int k , Node* &head)
{

    // first node deletion
    if( k == 1)
    {
        Node* temp = head;
        head= head->next;
        temp->next = NULL;
        delete temp;        
    }

    // Midddle and last node
    else
    {
        Node* curr = head;
        Node* prev = NULL;
        
        int count = 1;
        while(count < k)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }

}



int main()
{
    Node* n1 = new Node(1);
    Node* head = n1;
    Node* tail = n1;

    AtHead(head, 0);
    AtTail(tail, 2);
    AtTail(tail, 3);
    print(head);

    deleteNode(1, head);
    print(head);

}