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
    else{
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data)
{
    if(tail == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail = tail->next;
    }
}

void insertAtMiddle(Node* &head, Node* &tail, int position, int data)
{
    if(position == 1){
        insertAtHead(head, tail, data);
        return;
    }
    //Tranversal
    int count = 1;
    Node* temp = head;
    while(count < position-1){
        temp = temp->next;
        count++;
    }
    if(temp->next  == NULL){
        insertAtTail(head, tail, data);
        return;
    }
    // Middle Insertion
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;

}

int main()
{
    Node* n1 = new Node(10);
    Node* head = n1;
    Node* tail = n1;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    print(head);

    insertAtTail(head, tail, 90);
    insertAtTail(head, tail, 80);
    insertAtTail(head, tail, 70);
    print(head);

    insertAtMiddle(head, tail, 3, 120);
    print(head);
}