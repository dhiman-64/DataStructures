#include<bits/stdc++.h>
using namespace std;


template <typename T>
class TreeNode{
    public:
        T data;
        vector<TreeNode<T>*> children;
    // constructor
    TreeNode(T data)
    {
        this->data = data;
    }
};


void printTree(TreeNode<int>* root)
{
    cout<<root->data<<": ";
    for(int i=0 ; i<root->children.size() ; i++)
    {
        cout<<root->children[i]->data<<" , ";
    }
    cout<<endl;
    for(int i=0 ; i<root->children.size() ; i++)
    {
        printTree(root->children[i]);
    }
}





int main()
{
    TreeNode<int>* root = new TreeNode<int>(10);
    TreeNode<int>* n1 = new TreeNode<int>(20);
    TreeNode<int>* n2 = new TreeNode<int>(30);

    // connection build
    root->children.push_back(n1);
    root->children.push_back(n2);

    printTree(root); 
}