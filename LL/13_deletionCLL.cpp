#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this-> next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        while(this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<"Free Mem: "<<value<<endl;
    }
};




void deleteNode(Node* &tail , int value)
{
    if( tail == NULL)
    {
        cout<<"List is Empty"<<endl;
        return;
    }
    else
    {
        Node* prev = tail;
        Node* curr = tail->next;

        while(curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        if(tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}




void insertNode(Node* &tail , int element , int data)
{
    if(tail == NULL)
    {
        Node* newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node* curr = tail;
        while(curr->data != element)
        {
            curr = curr->next; 
        }
        Node* newNode = new Node(data);
        newNode->next = curr->next;
        curr->next = newNode;
    }
}

// Traversal of Circular Linked List
void print(Node* tail)
{
    Node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }
    while(tail != temp);

    cout<<endl;
}

int main()
{
    Node* tail = NULL;

    insertNode(tail , 5 , 3);
    insertNode(tail , 3 , 5);
    insertNode(tail , 5 , 7);
    insertNode(tail , 7 , 9);
    print(tail);

    deleteNode(tail , 3);
    print(tail);

    return 0;
}