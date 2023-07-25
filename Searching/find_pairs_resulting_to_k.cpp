#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/// @brief check if there exists any pair which results to a given value, array should be sorted
/// @param arr points to array
/// @param n size of an array
/// @param k check if there is a pair of elements whose sum is k 
/// @return true/ false
int checkIfPairExistsResultingToK(int arr[], int n, int k)
{
    int i = 0, j = n - 1;
    while (i < j) // since 2 pairs are needed to be found out
    {
        if ((arr[i] + arr[j]) == k)
            return true;
        else if (arr[i] + arr[j] < k) // if the current pair sum is less, means the lowest value is unable to produce sum with largest value, ignore and move next, go to higher side
            i++;
        else    // if current pair sum is more then we can safely remove the highest value and decrement j, go to lower value side
            j--;
    }
    return false;
}
int main()
{
    int size = 5;
    int arr[size] = {2, 5, 8, 12, 30};
    int k = 17;
    int result = checkIfPairExistsResultingToK(arr, size, k);
    cout << result;
    return 0;
}
