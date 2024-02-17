#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
/// @brief count frequency of elements in array
/// TC : O(n), AUX space : O(n)
/// @param v vector containing elements
void printFrequencyOfElements(vector<int> &v)
{
    unordered_map<int, int> m;
    for (auto x : v)
        m[x]++;
    for (auto x : m)
        cout << x.first << " : " << x.second << endl;
}
int main()
{
    vector<int> v{3, 3, 1, 2, 4, 5, 6, 7, 7, 7};
    printFrequencyOfElements(v);
    return 0;
}