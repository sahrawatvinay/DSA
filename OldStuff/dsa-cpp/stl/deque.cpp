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

    cout << "after pushing" << endl;
    for (auto e : dq)
        cout << e << " ";

    cout << endl;
    dq.pop_back();
    dq.pop_front();

    cout << "after popping" << endl;
    for (auto e : dq)
        cout << e << " ";

    cout << endl;
    cout << dq.back() << " " << dq.front(); ///back displays last element. front displays first element

    //rest fns are same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap
    return 0;
}