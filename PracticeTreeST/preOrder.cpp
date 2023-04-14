PreOrder Traversal
T(N) = O(N)
S(N) = O(N)

// (root left right)

void preOrder(node) //root
{
    if(node == NULL) return;

    print(node->data);
    print(node->left);
    print(node->right);
}


