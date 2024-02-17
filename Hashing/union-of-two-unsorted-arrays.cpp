#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
void unionAxB(vector<int> &a, vector<int> &b)
{
    unordered_set<int> s(a.begin(), a.end());
    for (auto x : b)
        s.insert(x); // duplicate elements will automatically be removed
    for (auto x : s)
        cout << x << " ";
}
int main()
{
    vector<int> a{15, 20, 5, 15};
    vector<int> b{15, 15, 15, 20, 10};
    unionAxB(a, b);
    return 0;
}