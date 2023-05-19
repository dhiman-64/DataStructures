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

void insertAtTail(Node* &tail ,Node* &head ,int data)
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

int main()
{
    /*
    Node* n1 = new Node(1);
    Node* head = n1;
    Node* tail = n1;
    */

   Node* head = NULL;
   Node* tail = NULL;
   

    insertAtTail(tail , head, 2);
    insertAtTail(tail , head, 3);
    print(head);

}