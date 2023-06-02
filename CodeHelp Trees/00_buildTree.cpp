#include<iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* left; 
        Node* right;
    // Constructor
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* root)
{
    cout<<"Enter Data: "<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    if(data == -1)
    {
        return NULL;
    }
    cout<<"Left Data for: "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Right data for: "<<data<<endl;
    root->right = buildTree(root->right);
}

int main()
{
    Node* root = NULL;
    root = buildTree(root);
}