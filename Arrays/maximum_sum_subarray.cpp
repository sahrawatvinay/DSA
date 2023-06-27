#include <iostream>
using namespace std;
/// @brief find max sum subarray, subarray is a part of main array continuous locations
/// LOGIC: Kadanes algo : 3 steps
/// step 1: sum = sum + arr[i], keep calculating sum of subarrays
/// step 2: update maxSum, check if current sum is greater than the maxSum if yes, update it
/// step 3: if current sum of sub array becomes negative, ignore previous part of subarray by setting sum = 0
/// @param arr pointer to an array
/// @param n size of an array
/// @return computes max sum of sub array and returns it
int findMaxSumSubarray(int arr[], int n)
{
    int sum = 0;
    int maxSum = arr[0];
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        maxSum = max(sum, maxSum);
        if (sum < 0)
            sum = 0;
    }
    return maxSum;
}
int main()
{
    int arr[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = findMaxSumSubarray(arr, 9);
    cout << "max sub array sum is : " << result;
    return 0;
}