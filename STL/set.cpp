/*
- all the elements are unique
- behind the scenes implementation is done by BST
- we can not modify any element, updation of elements not possible
- all the elements are sorted in ascending order
- unordered set is faster than set
- elements are fetched in random order not in sorted order
- does not provide direct access to elements by index because 
    it is an ordered container that relies on the ordering of elements
- insert, find, erase and count O(logn)
- size, begin, end O(1)
*/

#include <iostream>
#include <set>
using namespace std;

void printSet(set<int> &s)
{
    for (auto i : s)
        cout << i << " ";
    cout << endl;
}

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(4);
    s.insert(2);
    s.insert(3);
    s.insert(3);

    printSet(s);

    set<int>::iterator it = s.begin();
    std::advance(it, 2); //advancing iterator to another index, it++ did not work

    cout << "After removal -> " << endl;
    printSet(s);

    //check if element is present in a set or not
    cout << "5 is present or not" << s.count(5) << endl;

    //get reference of the element to be found
    set<int>::iterator itr = s.find(2); // If x is found, it returns an iterator pointing to the location where x is found; otherwise, it returns s.end().

    s.erase(it);
    return 0;
}