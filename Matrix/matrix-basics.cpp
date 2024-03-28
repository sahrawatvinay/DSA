#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> vect{
        {1, 2, 3},
        {2, 3, 4},
        {5, 6, 7}};
    for (auto r : vect)
    {
        for (int c : r)
        {
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}