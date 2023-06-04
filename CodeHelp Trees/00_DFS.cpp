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
    cout<<"Left Child for: "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Right Child for: "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}


void preOrder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}


void inOrder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}


void postOrder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}


int main()
{
    Node* root = NULL;
    root = buildTree(root);

    cout<<"PreOrder Traversal: "<<endl;
    preOrder(root);

    cout<<"InOrder Tarversal: "<<endl;
    inOrder(root);

    cout<<"PostOrder Traversal: "<<endl;
    postOrder(root);
}