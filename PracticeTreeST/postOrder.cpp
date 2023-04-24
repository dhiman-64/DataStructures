<<<<<<< HEAD
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
=======
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
>>>>>>> bb17f748b4e3604cf060239e6ffb802426f2bc2c
}