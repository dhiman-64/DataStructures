#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    //Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // Deconstructor
    ~Node(){
        int value = this->data;
        while(this->next != NULL){
            delete next;
            this->next = NULL;
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

void insertAtHead(Node* &head, int data)
{
    if(head == NULL)
    {
        Node* newNode = new Node(data);
        head = newNode;
    }
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &tail, int data)
{
    if(tail == NULL)
    {
        Node* newNode = new Node(data);
        tail = newNode;
    }
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = tail->next;
}

void insertAtMiddle(Node* &head, Node* &tail, int i, int data)
{
    // First Node insertion
    if(i == 1)
    {
        insertAtHead(head, data);
        return;
    }
    
    //Traversal 
    int count = 1;
    Node* temp = head;
    while( count < i-1){
        temp = temp->next;
        count++;
    }
    // Last Node
    if(temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    // Middle Insertion
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteNode(int i, Node* &head)
{
    // Edge Case -> First Position
    if(i == 1)
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp; 
    }
    else
    {
        Node* curr = head;
        Node* prev = NULL;

        int count = 0;
        while(count < i-1)
        {
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
    Node* n1 = new Node(1);
    Node* head = n1;
    Node* tail = n1;
    
    insertAtHead(head,2);
    insertAtHead(head,3);
    print(head);

    insertAtTail(tail,4);
    insertAtTail(tail,5);
    print(head);

    insertAtMiddle(head, tail, 1, 0);
    insertAtMiddle(head, tail, 7, 100);
    insertAtMiddle(head, tail, 4, 888);
    print(head);

    deleteNode(4, head);
    print(head);

}