#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    } 
    cout<<endl;
}

void insertAtHead(Node* &head, Node* &tail, int data)
{
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    Node* newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

int main()
{
    Node* n1 = new Node(100);
    Node* head = NULL;
    Node* tail = NULL;
    print(head);
    
    insertAtHead(head, tail, 90);
    insertAtHead(head, tail, 80);
    insertAtHead(head, tail, 70);
    insertAtHead(head, tail, 60);
    print(head);
    
}