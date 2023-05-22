#include<iostream>
#include<vector>
using namespace std;

template <typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*> children;
    TreeNode(T  data)
    {
        this->data = data;
    }
};


TreeNode<int>* takeInput()
{
    int rootdata;
    cout<<"Enter data: "<<endl;
    cin>>rootdata;
    TreeNode<int>* root = new TreeNode<int>(rootdata);

    int n;
    cout<<"Enter num of chidren of: "<<rootdata<<endl;
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        TreeNode<int>* child = takeInput();
        root->children.push_back(child);
    }
    return root;
}


void print(TreeNode<int>* root)
{
    // Edge Case
    if(root == NULL)
    {
        return;
    }

    cout<<root->data<<": ";
    for(int i=0 ; i<root->children.size() ; i++)
    {
        cout<<root->children[i]->data<<", ";
    }
    cout<<endl;

    for(int i=0 ; i<root->children.size();i++){
        print(root->children[i]);
    }
}

int main()
{
    /*
    TreeNode<int>* root = new TreeNode<int>(1);
    TreeNode<int>* n1 = new TreeNode<int>(2);
    TreeNode<int>* n2 = new TreeNode<int>(3);
    // Linking
    root->children.push_back(n1);
    root->children.push_back(n2);
    
    */
    TreeNode<int>* root = takeInput();
    print(root);
}