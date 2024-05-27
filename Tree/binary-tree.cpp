#include <iostream>
#include <queue>
#include <climits>
#include <stack>
using namespace std;
/// @brief structure of node of a tree
/// BINARY TREE important points:
/// - each node can have atmost 2 childs, left child and right child
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
/// while queue is not empty,
/// dequeue the node at front of queue and store it in a new Node* curr variable then print on the screen
/// check for the left and right child of curr node, if available, push the children into the queue
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
        int sz = q.size(); // used to extract all the children of current available nodes present in queue
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

/// @brief get size of a binary tree
/// for iterative solution we can use queue
/// @param root root of binary tree
/// @return size by calculating number of nodes in a binary tree
int getSizeRecursive(Node *root)
{
    if (root == NULL)
        return 0;
    else
        return (1 + getSizeRecursive(root->left) + getSizeRecursive(root->right));
}

/// @brief get the max value among nodes in a binary tree
/// we need to compare 3 values, root value, max value deduced from left and right subtree
/// iterative sln using queue, keep curr value and compare it while popping out value from queue
/// @param root root of a binary tree
/// @return max node of tree
int maxOfBinaryTree(Node *root)
{
    if (root == NULL)
        return INT_MIN;
    else
        return (max(root->key, max(maxOfBinaryTree(root->left), maxOfBinaryTree(root->right))));
}

/// @brief check if sum of values of children is equal to the root
/// @param root root node of tree
/// @return boolean if it is children sum or not
bool isCSum(Node *root)
{
    if (root == NULL) // handling edge case, when no nodes are there
        return true;
    if (root->left == NULL && root->right == NULL) // when only 1 node is available
        return true;
    int sum = 0;
    if (root->left != NULL)
        sum += root->left->key;
    if (root->right != NULL)
        sum += root->right->key;
    return (root->key == sum && isCSum(root->left) && isCSum(root->right));
}

/// @brief check if a tree is balanced or not
/// tree is balanced if for every node the diff bw heights of left and right subtree is not greater than 1.
/// @param root root node of tree
/// @return -1 for not balanced, otherwise returns height
int checkForBalancedTree(Node *root)
{
    if (root == NULL)
        return 0;
    int lh = checkForBalancedTree(root->left);
    if (lh == -1)
        return -1;
    int rh = checkForBalancedTree(root->right);
    if (rh == -1)
        return -1;
    if (abs(lh - rh) > 1) // if diff bw left and right heights is greater than 1, return -1
        return -1;
    else
        return max(lh, rh) + 1; // calculate height of subtree
}

/// @brief find max width of binary tree
/// @param root root node of tree
/// @return max width
int maxWidthOfBinaryTree(Node *root)
{
    if (root == NULL)
        return 0;
    queue<Node *> q;
    q.push(root);
    int maxWidth = INT_MIN;
    while (!q.empty())
    {
        int sz = q.size();
        maxWidth = max(maxWidth, sz);
        for (int i = 0; i < sz; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
    return maxWidth;
}

/// @brief print spiral form of binary tree
/// @param root root node of a tree
void printSpiral(Node *root)
{
    if (root == NULL)
        return;

    stack<Node *> s1;
    stack<Node *> s2;

    s1.push(root);

    while (!s1.empty() || !s2.empty())
    {
        while (!s1.empty())
        {
            Node *temp = s1.top();
            s1.pop();
            cout << temp->key << " ";
            if (temp->right)
                s2.push(temp->right);
            if (temp->left)
                s2.push(temp->left);
        }

        while (!s2.empty())
        {
            Node *temp = s2.top();
            s2.pop();
            cout << temp->key << " ";
            if (temp->left)
                s1.push(temp->left);
            if (temp->right)
                s1.push(temp->right);
        }
    }
}

// calculate the diameter of the tree
int res = 0;
int heightDiam(Node *root)
{
    if (root == NULL)
        return 0;
    int lh = heightDiam(root->left);
    int rh = heightDiam(root->right);
    res = max(res, 1 + lh + rh); // sets the diameter at every node that we have encountewred so far
    return 1 + max(lh, rh);
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
    cout << endl;
    cout << "Level order traversal line by line : " << endl;
    levelOrderLineByLine(root);
    cout << "Size of a binary tree : " << getSizeRecursive(root) << endl;
    int maxBT = maxOfBinaryTree(root);
    cout << "Max of binary tree : " << maxBT << endl;
    bool isCSumRes = isCSum(root);
    cout << "Children Sum Property: " << isCSumRes;
    bool isBal = checkForBalancedTree(root);
    cout << "is tree balanced: " << isBal << endl;
    cout << "max width of binary tree: " << maxWidthOfBinaryTree(root) << endl;

    // spiral form
    Node *rootspiral = new Node(1);
    rootspiral->left = new Node(2);
    rootspiral->right = new Node(3);
    rootspiral->left->left = new Node(4);
    rootspiral->left->right = new Node(5);
    rootspiral->right->left = new Node(6);
    rootspiral->right->right = new Node(7);
    printSpiral(rootspiral);

    Node *rootDiam = new Node(10);
    rootDiam->left = new Node(20);
    rootDiam->right = new Node(30);
    rootDiam->right->left = new Node(40);
    rootDiam->right->right = new Node(60);
    rootDiam->right->left->left = new Node(50);
    rootDiam->right->right->right = new Node(70);
    heightDiam(rootDiam);
    cout << "diameter of a tree: " << res << endl;

    return 0;
}