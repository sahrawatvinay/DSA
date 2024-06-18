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

/// @brief gets the closest greater value only if right side is non empty
/// @param curr current node which we were able to find in tree and need to delete
/// @return updated root node of tree
Node *getSuccessor(Node *curr)
{
    curr = curr->right;
    while (curr != NULL && curr->left != NULL)
        curr = curr->left;
    return curr;
}

/// @brief delete a node in BST
/// @param root root of BST
/// @param val value to be deleted
/// @return root after deletion
Node *deleteNode(Node *root, int val)
{
    // search for the value to be deleted
    if (root == NULL)
        return root;
    if (root->key > val)
        root->left = deleteNode(root->left, val);
    else if (root->key < val)
        root->right = deleteNode(root->right, val);
    else // when we find the value, we handle 3 cases
    {
        if (root->left == NULL) // when leaf node is to be deleted, has node only on right
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL) // when leaf node is to be deleted, has node only on left
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            Node *succ = getSuccessor(root); // gets the closest greater successor which is leftmost leaf of right child
            root->key = succ->key;
            root->right = deleteNode(root->right, succ->key); // now recursively delete the successor from treee, which falls into leaf node case to be handled
        }
    }
    return root;
}

/// @brief need to find a vlue that is smaller or equal to the provided value
/// O(h) TC, O(1) Aux space
/// @param root root of BST
/// @param val value for which we need to find floor
/// @return node which is
Node *floor(Node *root, int val)
{
    if (root == NULL)
        return NULL;
    Node *res = NULL;
    while (root != NULL)
    {
        if (root->key == val)
            return root;
        else if (root->key > val) // we are sure that the value wont be avaialble on the right as all the other nodes are going to be greater than the root
            root = root->left;
        else // before going to explore more on left side, update the result value
        {
            res = root;
            root = root->left;
        }
    }
    return res;
}

/// @brief finding value greater or equal to the provided value
/// O(h) TC, O(1) Aux space
/// @param root root of BST
/// @param val value for which we need ceil
/// @return node
Node *ceil(Node *root, int val)
{
    if (root == NULL)
        return NULL;
    Node *res = NULL;
    while (root != NULL)
    {
        if (root->key == val)
            return root;
        else if (root->key < val)
            root = root->right;
        else
        {
            res = root;
            root = root->left;
        }
    }
    return res;
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
    Node *resFl = floor(root, 25);
    Node *resCe = ceil(root, 25);
    cout << "Floor 25 : " << resFl->key << " Ceil 25 : " << resCe->key;
    return 0;
}