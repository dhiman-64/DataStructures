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

void insertAtTail(Node* &head, Node* &tail, int data)
{
    if(tail == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = tail->next; 
}

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* n1 = new Node(10);
    Node* head = n1;
    Node* tail = n1;
    
    print(head);

    insertAtTail(head,tail, 20);
    print(head);
    insertAtTail(head,tail, 30);
    print(head);
    insertAtTail(head,tail, 40);
    print(head);

}