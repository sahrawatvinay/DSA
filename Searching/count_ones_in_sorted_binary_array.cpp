#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findCountOfOnesInSortedBinayArray(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        // check if mid element is 0, if yes then search for 1's first occurance on right side of the array,
        // since the array is binary we check for 0 only
        if (arr[mid] == 0)
            low = mid + 1;
        else
        {
            // if the encountered element is 1, then check if it is truly the first element by checking whether mid == 0
            // or the prev elem and current element is different.
            // if any one is true, then we search for 1's first position on the left side
            if (mid == 0 || arr[mid - 1] == 0) // checking if previous elemet is 0, since it is a binary array
                return (n - mid);
            else
                high = mid - 1;
        }
    }
    return 0;
}
int main()
{
    int size = 9;
    int arr[size] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    sort(arr, arr + size);
    int result = findCountOfOnesInSortedBinayArray(arr, size);
    cout << result;
    return 0;
}
