#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node* head)
{
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

int getLength(Node* head)
{
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &head, int data)
{
    Node* newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtTail(Node* &tail , int data)
{
    Node* newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void insertMiddle(Node* &head, Node* &tail, int position, int data)
{
    // First Case
    if(position == 1){
        insertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp->next;
        count++;
    }

    // Last Case
    if(temp->next == NULL){
        insertAtTail(tail,data);
        return;
    }

    // Middle Insert
    Node* nodetoInsert = new Node(data);
    nodetoInsert->next = temp->next;
    temp->next->prev = nodetoInsert;
    temp->next = nodetoInsert;
    nodetoInsert->prev = temp;
}

int main()
{
    Node* n1 = new Node(10);
    Node* head = n1;
    Node* tail = n1;

    print(head);
    cout<<"Len: "<<getLength(head)<<endl;

    insertAtHead(head , 20);
    print(head);

    insertAtHead(head , 30);
    print(head);

    insertAtHead(head , 40);
    print(head);

    cout<<endl;

    insertAtTail(tail , 20);
    print(head);

    insertAtTail(tail, 30);
    print(head);

    insertAtTail(tail , 40);
    print(head);

    cout<<endl;

    insertMiddle(head, tail , 1, 5);
    print(head);

    insertMiddle(head , tail, 2 , 15);
    print(head);

    insertMiddle(head, tail , 3 , 45);
    print(head);

    insertMiddle(head, tail , 11 , 145);
    print(head);

}