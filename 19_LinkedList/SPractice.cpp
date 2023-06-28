#include<iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* next;
    // constructor
    Node( int data )
    {
        this->data = data;
        this->next = NULL;
    }
    // destructor
    ~Node()
    {
        int value = this->data;
        while( this->next != NULL )
        {
            delete next;
            this->next = NULL;
        }
        cout<<"Free Mem: "<<value<<endl;
    }
};


void print(Node* &head)
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


void insertTail(Node* &head, Node* &tail, int data )
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
        tail = tail->next;
    }
}


void insertMiddle(Node* &head, Node* &tail, int position, int data)
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
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
    
    if( temp->next == NULL )
    {
        insertTail(head, tail, data);
        return;
    }
}


void deleteNode( int position, Node* &head)
{
    if( position == 1 )
    {
        Node* temp = head;
        head = head->next;
        temp->next =  NULL;
        delete temp;
    }
    else
    {
        Node* prev = NULL;
        Node* curr = head;
        int count = 1;
        while( count < position )
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}


int main()
{
    Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
    
    insertHead(head, tail, 20);
    insertHead(head, tail, 30);
    print(head);
    
    
    insertTail(head, tail, 40);
    insertTail(head, tail, 50);
    print(head);
    
    insertMiddle(head, tail, 1, 10);
    print(head);
    
    insertMiddle(head, tail, 2, 20);
    print(head);
    
    deleteNode( 4, head);
    print(head);
}
