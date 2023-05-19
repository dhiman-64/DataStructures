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

void insertAtHead(Node* &head ,Node* &tail ,int data)
{

    if( head == NULL)
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node* newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
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


void insertAtPosition(Node* &head , Node* &tail , int k , int data)
{
    if(k == 1)
    {
        insertAtHead(head ,tail,  data);
        return;
    }

    Node* temp = head;
    int count = 1;
    while(count < k-1)
    {
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL)
    {
        insertAtTail(tail , head, data);
        return;
    }

    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;

}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head,tail,  3);
    insertAtHead(head, tail,  2);
    insertAtHead(head,tail,  1);
    print(head);

    insertAtTail(tail, head, 4);
    insertAtTail(tail, head, 5);
    print(head);


    insertAtPosition(head, tail, 3, 0);
    insertAtPosition(head, tail, 1, 0);
    insertAtPosition(head, tail, 8, 0);
    print(head);
}