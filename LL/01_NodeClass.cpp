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
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
}