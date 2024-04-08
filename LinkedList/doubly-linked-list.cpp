#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        data = d;
        prev = NULL;
        next = NULL;
    }
};
Node *insertInBeginning(Node *head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    if (head != NULL)
        head->prev = temp;
    return temp;
}
Node *insertAtEnd(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
        return temp;
    Node *curr = head;
    while (curr->next != NULL) // traversing to the end node
        curr = curr->next;
    curr->next = temp;
    temp->prev = curr;
    return head;
}
void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}
Node *reverseLinkedList(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *temp = NULL; // create emp varialbe to store prev of node
    Node *curr = head; // curr to traverse the LL
    while (curr != NULL)
    {
        temp = curr->prev;       // store prev in curr variable
        curr->prev = curr->next; // update prev to curr->next
        curr->next = temp;       // curr-> next to temp var, which has prev
        curr = curr->prev;       // since prev now hold's next posi we will move forward using this
    }
    return temp->prev; // last node of the original list, which becomes the new head of the reversed list after the reversal process. This is achieved by returning temp->prev, as temp points to the last node after the loop ends, and temp->prev is now the head of the reversed list.
}
Node *deleteHead(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
        return NULL;
    else
    {
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        return head;
    }
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
    else
    {
        Node *curr = head;
        while (curr->next != NULL) // traverse to the last node
            curr = curr->next;
        curr->prev->next = NULL; // set second last nodes' to NULL as we need to delete the last node
        delete curr;             // delete the current node, which is at the last
        return head;             // return head as we have deleted last node using curr node which is pointing to last
    }
}
int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    head = insertInBeginning(head, 5);
    head = insertAtEnd(head, 15);
    head = reverseLinkedList(head);
    printList(head);
    return 0;
}