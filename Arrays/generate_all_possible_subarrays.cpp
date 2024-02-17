#include <iostream>
#include <vector>
using namespace std;
void generateAllPossibleSubArrays(int arr[], int size)
{
    vector<vector<int>> possibleSubArrays;
    for (int i = 0; i < size; i++) // starting index
    {
        for (int j = i; j < size; j++) // ending indexes
        {
            for (int k = i; k <= j; k++) // loops from start to end indexes and create sub arrays
            {
                vector<int> v;
                v.push_back(arr[k]);
                possibleSubArrays.push_back(v);
            }
        }
    }
    for (auto x : possibleSubArrays)
    {
        for (auto i : x)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[9] = {5, 4, 6, 8, 11};
    generateAllPossibleSubArrays(arr, 5);
    return 0;
}