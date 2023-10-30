/*
- follows FIFO : First in First out
- all operations in O(1)
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