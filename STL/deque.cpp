/*
- Deque : double-ended queue
- Double-ended queues are sequence containers with dynamic sizes that can be expanded or contracted on both ends (either its front or its back)
- Insertion and removal of elements from both ends is possible
- multiple fixed static arrays, there is tracking to know that which data is avaialble in which array
- dynamic: size can increase and decrease
- random access is possible : using .at()
*/
#include <iostream>
#include <deque>
using namespace std;

void printDeque(deque<int> &d)
{
    for (auto x : d)
        cout << x << " ";
    cout << endl;
}

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);
    printDeque(d);
    cout << "dq size -> " << d.size() << endl;
    cout << "dq capacity -> " << d.max_size() << endl;

    cout << "first and last element -> " << d.front() << " " << d.back() << endl;

    // random access of elements
    cout << "0th index -> " << d.at(0) << endl;
    cout << "1st index -> " << d[1] << endl;

    cout << "Check if empty or not -> " << d.empty() << endl;

    // insertion of elements in middle/ at specific index
    d.insert(d.begin() + 1, 6); // inserting element at index 1
    d.insert(d.end(), 69);      // insert elements at end
    cout << "After inserting elements at '6' index 1 and '69' at end -> " << endl;
    printDeque(d);

    // removal of elements
    d.erase(d.begin()); // removes only index at 0
    cout << "After removing element at index 0 -> " << endl;
    printDeque(d);
    d.erase(d.begin() + 1, d.begin() + 3); // removes elements from index 1 to 2, 3 is excluded
    printDeque(d);

    //popping some elements
    d.pop_back();
    d.pop_front();
    cout << "after popping back and front -> " << endl;
    printDeque(d);

    cout << "dq size -> " << d.size() << endl;
    cout << "dq capacity -> " << d.max_size() << endl;
    return 0;
}