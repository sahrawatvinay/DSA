#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
// set all the zero's to -1 in the vector
// the problem breaks down to max Sum subarray with sum 0
void longestSubArrayWithEqualZeroesAndOnes(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
            v[i] = -1;
    }
    int maxLen = 0;
    int prefixSum = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < v.size(); i++)
    {
        prefixSum += v[i];
        if (prefixSum == 0)
            maxLen = i + 1;
        if (m.find(prefixSum) == m.end())
            m.insert({prefixSum, i});
        if (m.find(prefixSum) != m.end())
            maxLen = max(maxLen, i - m[prefixSum]);
    }
    cout << maxLen << endl;
}
int main()
{
    vector<int> v{1, 0, 1, 1, 1, 0, 0};
    longestSubArrayWithEqualZeroesAndOnes(v);
    return 0;
}