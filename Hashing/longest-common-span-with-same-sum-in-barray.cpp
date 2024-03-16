#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
/// @brief Start and end index in both arrays should be same, sub array 1 should have sum same as in sub array 2
/// Logic :
/// 1. create a temp array which will store either v1[] - v2[] or v2[] - v1[]
/// 2. we get 0 when values are same in length
/// 3. we get 1 when arr1[i] = 1 and arr2[i] = 0
/// 4. -1 if arr1[i] = 0, arr2[i] = 1
/// Problem resuces with length of longest sub array with zero sum, logically correct, if there is -1, 1 will give sum = 0
/// Reason : 1 and -1 combos will give us subarray 0
/// @param v1 binary array 1
/// @param v2 binary array 2
/// O(n), O(n) time and Aux Space
void longestCommonSpanWithSameSum(vector<int> &v1, vector<int> &v2)
{
    vector<int> temp;
    for (int i = 0; i < v1.size(); i++)
        temp.push_back(v1[i] - v2[i]);
    unordered_map<int, int> m;
    int maxLen = 0;
    int prefixSum = 0;
    for (int i = 0; i < temp.size(); i++)
    {
        prefixSum += temp[i];
        if (prefixSum == 0)
            maxLen = i + 1;
        if (m.find(prefixSum) == m.end())
            m[prefixSum] = i;
        else
            maxLen = max(maxLen, (i - m[prefixSum]));
    }
    cout << "max len : " << maxLen;
}
int main()
{
    vector<int> v1{0, 1, 0, 1, 1, 1, 1}; // idx 1 to last
    vector<int> v2{1, 1, 1, 1, 1, 0, 1}; // idx 1 to last
    longestCommonSpanWithSameSum(v1, v2);
    return 0;
}