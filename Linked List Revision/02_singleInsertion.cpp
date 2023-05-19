#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

void insertAtHead(Node* &head , int data)
{
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &tail , int data)
{
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = tail->next;
}

void insertAtMiddle(Node* &head, Node* &tail, int k, int data)
{
    if(k == 1)
    {
        insertAtHead(head, data);
        return;
    }

    if(tail->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    int count = 1;
    Node* temp = head;
    while(count < k-1)
    {
        temp = temp->next;
        count++;
    }
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;

}
 
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

int main()
{
    Node* n1 = new Node(10);
    Node* head = n1;
    Node* tail = n1;
    insertAtHead(head, 12);
    print(head);

    insertAtTail(tail, 15);
    print(head);

    insertAtMiddle(head, tail, 2, 22);
    print(head);
    insertAtMiddle(head, tail, 1, 220);
    print(head);
    // insertAtMiddle(head, tail, 3, 999999);
    // print(head);
}