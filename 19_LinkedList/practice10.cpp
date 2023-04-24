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

void print (Node* head)
{
    Node* temp  = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* TakeInput()
{
    int data;
    cin>>data;
    Node* head = NULL;
    Node* tail = NULL;

    while(data!= -1){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = tail->next;
        }
        cin>>data;
    }
    return head;
}

void deleteNode(Node* head, int i)
{

}

int main()
{
    
}