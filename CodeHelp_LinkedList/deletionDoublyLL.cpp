#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    // constructor
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    // Deconstructor
    ~Node(){
        int value = this->data;
        if(next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<"Free Mem: "<<value<<endl;
    }
};

void print(Node* head)
{
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head, Node* &tail, int data)
{
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node*newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode->next;
        head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data)
{
    if(tail == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail->next;
        tail = tail->next;
    }
}

void insertMiddle(Node* &head, Node* &tail, int position, int data)
{
    // First Case
    if(position == 1){
        insertAtHead(head, tail, data);
        return;
    }
    // Traversal
    int count = 1;
    Node* temp = head;
    while(count < position-1){
        temp = temp->next;
        count++;
    }
    // Last Case
    if(temp->next == NULL){
        insertAtTail(head, tail, data);
    }
    // Middle Case
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}





// Delete Code for Doubly Linked List
void deleteNode(int position, Node* &head)
{
    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while(count < position-1){
            prev = curr;
            curr = curr->next;
            count++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}





int main()
{
    Node* n1 = new Node(10);
    Node* head = n1;
    Node* tail = n1;

    insertAtHead(head, tail, 0);
    insertAtHead(head, tail, -10);
    print(head);

    cout<<endl;

    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    print(head);

    insertMiddle(head, tail, 1, -20);
    print(head);

    insertMiddle(head, tail, 7 , 40);
    print(head);

    insertMiddle(head, tail, 6, 35);
    print(head);

    deleteNode(1, head);
    print(head);

    deleteNode(8, head);
    print(head);

}