/*
- stores everything in a sorted order : increasing
- unique elements : no duplicates
- not linear container, tree is maintained
- log(n) complexity for every operation 
- unordered_set : stores unique elements but does not follow sorting order it can be in any order, time complexity is one
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.emplace(4);
    s.emplace(6);
    s.emplace(3);
    s.emplace(3); //{1,2,3,4,6}

    s.erase(2);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    auto x = s.find(9);
    cout << *x;
    return 0;
}