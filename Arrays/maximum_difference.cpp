#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
/// @brief find max difference, find max value of arr[j]-arr[i] such that j > i, ie larger element appears on the left and smaller element on the right
/// LOGIC : We consider every element as arr[j], the right element and we also keep track of min element
/// @param arr pointer to an array
/// @param n size of the array
/// @return max difference
int findMaximumDifference(int arr[], int n)
{
    int res = arr[1] - arr[0], minVal = arr[0];
    for (int j = 0; j < n; j++)
    {
        res = max(res, arr[j] - minVal);
        minVal = min(arr[j], minVal);
    }
    return res;
}
int main()
{
    int arr[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    printArray(arr, 9);
    int result = findMaximumDifference(arr, 9);
    cout << result;
    return 0;
}