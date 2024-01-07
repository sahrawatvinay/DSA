/*
- implemented with the help of doubly linked list
- doubly linked list : 2 pointers one for front and one for back
- random access is not possible, we need to traverse to a particular index and fetch it
- delete complexity 0(n)
*/
#include <iostream>
#include <list>
using namespace std;

void printList(list<int> &l)
{
    for (auto x : l)
        cout << x << " ";
    cout << endl;
}

int main()
{
    list<int> l;
    list<int> x(5, 69);

    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);

    // can only insert at back or front as random access in not possible, and can not insert element at particular index
    l.insert(l.begin(), 8);
    l.insert(l.end(), 9);
    printList(l);

    cout << "check size and capacity of a list -> " << endl;
    cout << l.size() << endl;
    cout << l.max_size() << endl;
    //erase each and every element of list
    for (auto it = l.begin(); it != l.end();)
    {
        it = l.erase(it); // The erase function in C++ returns an iterator pointing to the element that follows the last element erased.
                          // That's why clear() is preferred, just to erase 1 element, erase can be used. 
    }
    cout << "After erasing each and every element in a list -> " << endl; 
    printList(l);
    cout << l.size() << endl;
    cout << l.max_size() << endl;
    return 0;
}