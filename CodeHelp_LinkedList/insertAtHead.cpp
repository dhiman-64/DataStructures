#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head,Node* &tail, int data)
{
    if(head == NULL)
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

int main()
{
    Node* n1 = new Node(10);
    Node* head = n1;
    Node* tail = n1;
    print(head);
    
    insertAtHead(head,tail, 20);
    print(head);
    insertAtHead(head,tail, 30);
    print(head);
    insertAtHead(head,tail, 40);
    print(head);
}