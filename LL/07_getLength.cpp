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

int getLength(Node* head)
{
    Node* temp = head;
    int count = 0;
    while( temp != NULL )
    {
        temp = temp->next;
        count++;
    }
    return count;
}

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

int main()
{
    Node* n1 = new Node(1);
    Node* head = n1;
    cout<<"Length: "<<getLength(head)<<endl;
}