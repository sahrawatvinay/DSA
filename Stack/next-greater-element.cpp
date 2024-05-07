#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
vector<int> nextGreaterElement(vector<int> &v)
{
    vector<int> res;
    stack<int> st;
    int n = v.size();
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && v[i] >= st.top())
            st.pop();
        int ng = st.empty() ? -1 : st.top();
        res.push_back(ng);
        st.push(v[i]);
    }
    reverse(res.begin(), res.end());
    return res;
}
int main()
{
    vector<int> v{5, 15, 10, 8, 6, 12, 9, 18};
    vector<int> res;
    res = nextGreaterElement(v);
    for (int x : res)
        cout << x << " ";
    return 0;
}