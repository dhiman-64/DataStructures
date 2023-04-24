#include<bits/stdc++.h>
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

void print(Node* head)
{
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node* TakeInput(){
    int data;
    cin>>data;
    Node* head = NULL;
    Node* tail = NULL;
    while(data != -1)
    {
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

int length(Node* head)
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
    Node* head = TakeInput();
    print(head);
    cout<<endl;
    cout<<"Length of your LL: ";
    cout<<length(head)<<endl;
}