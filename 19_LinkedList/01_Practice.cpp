#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head, int data)
{
    if(head == NULL)
    {
        Node* newNode = new Node(data);
        head = newNode;
    }
    else{
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

}

int main()
{
    
}