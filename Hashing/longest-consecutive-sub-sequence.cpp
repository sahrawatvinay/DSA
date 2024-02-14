#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
void longestConsecutiveSubSequence(vector<int> &v)
{
    unordered_set<int> s(v.begin(), v.end()); // put in hs so that all elements are unique
    int res = 1;                              // init by 1 since 1 is the min length of sub seq
    for (auto x : s)
    {
        if (s.find(x - 1) == s.end()) // if we did not find the prev element, we know this is th 1st elem of sub seq
        {
            int curr = 1;                // set curr len as 1, as this(x) is the first element of sub seq
            while (s.find(x + curr) != s.end()) // keep increasing current length if we find following elements
                curr++;
            res = max(res, curr); // update previous result and update value
        }
    }
    cout << "max len of conseq sub seq is : " << res;
}
int main()
{
    vector<int> v{1, 3, 9, 2, 8, 2};
    longestConsecutiveSubSequence(v);
    return 0;
}