#include<bits/stdc++.h>
using namespace std;

class treenode{
    public:
    int data;
    treenode* left;
    treenode* right;
    //Constructor
    treenode(int data){
        this->data = data;
        left = right = NULL;
    }
    // De-Constructor
    ~treenode(){
        delete left;
        delete right;
    }
};


treenode* takeinput(){
    queue<treenode*> q;
    int data;
    cin>>data;
    treenode* root = new treenode(data);
    q.push(root);
    while(!q.empty()){
        treenode* currnode = q.front();
        q.pop();
        cout<<"Enter left Node: "<<endl;
        int leftchild;
        cin>>leftchild;
        if(leftchild != -1){
            treenode* leftc = new treenode(leftchild);
            currnode->left = leftc;
            q.push(leftc);
        }
        cout<<"Enter right Node: "<<endl;
        int rightchild;
        cin>>rightchild;
        if(rightchild != -1){
            treenode* rightc = new treenode(rightchild);
            currnode->right = rightc;
            q.push(rightc);
            
        }
    }
    return root;
}

void preorder(treenode* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


int main()
{
    
}