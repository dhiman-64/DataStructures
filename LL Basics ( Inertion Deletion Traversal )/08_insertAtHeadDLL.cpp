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

void insertAtHead(Node* &head , int data)
{

    if( head == NULL)
    {
        Node* newNode = new Node(data);
        head = newNode;
    }
    else
    {
        Node* newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    print(head);

}