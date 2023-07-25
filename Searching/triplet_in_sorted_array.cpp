#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/// @brief find if there is a pair available in sorted array which sums up to K value here k is (k - arr[i]) because start index item is fixed
/// @param arr pointer to the array
/// @param n size of the array
/// @param k sum for which we need to find pairs 
/// @param si start index after the element for which we need to find pairs, incremnt value by 1 for the fixed elmenet index
/// @return if there is a pair available after the current element
bool isPair(int arr[], int n, int k, int si)
{
    int i = si, j = n - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == k)
            return k;
        else if (arr[i] + arr[j] > k)
            j--;
        else
            i++;
    }
    return false;
}
/// @brief find triplet by fixing ith element and find if a pair exists after that value and a pair is available
/// @param arr pointer to the array
/// @param n size of an element
/// @param k sum for which er need to find value
/// @return true false based on whether triplet is found or not
bool isTriplet(int arr[], int n, int k)
{
    for (int i = 0; i < n - 2; i++)
    {
        if (isPair(arr, n, k - arr[i], i + 1))
            return true;
    }
    return false;
}
int main()
{
    int size = 5;
    int arr[size] = {2, 5, 10, 15, 18};
    int k = 33;
    bool isTripletAvailable = isTriplet(arr, size, k);
    cout << isTripletAvailable;
    return 0;
}
