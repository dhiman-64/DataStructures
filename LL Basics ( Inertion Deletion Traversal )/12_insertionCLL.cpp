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
    print(tail);
    insertNode(tail , 3 , 5);
    print(tail);
    insertNode(tail , 5 , 7);
    print(tail);
    insertNode(tail , 7 , 9);
    print(tail);
    insertNode(tail , 5 , 6);
    print(tail);
    insertNode(tail , 9 , 7);
    print(tail);
    insertNode(tail , 3 , 4);
    print(tail);

    return 0;
}