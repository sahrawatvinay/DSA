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
    return head;
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
    printList(head);
    return 0;
}