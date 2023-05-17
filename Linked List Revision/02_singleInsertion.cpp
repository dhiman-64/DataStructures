#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

void insertAtHead(Node* &head , int data)
{
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &tail , int data)
{
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = tail->next;
}

void insertAtMiddle(Node* &head, Node* &tail, int data, int k)
{
    if(k == 0)
    {
        insertAtHead(head, data);
        return;
    }

    if(tail->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    int count = 1;
    Node* temp = head;
    while(count < k-1)
    {
        temp = temp->next;
        count++;
    }
    Node* newNode = new Node(data);
    Node* forward = temp->next;
    
    temp->next = newNode;
    newNode->next = forward;

}

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

int main()
{
    Node* n1 = new Node(10);
    Node* head = n1;
    Node* tail = n1;
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    print(head);

    insertAtTail(tail, -10);
    insertAtTail(tail, -20);
    insertAtTail(tail, -30);
    print(head);

    insertAtMiddle(head, tail, 100 , 5);
    print(head);
    insertAtMiddle(head, tail, 80 , 0);
    print(head);
    insertAtMiddle(head, tail, 80 , 9);
    print(head);
}