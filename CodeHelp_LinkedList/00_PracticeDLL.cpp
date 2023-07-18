/* 
    Doubly Linked List
        - Insertion
        - Deletion
        - Traversal
*/

#include<bits/stdc++.h>
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
        while( this->next != NULL )
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


void insertMiddle( Node* &head, Node* &tail, int k, int data )
{
    if( k == 1 )
    {
        insertHead(head, tail, data);
        return;
    }
    Node* temp = head;
    int count = 1;
    while( count < k-1 )
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


void deleteNode( Node* &head, int k )
{
    if( k == 1 )
    {
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node* prev = NULL;
        Node* curr = head;
        int count = 1;
        while( count < k )
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}


int main()
{
    Node* node1 = new Node(30);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    
    insertHead(head, tail, 20);
    insertHead(head, tail, 10);
    print(head);
    
    insertTail(head, tail, 40);
    insertTail(head, tail, 50);
    print(head);
    
    insertMiddle(head, tail, 1, 0);
    insertMiddle(head, tail, 4, 0);
    insertMiddle(head, tail, 8, 0);
    print(head);
    
    deleteNode(head, 1);
    deleteNode(head, 3);
    deleteNode(head, 6);
    print(head);
    
    
    return 0;
}
