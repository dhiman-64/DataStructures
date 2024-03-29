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

void insertAtHead(Node* & head,Node* &tail, int data)
{
    if(head == NULL)
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

void insertAttail(Node* &tail ,Node* &head, int data)
{
    if(tail == NULL)
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



void insertAtMiddle(Node* &head , Node* &tail , int k , int data)
{
    // Insert At First Position
    if(k == 1)
    {
        insertAtHead(head ,tail, data);
        return;
    }

    Node* temp = head;

    int count = 1;
    while(count < k-1)
    {
        temp = temp->next;
        count++;
    }

    // Insert At Last Position 
    if(temp->next == NULL)
    {
        insertAttail(tail , head, data);
        return;
    }

    Node* nodetoinsert = new Node(data);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
    
}



int main()
{
    Node* n1 = new Node(1);
    Node* head = n1;
    Node* tail = n1;

    insertAttail(tail ,head,  2);
    insertAttail(tail ,head, 3);
    insertAttail(tail , head, 4);
    insertAttail(tail , head, 5);
    print(head);

    insertAtMiddle(head, tail , 2 , 0);
    insertAtMiddle(head, tail , 1 , 0);
    insertAtMiddle(head, tail , 7 , 0);
    print(head);
}