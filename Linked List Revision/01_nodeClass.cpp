#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }

};

int main()
{
    Node* n1 = new Node(1);
    cout<<n1->data<<endl;
    cout<<n1->next<<endl;

    return 0;
}