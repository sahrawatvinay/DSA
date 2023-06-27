#include <iostream>
using namespace std;
/// @brief Find length of sub array that contains alternating even odd elements
/// @param arr pointer to array
/// @param n length of an array
/// @return length of subarray that contains alternating even odd elements
int findLongestEvenOddSubarray(int arr[], int n)
{
    int currLength = 1;
    int maxLength = 1;
    for (int i = 1; i < n; i++)
    {
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || arr[i] % 2 != 0 && arr[i - 1] % 2 == 0)
        {
            currLength++;
            maxLength = max(maxLength, currLength);
        }
        else
            currLength = 1;
    }
    return maxLength;
}
int main()
{
    int arr[9] = {5, 10, 34, 10, 45, 43, 56, 67, 58};
    int result = findLongestEvenOddSubarray(arr, 9);
    cout << result;
    return 0;
}