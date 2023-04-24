#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data){
        this-> data = data;
        next = NULL;
    }
};


void print(Node *head)
{
    Node * temp = head;

    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;

    temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main()
{
    Node n1(10);
    Node *head = &n1;
    Node n2(20);
    
    Node n3(30);
    Node n4(40);
    Node n5(50);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    // Print the linked list
    print(head);
    // print(head);
}