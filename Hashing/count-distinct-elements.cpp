#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
/// @brief count what all elements are present in an array
/// set will contain the entery of every element at least once, in case of duplicates, only one entry will be inserted
/// time complexity : O(n) for every item we check if it's available or not everything happening internally
/// aux space : O(n) , if all elements are unique
/// @param v vector
void countDistinctElements(vector<int> &v)
{
    unordered_set<int> s(v.begin(), v.end()); // pass iterator, begin and end. In case of arrays (arr, arr + n)
    cout << s.size();
}
int main()
{
    vector<int> v{3, 3, 1, 8, 8, 10, 1, 16, 2, 4, 5, 6, 7, 7, 7};
    countDistinctElements(v);
    return 0;
}