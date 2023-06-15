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


void insertHead(Node* &head, Node* &tail, int data)
{
    // if it's empty
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
        head->prev = newNode;
        head = newNode;
    }
}


void insertTail(Node* &head, Node* &tail, int data)
{
    // if it's empty
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
        tail = newNode;
    }
}


void insertAnyPosition(Node* &head, Node* &tail, int position, int data)
{
    // if it's First Position
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
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;

    // if it's Last position
    if( temp->next == NULL )
    {
        insertTail(head, tail, data);
        return;
    }
}


void deleteNode(int position, Node* &head)
{
    // if it's First Position
    if ( position == 1 )
    {
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    // if it's Middle and Last position
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
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next->prev = prev;
        curr->next = NULL;
        delete curr;
    }
}


int main()
{
    Node* node1 = new Node(100);
    Node* head = node1;
    Node* tail = node1;

    insertHead(head, tail, 200);
    insertHead(head, tail, 300);
    print(head);

    insertTail(head, tail, 400);
    insertTail(head, tail, 500);
    print(head);


    insertAnyPosition(head, tail, 1, 900);
    insertAnyPosition(head, tail, 6, 900);
    insertAnyPosition(head, tail, 3, 900);
    print(head);

    deleteNode(1, head);
    deleteNode(2,head);
    deleteNode(5,head);
    print(head);
}