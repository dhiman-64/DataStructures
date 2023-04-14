In Order Traversal 
T(N) = O(N)
S(N) = O(N) 

// (left root right)

void inorder(node)
{
    if(node == NULL) return;

    inorder(node->left);
    print(node->data);
    inorder(node->right);
}