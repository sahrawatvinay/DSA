#include <iostream>
#include <climits>
using namespace std;
/// @brief circular sum of sub array
/// Step 1 : Find max normal sum of array using kadanes algo
/// Step 2 : if normal sum is negative return result
/// Step 3 : to find max circular sum : get total of all the elements in array, invert the values of the array and find max using kadanes algo which will give us minimum,
///          adding these two will provide us with max circular sum
/// Step 4: return the max of normal and circular which is the result
/// @param arr pointer to the array
/// @param n size of an array
/// @return result after computation
int kadanesAlgo(int arr[], int n)
{
    // to handle cases when all elements are negative
    int maxElement = INT_MIN;
    for (int i = 0; i < n; i++)
        maxElement = max(maxElement, arr[i]);

    // If all elements are negative, return the maximum element
    if (maxElement < 0)
        return maxElement;

    int sum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxSum = max(maxSum, sum);
        if (sum < 0)
            sum = 0;
    }
    return maxSum;
}
int main()
{
    int size = 2;
    int arr[size] = {8, 3};
    int maxNormal = kadanesAlgo(arr, size);
    if (maxNormal < 0)
    {
        cout << "max circular sum is : " << maxNormal;
        return 0;
    }
    // calculating circular sum
    int arrTotalSum = 0;
    for (int i = 0; i < 9; i++)
    {
        arrTotalSum += arr[i];
        arr[i] = -arr[i];
    }
    int maxCircular = arrTotalSum + kadanesAlgo(arr, size);
    cout << "max circular sum is : " << max(maxNormal, maxCircular);
    return 0;
}