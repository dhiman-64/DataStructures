#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void InsertAtTail(Node* &tail, int data)
{
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = tail->next;
}

int main()
{
    Node* n1 = new Node(10);
    Node* head = n1;
    Node* tail = n1;
    print(head);

    InsertAtTail(tail, 20);
    print(head);

    InsertAtTail(tail, 30);
    print(head);

}