#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
void countDistinctElementsInEveryWindow(vector<int> &v, int k)
{
    unordered_map<int, int> m;
    for (int i = 0; i < k; i++) // traversing throungh 1st window
        m[v[i]]++;
    cout << m.size() << " ";           // after creating freq map, return size of distinct elements
    for (int i = k; i < v.size(); i++) // traversing to remaining windows
    {
        m[v[i - k]]--;        // decrease the value in map of the first element of previous window, if available
        if (m[v[i - k]] == 0) // if it becomes 0, then remove it from hashmap
            m.erase(v[i - k]);
        m[v[i]]++; // update the current value in map, print the size, i.e. include current element in window size
        cout << m.size() << " ";
    }
}
int main()
{
    vector<int> v{10, 20, 10, 10, 30, 40};
    int k = 4;
    countDistinctElementsInEveryWindow(v, k);
    return 0;
}