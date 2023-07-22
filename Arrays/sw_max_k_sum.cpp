#include <iostream>
using namespace std;
/// @brief sliding window technique
/// @param arr points to the array
/// @param n size of array
/// @param k window size
/// @return max sum by calculating sum of elements based on window size.
int findMaxKSum(int arr[], int n, int k)
{
    int curr = 0; // take a variable curr to store the result of elements of K window size
    for (int i = 0; i < k; i++)
        curr += arr[i];
    int res = curr; // store in a var res so that to calculate max sum and keep updating if max becomes greater
    for (int i = k; i < n; i++) // now for next steps, k becomes the starting point for the following window size elements
    {
        curr = curr + arr[i] - arr[i-k]; // the curr sum is now calculated by removing the first element and adding value of the next element
        res = max(curr, res); // update value in current if value of current window exceeds
    }
    return res;
}
int main()
{
    int size = 9;
    int arr[size] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int k = 3; // window size
    int result = findMaxKSum(arr, size, k);
    cout << result;
    return 0;
}