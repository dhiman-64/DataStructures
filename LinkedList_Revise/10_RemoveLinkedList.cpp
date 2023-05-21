#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void insertHead(Node* &head , Node* &tail , int data)
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

void insertTail(Node* &head, Node* &tail , int data)
{
    if( tail == NULL )
    {
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

void insert(Node* &head , Node* &tail , int k , int data)
{
    if(k == 1)
    {
        insertHead(head, tail, data);
        return;
    }
    Node* temp = head;
    int count = 0;
    while(count < k-1)
    {
        temp = temp->next;
        count++;
    }
    Node* nodetoinsert = new Node(data);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

int main()
{

}