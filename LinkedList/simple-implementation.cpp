#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void printLinkedList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
void recursivePrint(Node *head)
{
    if (head == NULL)
        return;
    cout << head->data << " ";
    recursivePrint(head->next);
}
/// @brief inserts the node at beginning and returns the new head
/// TC - O(1)
/// @param head previous head of linked list
/// @param val value to be inserted at beginning
/// @return new head
Node *insertAtBeginning(Node *head, int val)
{
    Node *temp = new Node(val); // allocate memory for new node and store the pointer to it in temp variable
    temp->next = head;          // temp's next will now point to prev head
    return temp;                // return new head
}
Node *insertAtEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL) // explicit case to handle if LL is empty/NULL, temp will be new head
        return temp;
    Node *curr = head;         // head points to the beginning of the linked list, while curr is a pointer that moves along the list during traversal, allowing the function to locate the end of the list for the insertion of a new node.
    while (curr->next != NULL) // if we used here curr != null then we wont be able to get last node, it will point to null
        curr = curr->next;
    curr->next = temp;
    return head;
}
Node *insertAtIndex(Node *head, int val, int pos)
{
    Node *temp = new Node(val);
    if (pos == 1) // if we need to add node at 1st position
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    for (int i = 1; i < pos - 1 && curr != NULL; i++) // traverse to that index
        curr = curr->next;                            // curr != NULL in for to check if head's next is not null as we need to traverse furthur
    if (curr == NULL)                                 // position out of range
        return head;
    temp->next = curr->next; // 1st update temp's next, if we 1st update curr->next to temp then we loose track of continuing itemsF
    curr->next = temp;
    return head;
}
// head will always be updated when we delete
Node *deleteHead(Node *head)
{
    if (head == NULL)
        return NULL;
    Node *temp = head->next; // create temp var that points to next elemnt of head
    delete head;             // delete previous head
    return temp;             // return updated head
}
Node *deleteLastNode(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while (curr->next->next != NULL) // to make sure we have atleast 2 nodes, we have handeled 2 cases before, otherwise segmentation fault
        curr = curr->next;
    delete (curr->next); // deallocating last memory
    curr->next = NULL;   // then making it null
    return head;
}
int findInLinkedList(Node *head, int x)
{
    int pos = 1;
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == x)
            return pos;
        else
        {
            pos++;
            curr = curr->next;
        }
    }
    return -1;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    printLinkedList(head);
    recursivePrint(head);
    cout << endl;
    head = insertAtBeginning(head, 5); // head will get updated here
    head = insertAtEnd(head, 9);
    head = insertAtIndex(head, 25, 3);
    head = deleteHead(head);
    head = deleteLastNode(head);
    printLinkedList(head);
    int posi = findInLinkedList(head, 20);
    cout << "pos : " << posi << endl;
    return 0;
}