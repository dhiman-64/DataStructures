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
};

void insertAtHead(Node* &head,Node* &tail, int data)
{
    if(head == NULL)
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
}

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

int main()
{
    /*
    Node* n1 = new Node(1);
    Node* head = n1;
    Node* tail = n1;
    */

   Node* head = NULL;
   Node* tail = NULL;

    insertAtHead(head , tail, 3);
    insertAtHead(head , tail, 2);
    insertAtHead(head , tail, 1);
    print(head);
}