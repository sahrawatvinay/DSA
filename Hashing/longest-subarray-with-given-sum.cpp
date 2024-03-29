#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
bool longestSubArrayWithKSum(vector<int> &v, int &sum)
{
    int res = 0;
    int prefixSum = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < v.size(); i++)
    {
        prefixSum += v[i];
        if (sum == prefixSum)
            res = i + 1;
        // check if presum is already present in map or not, if already present, then we do not need to replace old values, beacuse it will result in larger index
        if (m.find(prefixSum) == m.end()) // if prefix sum is not found in unordered map, then insert the prefix sum along with the index other wise dont replace old value
            m.insert({prefixSum, i});
        else // if prefixSum - sum is found, update the maxLength
            res = max(res, i - m[prefixSum - sum]);
    }
    return res;
}
int main()
{
    vector<int> v{8, 3, 1, 5, -6, 6, 2, 2};
    int sum = 4;
    int res = longestSubArrayWithKSum(v, sum);
    cout << "Pair exisits with sum = 0 : " << res << endl;
    return 0;
}