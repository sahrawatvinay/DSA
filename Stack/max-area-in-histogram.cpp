#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <climits>
using namespace std;
vector<int> getPrevSmaller(vector<int> &v)
{
    vector<int> res;
    stack<int> s;
    for (int i = 0; i < v.size(); i++)
    {
        while (!s.empty() && v[s.top()] >= v[i])
            s.pop();
        int prevS = s.empty() ? -1 : s.top();
        res.push_back(prevS);
        s.push(i);
    }
    return res;
}
vector<int> getNextSmaller(vector<int> &v)
{
    vector<int> res;
    stack<int> s;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        while (!s.empty() && v[s.top()] >= v[i])
            s.pop();
        int nexS = s.empty() ? v.size() : s.top();
        res.push_back(nexS);
        s.push(i);
    }
    reverse(res.begin(), res.end());
    return res;
}
int getMaxArea(vector<int> &v)
{
    vector<int> prevSmaller = getPrevSmaller(v);
    vector<int> nextSmaller = getNextSmaller(v);
    int maxArea = INT_MIN;
    int currArea = INT_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        currArea = (nextSmaller[i] - prevSmaller[i] - 1) * v[i];
        maxArea = max(currArea, maxArea);
    }
    return maxArea;
}
int main()
{
    vector<int> v{4, 2, 1, 5, 6, 3, 2, 4, 2};
    int res;
    res = getMaxArea(v);
    cout << "Max Area : " << res;
    return 0;
}