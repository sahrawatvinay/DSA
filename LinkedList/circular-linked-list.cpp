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
void printList(Node *head)
{
    if (head == NULL)
        return;
    Node *p = head;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
}
/// @brief Logic : insert a node bw first and second node
/// Swap the data of head and head's next, which is new node
/// 5 will become the first node and 10 will become the second node
/// @param head
/// @param x
Node *insertInBeginning(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return head;
    }
}
/// @brief Logic :
/// Insert a node in between first and second
/// swap value of first node and newly added node
/// now return updated head which is temp so that it now points at new head with values swapped
/// @param head head of linked list
/// @param x value of node to be added
/// @return updated head
Node *insertAtEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        // insert node at second posi
        temp->next = head->next;
        head->next = temp;

        // swapping
        int t = temp->data;
        temp->data = head->data;
        head->data = t;

        // return updated head
        return temp;
    }
}
Node *deleteHead(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == head)
    {
        delete head;
        return NULL;
    }
    // copy data of second node to first node
    head->data = head->next->data;

    // store pointer to second node to be deleted in temp variable
    Node *temp = head->next;

    // update current's next to the third node as second node is to be deleted
    head->next = head->next->next;

    delete temp;
    return head;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head; // makes circular and points the last node back to 1st node
    head = insertInBeginning(head, 5);
    head = insertAtEnd(head, 69);
    head = deleteHead(head);
    printList(head);
    return 0;
}