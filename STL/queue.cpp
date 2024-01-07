/*
- Works on FIFO(First In First Out) principle
- push, pop, front, empty are main functions
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
    return 0;
}