<<<<<<< HEAD
#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);

}



struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val){
        val = data;
        left=right=NULL; 
    }
};
=======
#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);

}



struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val){
        val = data;
        left=right=NULL; 
    }
};
>>>>>>> bb17f748b4e3604cf060239e6ffb802426f2bc2c
