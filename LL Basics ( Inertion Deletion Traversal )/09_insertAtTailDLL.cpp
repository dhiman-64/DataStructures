#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
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

void insertAtTail(Node* &tail ,Node* &head,  int data)
{

    if( tail == NULL)
    {
        Node* newNode = new Node(data);
        tail = newNode;
        head = newNode;
    }
    else
    {
        Node* newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    insertAtTail(tail, head, 1);
    insertAtTail(tail, head, 2);
    insertAtTail(tail, head, 3);
    insertAtTail(tail, head, 4);
    insertAtTail(tail, head, 5);
    print(head);
}