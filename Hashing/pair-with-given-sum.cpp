#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
void checkIfPairExisits(vector<int> &v, int k)
{
    unordered_set<int> s;
    for (auto x : v)
    {
        if (s.find(k - x) != s.end()) // check if there is a value present in array that can help
                                      // make the current value equal to sum
        {
            cout << "pair exists" << endl;
            return;
        }
        else
            s.insert(x);
    }
    cout << "pair does not exists" << endl;
}
int main()
{
    vector<int> v{3, 8, 4, 7, 6, 1};
    int k = 7;
    checkIfPairExisits(v, k);
    return 0;
}