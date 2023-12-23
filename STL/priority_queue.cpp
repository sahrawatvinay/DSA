/*
- by default priority queue is implemented with max_heap
- max_heap : the maximum element will be placed at the top. Elements will be sorted in descending order
- min_heap : can also be done in a way that the elements are sorted in ascending order
- access of elements by popping elements just like stack and queue
- push, pop, top, empty, size are main functions
*/
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> pqmax;                            // by default max_heap
    priority_queue<int, vector<int>, greater<int>> pqmin; // min heap, sorted in ascending order
    pqmax.push(4);
    pqmax.push(1);
    pqmax.push(2);
    pqmax.push(5);
    pqmax.push(9);
    cout << "Element at top : " << pqmax.top() << endl;
    pqmax.pop();
    cout << "Element at top after popping : " << pqmax.top() << endl;
    // traversal of elements
    int x = pqmax.size(); // size calculated earlier because after poping size value changes, so for loop gives wrong output
    for (int i = 0; i < x; i++)
    {
        cout << pqmax.top() << " ";
        pqmax.pop();
    }
    cout << endl << "is priority queue empty : " << pqmax.empty() << endl;

    pqmin.push(4);
    pqmin.push(1);
    pqmin.push(2);
    pqmin.push(5);
    pqmin.push(9);
    cout << "Element at top : " << pqmin.top() << endl;
    pqmin.pop();
    cout << "Element at top after popping : " << pqmin.top() << endl;
    // traversal of elements
    int y = pqmin.size(); // size calculated earlier because after poping size value changes, so for loop gives wrong output
    for (int i = 0; i < y; i++)
    {
        cout << pqmin.top() << " ";
        pqmin.pop();
    }
    cout << endl << "is priority queue empty : " << pqmin.empty() << endl;
    return 0;
}