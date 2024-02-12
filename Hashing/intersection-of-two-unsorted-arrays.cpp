#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
/// @brief find the elements that are common in a and b
/// we pick the elements from b's set because we need to maintain the order as per a's elements
/// Time : O(n+m)
/// Space : O(n)
/// @param a vector a
/// @param b vector b
void intersectionAxB(vector<int> &a, vector<int> &b)
{
    unordered_set<int> s(b.begin(), b.end()); // create a set which will contain all unique elements of set b
    for (auto x : a)                          // now loop through the elements in a and print the elements that are in set created by b's elements i.e. common elements
        if (s.find(x) != s.end())             // If x is found, it returns an iterator pointing to the location where x is found; otherwise, it returns s.end().
            cout << x << endl;
}
int main()
{
    vector<int> a{10, 20, 30};
    vector<int> b{30, 10};
    intersectionAxB(a, b);
    return 0;
}