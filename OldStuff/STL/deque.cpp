#include <bits/stdc++.h>
using namespace std;
void printDqueue(deque<int> &dq)
{
    for (int i : dq)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_front(4);
    printDqueue(dq);
    dq.pop_back();
    dq.pop_front();
    cout << "pop back and pop front" << endl;
    printDqueue(dq);
    dq.push_front(5);
    dq.push_front(6);
    printDqueue(dq);
    cout << dq.at(0) << " " << dq.at(1) << " " << dq.at(dq.size() - 1) << endl;
    cout << dq.front() << endl;
    cout << dq.back() << endl;
    cout << "Is it empty : " << dq.empty() << endl;
    printDqueue(dq);
    dq.erase(dq.begin(), dq.end());
    printDqueue(dq);
}