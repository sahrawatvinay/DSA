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
    printLinkedList(head);
    return 0;
}