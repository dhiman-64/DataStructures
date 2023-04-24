<<<<<<< HEAD
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
=======
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
>>>>>>> bb17f748b4e3604cf060239e6ffb802426f2bc2c
}