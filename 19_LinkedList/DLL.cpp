#include<iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* prev;
        Node* next;
    // constructor
    Node( int data )
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};


void print( Node* &head )
{
    Node* temp = head;
    while( temp != NULL )
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


void insertHead( Node* &head, Node* &tail, int data )
{
    if( head == NULL )
    {
        Node* newNode = new Node(10);
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


void insertTail( Node* &head, Node* &tail, int data )
{
    if( tail == NULL )
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node* newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
}


void insertMiddle( Node* &head, Node* &tail, int position, int data )
{
    if( position == 1 )
    {
        insertHead(head, tail, data);
        return;
    }
    Node* temp = head;
    int count = 1;
    while( count < position-1 )
    {
        temp = temp->next;
        count++;
    }
    
    if( temp->next == NULL )
    {
        insertTail(head, tail, data);
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
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    
    insertHead(head, tail, 20);
    insertHead(head, tail, 30);
    print(head);
    
    insertTail(head, tail, 40);
    insertTail(head, tail, 50);
    print(head);
    
    insertMiddle(head, tail, 1, 900);
    insertMiddle(head, tail, 4, 800);
    insertMiddle(head, tail, 8, 700);
    print(head);
    
}
