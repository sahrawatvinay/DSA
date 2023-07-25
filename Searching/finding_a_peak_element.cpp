#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/// @brief find a peak element in an array
/// @param arr pointer to an array
/// @param n size of an array
/// @return peak element
int findAPeakElement(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if ((mid == 0 || arr[mid] >= arr[mid - 1]) && (mid == (n - 1) || arr[mid] >= arr[mid + 1])) // check if mid element is peak, if mid is 0 no need to check left, 
                                                                                                    // if not check if mid elem is greater, if mid is last elem no need to check on right side, 
                                                                                                    // if not check mid should be greater than next elem
                                                                                                    // both and should satisfy, then only mid is a peak element
            return arr[mid];
        if (mid > 0 && arr[mid - 1] >= arr[mid]) // if prev elem to mid is greater than or equal to mid elem, there is definately a peak elem of left side, go there
            high = mid - 1;
        else    // otherwise go and find out in the right side of array
            low = mid + 1;
    }
    return -1;
}
int main()
{
    int size = 7;
    int arr[size] = {5, 10, 20, 40, 60, 80, 70};
    int result = findAPeakElement(arr, size);
    cout << result;
    return 0;
}
