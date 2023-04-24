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

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Free Mem: "<<value<<endl;
    }
};

void insertAtTail(Node* &tail , int data)
{
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = tail->next;
}

void insertAtHead(Node* &head , int data)
{
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtMiddle(Node* &head, Node* &tail, int position, int data)
{
    // Starting case
    if(position == 1){
        insertAtHead(head, data);
        return;
    }
    // Traversal 
    int count =1;
    Node* temp = head;
    while( count < position-1){
        temp = temp->next;
        count++;
    }

    // Lase Case
    if(temp->next == NULL){
        insertAtTail(tail , data);
        return;
    }

    // Middle Case
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;

}

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void deleteNode(int position , Node* &head)
{
    // First Node case
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        
    }

    // deleting Middle and last Node
    else{
        Node* curr = head;
        Node* prev = NULL;

        int count =1;
        while(count < position){
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    Node* n1 = new Node(5);
    Node* head = n1;
    Node* tail = n1;
    print(head);

    insertAtTail(tail,10);
    print(head);

    insertAtTail(tail,15);
    print(head);

    insertAtTail(tail,25);
    print(head);

    insertAtMiddle(head, tail, 4, 20);
    print(head);

    insertAtMiddle(head, tail, 1, 0);
    print(head);

    insertAtMiddle(head, tail, 7, 30);
    print(head);

    deleteNode(1, head);
    print(head);
}