#include<iostream>
#include<queue>
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
    // cout<<"Enter Data: "<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    if(data == -1)
    {
        return NULL;
    }
    root->left = buildTree(root->left);
    root->right = buildTree(root->right);
}


void preOrder(Node* root)
{
    // Base Case
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}


int main()
{
    Node* root = NULL;
    root = buildTree(root);

    cout<<"PreOrder"<<endl;
    preOrder(root);
}