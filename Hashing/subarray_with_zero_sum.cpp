#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
/// @brief Check if there exists a subarray with sum zero
/// Algo : Use prefix sum and hashing
/// 1. traverse through the array from l to r, keep computing prefix sum
/// 2. Check if this prefix sum is already available in the set. if yes, return true
/// 3. If while computing prefix sum, it becomes 0 then also return true
/// 4. otherwise insert the currently computed prefix sum into set.
/// @param v vector
/// @param s sum, which is 0 here
bool checkIfSubArrayWithZeroSumExists(vector<int> &v, int &sum)
{
    unordered_set<int> s;
    int prefixSum = 0;
    for (auto x : v)
    {
        prefixSum += x;
        if (prefixSum == 0)
            return true;
        if (s.find(prefixSum) != s.end()) // we found such a subarray whose sum is zero as it is resulting in a value that was computed earlier and saved in hashset
            return true;
        s.insert(prefixSum);
    }
    return false;
}
int main()
{
    vector<int> v{-3, 4, -3, -1, 1};
    int sum = 0;
    bool res = checkIfSubArrayWithZeroSumExists(v, sum);
    cout << "Pair exisits with sum = 0 : " << res << endl;
    return 0;
}