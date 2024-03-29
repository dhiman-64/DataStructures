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

void print(Node* head)
{
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node* TakeInput()
{
    int data;
    cin>>data;
    Node* head = NULL;
    Node* tail = NULL;
    while(data != -1){
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

void PrintNode(Node* head, int posi)
{
    int count=0;
    Node* temp = head;
    while(temp){
        if(posi == count){
            cout<<temp->data<<endl;
            return;
        }
        count++;
        temp = temp->next;
    }
}

int main()
{
    Node* head = TakeInput();
    print(head);
    int position;
    cin>>position;
    PrintNode(head, position);
}