/*
- follows FIFO : First in First out
- Elements are inserted at the back (end) and are deleted from the front.
- all operations in O(1)
- priority_queue : element with largest value stays at the top, if you keep pushing elements, 
    they will be automatically placed as per their priority i.e. decreasing order. push top, pop
- pq : push/pop : log(n), top : O(1)
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);    //{1}
    q.push(2);    //{1,2}
    q.emplace(3); //{1,2,3}
    q.emplace(4); //{1,2,3,4}

    q.back() += 5;
    cout << "Back of the Queue: " << q.back() << endl; // prints 9

    cout << q.front() << endl; // prints 1

    q.pop();
    cout << q.front() << endl; //prints 2
    cout << q.back() << endl; //prints 9

    return 0;
}