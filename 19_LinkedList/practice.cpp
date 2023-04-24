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

void print(Node *head)
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
    while(data != -1){
        Node *newNode = new Node(data);
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


int main()
{
    Node* head = TakeInput();
    print(head);
}












// int main()
// {
//     Node *n1 = new Node(10);
//     Node *head = n1;
//     Node *n2 = new Node(20);
//     Node *n3 = new Node(30);
//     Node *n4 = new Node(40);
//     Node *n5 = new Node(50);
//     n1->next = n2;
//     n2->next = n3;
//     n3->next = n4;
//     n4->next = n5;
//     print(head);
// }