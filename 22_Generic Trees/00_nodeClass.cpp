#include<iostream>
#include<vector>
using namespace std;

template <typename T>
class TreeNode{
    public:
        T data;
        vector<TreeNode<T>*> children;
    //constructor
    TreeNode(T data)
    {
        this->data = data;
    }
};

int main()
{
    TreeNode<int>* root = new TreeNode<int>(10);
    TreeNode<int>* n1 = new TreeNode<int>(20);
    TreeNode<int>* n2 = new TreeNode<int>(30);
    
    // connection build
    root->children.push_back(n1);
    root->children.push_back(n2);
}