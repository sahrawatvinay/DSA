#include <iostream>
using namespace std;
/// @brief sliding window technique
/// @param arr points to the array
/// @param n size of array
/// @param k window size
/// @return max sum by calculating sum of elements based on window size.
int findMaxKSum(int arr[], int n, int k)
{
    int curr = 0;
    for (int i = 0; i < k; i++)
        curr += arr[i];
    int res = curr;
    for (int i = k; i < n; i++)
    {
        curr = curr + arr[i] - arr[i-k];
        res = max(curr, res);
    }
    return res;
}
int main()
{
    int size = 9;
    int arr[size] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int k = 3;
    int result = findMaxKSum(arr, size, k);
    cout << result;
    return 0;
}