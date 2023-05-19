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

void insertAtTail(Node* &tail , int data)
{
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = tail->next;
}

int main()
{
    Node* n1 = new Node(1);
    Node* head = n1;
    Node* tail = n1;

    insertAtTail(tail , 2);
    insertAtTail(tail , 3);
    print(head);

}