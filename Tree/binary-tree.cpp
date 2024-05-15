#include <iostream>
using namespace std;
/// @brief structure of node of a tree
/// BINARY TREE important points:
/// - each node can have atmpst 2 child, left child and right child
/// - empty tree is represented as NULL
struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
/// @brief printing the tree in inorder fashion
/// Left Root Right
/// Left, Right are subtrees
/// TC : O(n) number of nodes
/// SC : O(h) number of recursive calls/ height of tree
/// @param root root node of the tree
void inorder(Node *root) // L Root Right
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}
/// @brief prining nodes of tree in preorder fashion
/// Root Left Right
/// Left, Right are subtrees
/// TC : O(n) number of nodes
/// SC : O(h) number of recursive calls/ height of tree
/// @param root root node of the tree
void preorder(Node *root) // Root L Right
{
    if (root != NULL)
    {
        cout << root->key << " ";
        preorder(root->left);
        preorder(root->right);
    }
}
/// @brief prining nodes of tree in postorder fashion
/// L Right Root
/// Left, Right are subtrees
/// TC : O(n) number of nodes
/// SC : O(h) number of recursive calls/ height of tree
/// @param root root node of the tree
void postorder(Node *root) // L Right Root
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->key << " ";
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->left->right->left = new Node(70);
    root->left->right->right = new Node(80);
    root->right = new Node(30);
    root->right->right = new Node(60);
    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
    postorder(root);
    return 0;
}