#include <iostream>
using namespace std;
/// @brief find subarray with given sum using sliding window technique
/// @param arr pointer to an array
/// @param n size of an array
/// @param sum the value that we need to find out
/// @return true or false based on computation
/// Time Complexity : O(n), it may look like O(n^2) but it is not because in the while loop we are simply removing and adding sum which takes constant time
bool findSubArrayWithGivenSum(int arr[], int n, int sum)
{
    int s = 0, curr = 0; //initialize starting point and current sum to 0
    for (int e = 0; e < n; e++) //keep incresing window size and icrement the value of sum
    {
        curr += arr[e];
        while (curr > sum) // keep removing the elements from beginning unless the value of sum becomes lower than the current sum
        {
            curr -= arr[s]; // remove the added values from start by subtracting those values
            s++; // decrease window size
        }
        if (curr == sum)
            return true;
    }
    return false;
}
int main()
{
    int size = 9;
    int arr[size] = {1, 4, 20, 9, 10, 5};
    int sum = 33;
    bool result = findSubArrayWithGivenSum(arr, size, sum);
    cout << result;
    return 0;
}