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

void insertAtHead(Node* &head, int data)
{
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

int main()
{
    Node* n1 = new Node(10);
    Node* head = n1;
    print(head);
    
    insertAtHead(head, 20);
    print(head);
    insertAtHead(head, 30);
    print(head);
    insertAtHead(head, 40);
    print(head);
}