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


void buildfromLevel(Node* &root)
{
    queue<Node*> q;

    cout<<"Enter data for root"<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    q.push(root);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        cout<<"Enter Left Node for "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1)
        {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter Right Node for "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData !=  -1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}


void levelOrder(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL)
        {
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}


int main()
{
    Node* root = NULL;
    buildfromLevel(root);

    cout<<"Level Order: "<<endl;
    levelOrder(root);
}