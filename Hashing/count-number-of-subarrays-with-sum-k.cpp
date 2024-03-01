#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int numberOfSubarraysWithKSum(vector<int> &v, int &sum)
{
    int res = 0;
    int prefixSum = 0;
    unordered_map<int, int> prefixSumCountMap; // key : prefixSum, value : count how many times it appears
    //// Initialize the prefix sum with 0 to cover the case where a subarray starts from the beginning.
    prefixSumCountMap[0] = 1; // init map by prefixSum = 0, and its count 1
    for (int i = 0; i < v.size(); i++)
    {
        prefixSum += v[i];

        // Check if there is a previous prefix sum that equals (prefixSum - k).
        if (prefixSumCountMap.find(prefixSum - sum) != prefixSumCountMap.end())
            res += prefixSumCountMap[prefixSum - sum];

        // Increment the count of the current prefix sum.
        prefixSumCountMap[prefixSum]++;
    }
    return res;
}
int main()
{
    vector<int> v{1, 2, 1, 2, 1};
    int sum = 3;
    int res = numberOfSubarraysWithKSum(v, sum);
    cout << "Count of subarrays having sum = " << sum << " are : " << res << endl;
    return 0;
}