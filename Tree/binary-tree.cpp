#include <iostream>
#include <queue>
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

/// @brief calculate height of binary tree
/// recursively call for the height of left subtree and right subtree
/// take max of both left and right sub trees, add 1 explicity and evaluate
/// @param root root node of tree
/// @return height of tree
int height(Node *root)
{
    if (root == NULL)
        return 0;
    else
        return (max(height(root->left), height(root->right)) + 1);
}

/// @brief print nodes that are at k level, root level = 0
/// recursively call for the left subtree and right subtree
/// @param root root node of a tree
/// @param k level at which we want to print nodes
void nodesAtKDistance(Node *root, int k)
{
    if (root == NULL)
        return;
    if (k == 0)
        cout << root->key << " ";
    else
    {
        nodesAtKDistance(root->left, k - 1);
        nodesAtKDistance(root->right, k - 1);
    }
}

/// @brief Level order traversal
/// Queue ds is used
/// enqueue a level into queue
/// dequeue it and print on the screen
/// while queing, push the children into the queue
/// TC : O(n)
/// SC : O(width)
/// @param root root node of a tree
void levelOrder(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        cout << curr->key << " ";
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
}

void levelOrderLineByLine(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int sz = q.size();
        for (int i = 0; i < sz; i++)
        {
            Node *curr = q.front();
            q.pop();
            cout << curr->key << " ";
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
        cout << endl;
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
    cout << endl;
    cout << "Height of tree : " << height(root) << endl;
    cout << "Nodes at 3 distance : ";
    nodesAtKDistance(root, 3);
    cout << endl;
    cout << "Level order traversal: ";
    levelOrder(root);
    cout << "Level order traversal line by line : ";
    levelOrderLineByLine(root);
    return 0;
}