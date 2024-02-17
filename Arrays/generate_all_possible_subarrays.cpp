#include <iostream>
#include <vector>
using namespace std;
void generateAllPossibleSubarrays(int arr[], int size)
{
    vector<vector<int>> subArrays;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            // Print subarray between current starting
            // and ending points
            for (int k = i; k <= j; k++){
                
            }
        }
    }
}
int main()
{
    int arr[5] = {5, 4, 6, 8, 11};
    generateAllPossibleSubarrays(arr, 5);
    return 0;
}