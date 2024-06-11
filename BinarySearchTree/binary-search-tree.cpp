#include <iostream>
using namespace std;

struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

/// @brief search for node value present in a tree
/// Use similar logic as used in binary search
/// @param root root of a binary search tree
/// @param val value to search
/// @return true/false based on presence
/// TC: O(h)
bool search(Node *root, int val)
{
    while (root != NULL)
    {
        if (root->key == val)
            return true;
        else if (root->key > val)
            root = root->left;
        else
            root = root->right;
    }
    return false;
}

/// @brief insert a node in BST
/// @param root root of BST
/// @param val value to be inserted
/// @return root
Node *insertInBST(Node *root, int val)
{
    if (root == NULL) // when root is empty, we create a new node with value x and return new head
        return new Node(val);
    else if (root->key > val)
        root->left = insertInBST(root->left, val); // because we need to link this newly created node to the current node on which we are at
    else if (root->key < val)
        root->right = insertInBST(root->right, val);
    return root;
}

int main()
{
    Node *root = new Node(15);
    root->left = new Node(5);
    root->left->left = new Node(3);
    root->right = new Node(20);
    root->right->left = new Node(18);
    root->right->left->left = new Node(16);
    root->right->right = new Node(80);
    int x = 16;
    bool isPresent = search(root, x);
    cout << x << " present : " << isPresent << endl;
    x = 69;
    isPresent = search(root, x);
    cout << x << " present : " << isPresent << endl;
    root = insertInBST(root, 45);
    return 0;
}