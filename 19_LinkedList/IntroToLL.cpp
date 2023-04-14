#include<bits/stdc++.h>
using namespace std;

class Node {
    public : 
    int data;
    Node * next;

    Node(int data){
        this->data = data;
        next = NULL;
    }    
};


int main()
{
    // Statically
    Node n1(10);  // Head
    Node* head = &n1;

    Node n2(20); // tail
    n1.next = &n2;



    // Dynamically 
    Node *n3 = new Node(30);
    // Node *head = n3;
    Node* n4 = new Node(40);
    n3->next = n4; 

    cout<<head->data<<endl;
}