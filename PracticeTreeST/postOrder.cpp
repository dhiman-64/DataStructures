PreOrder Tranversal 
T(N) = O(N)
S(N) = O(N)

// (left right root)

void postOrder(node)
{
    if(node == NULL) return;
    postOrder(node->left);
    postOrder(node->right);
    print(node->data);
}