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
    cout<<"Left child for "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Right child for "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}


void PostOrder(Node* root)
{
    // Base Case
    if(root == NULL)
    {
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}


int main()
{
    Node* root = NULL;
    root = buildTree(root);

    cout<<"PostOrder Traversal: "<<endl;
    PostOrder(root);

    return 0;
}