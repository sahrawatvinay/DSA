/*
- Works on FIFO(First In First Out) principle
- push, pop, front, back, empty, size are main functions
- item inserted at the first will go out when popped // in academics we call pop = dequeue
- item will always be inserted at the end when we use push // in academics we call push = enqueue
*/

#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("Mercury");
    q.push("Venus");
    q.push("Earth");
    q.push("Mars");
    cout << "Size of q -> " << q.size() << endl;
    cout << "First element -> " << q.front() << endl;
    cout << "Queue is empty -> " << q.empty() << endl;
    q.pop();
    cout << "First element -> " << q.front() << endl;
    cout << "Last element -> " << q.back() << endl;
    //traversal
    while (!q.empty())
    {
        cout << q.front() << "->";
        q.pop();
    }
    return 0;
}