#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

Node *takeInput(){
    int data;
    cin>>data;
    Node * head = NULL;
    Node * tail = NULL;

    while(data != -1)
    {
        Node * newNode = new Node(data);
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

void print(Node* head)
{
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int length(Node *head)
{
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}

int main()
{
    Node *head = takeInput();
    print(head);
    cout<<endl;
    cout<<length(head)<<endl;
}