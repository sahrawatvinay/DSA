//you can push and pop at both back and front
#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_front(2);
    dq.emplace_back(3); // fast
    dq.emplace_front(4);

    cout << "after pushing";
    for (auto e : dq)
        cout << e << " ";

    cout << endl;
    dq.pop_back();
    dq.pop_front();

    cout << "after popping";
    for (auto e : dq)
        cout << e << " ";
    cout << dq.back() << " " << dq.front();

    //rest fns are same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap
    return 0;
}