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

void insertAtHead(Node* &head, int data)
{
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &tail , int data)
{
    Node* newNode = new Node(data);
    tail->next  = newNode;
    tail = tail->next;
}



void insertAtMiddle(Node* &head , Node* &tail, int position , int data)
{
    //Starting Case
    if(position == 1){
        insertAtHead(head, data);
        return;
    }
    
    // Middle Case
    int count = 1;
    Node* temp = head;
    while(count < position-1){
        temp = temp->next;
        count++; 
    }  

    // Last Case
    if(temp->next == NULL){
        insertAtTail(tail, data);
        return;
    }

    // Middle Case
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}



int main()
{
    Node* n1 = new Node(5);
    Node* head = n1;
    Node* tail = n1;
    print(head);

    insertAtTail(tail,10);
    print(head);

    insertAtTail(tail,15);
    print(head);

    insertAtTail(tail,25);
    print(head);

    insertAtMiddle(head, tail, 4, 20);
    print(head);

    insertAtMiddle(head, tail, 1, 0);
    print(head);

    insertAtMiddle(head, tail, 7, 30);
    print(head);

}