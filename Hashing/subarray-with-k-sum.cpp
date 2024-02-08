#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
bool checkIfSubArrayWithKSumExists(vector<int> &v, int &sum)
{
    unordered_set<int> s;
    int prefixSum = 0;
    for (auto x : v)
    {
        prefixSum += x;
        if (prefixSum == sum)
            return true;
        if (s.find(prefixSum - sum) != s.end()) // we found such a subarray whose sum is zero as it is resulting in a value that was computed earlier and saved in hashset
            return true;
        s.insert(prefixSum);
    }
    return false;
}
int main()
{
    vector<int> v{5, 8, 6, 13, 3, -1};
    int sum = 22;
    bool res = checkIfSubArrayWithKSumExists(v, sum);
    cout << "Pair exisits with sum = 0 : " << res << endl;
    return 0;
}