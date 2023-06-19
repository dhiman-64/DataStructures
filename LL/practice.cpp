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
        while( this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"Free Mem: "<<value<<endl;
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


void insertHead(Node* &head, Node* &tail, int data )
{
    // if it's Empty
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
    // if it's Empty
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


void insertMissing(Node* &head, Node* &tail, int position, int data)
{
    // if it's First position
    if( position == 1 )
    {
        insertHead(head, tail, data);
        return;
    }
    // Middle case
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
    
    // if it's Last position
    if( temp->next == NULL )
    {
        insertTail( head, tail, data );
        return;
    }
}


void deleteNode(int position, Node* &head)
{
    // if it's first position
    if( position == 1 )
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node* prev = NULL;
        Node* curr = head;
        int count = 1;
        while ( count < position )
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
    // Node* node1 = new Node(1);
    Node* head = NULL;
    Node* tail = NULL;
    
    insertHead(head, tail, 2);
    insertTail(head, tail, 3);
    insertMissing(head, tail, 2, 100);
    print(head);
    
    deleteNode(3,head);
    print(head);
}