#include <iostream>
using namespace std;
/// @brief compute how many total units of water can be stored over the bars so as to get total units of water trapped
/// @param arr arr containing height of bars
/// @param n size of array
/// @return total water logged after computation
/// Time complexity : Theta n
/// Space Complexity : Theta n auxillary space
int maxWaterTrapped(int arr[], int n)
{
    int res = 0;
    int lMax[n], rMax[n]; //compute left and right max and store in array for every element to compute how much water is over that.
    lMax[0] = arr[0];
    // start from left to right to find the max bw arr and prev value stored in lMax
    for (int i = 1; i < n; i++)
        lMax[i] = max(arr[i], lMax[i - 1]);
    rMax[n - 1] = arr[n - 1];
    // start from right to left to find max bw arr and prev value stored in rMax
    for (int i = n - 2; i >= 0; i--)
        rMax[i] = max(arr[i], rMax[i + 1]);
    // compute for middle elements only as the end elements can not hold water
    for (int i = 1; i < n - 1; i++)
        res += min(lMax[i], rMax[i]) - arr[i];
    return res;
}
int main()
{
    int arr[5] = {3, 0, 1, 2, 5};
    cout << "max water trapped : " << maxWaterTrapped(arr, 5) << " units";
    return 0;
}