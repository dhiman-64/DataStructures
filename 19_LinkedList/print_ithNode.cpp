#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(Node * head)
{
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node *TakeInput(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;

    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            // tail = tail->next;
            tail->next = newNode;
            tail = newNode;
        }
        cin>>data;
    }
    return head;
}

void printIthNode(Node *head, int i)
{
    Node *temp = head;
    int count = 0;
    while(temp)
    {
        if(i == count){
            cout<<temp->data<<endl;
            return;
        }
        count++;
        temp = temp->next;
    }
}

int main()
{
    Node *head = TakeInput();
    int position;
    cin>>position;
    printIthNode(head,position);
    cout<<endl;

    return 0;
}