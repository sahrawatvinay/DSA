#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/// @brief find the element in sorted rotated array
/// LOGIC: we can use binary search, by eleminating half of the array
/// We can see that if an array is rotated and we consider the mid element one half will be sorted and the other one will not
/// so, go to mid element and compare with the end point elements, this will help us know which half is sorted
/// check if the element to be found is present in the sorted half by checking if it is in that range, if found shift low and high otherwise go to the other half
/// @param arr pointer to an array
/// @param n size of an array
/// @param k find the element
/// @return index
int findElementInSortedRotatedArray(int arr[], int n, int k)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2; // go to the mid element
        if (arr[mid] == k)
            return mid;
        if (arr[mid] > arr[low]) // compare mid elem value with the left end point value to check whether left half is sorted
        {
            if (k >= arr[low] && k < arr[mid]) // check if the element is present in the range on left side of mid
                high = mid - 1;                // if present in range then search in this left half
            else
                low = mid + 1; // otherwise search for the right half
        }
        else // means right half is rotated
        {
            if (k > arr[mid] && k <= arr[high]) // check if element is present in the right half of the array
                low = mid + 1;                  // if yes, search in the right half
            else
                high = mid - 1; // otherwise go to the right half
        }
    }
    return -1;
}
int main()
{
    int size = 6;
    int arr[size] = {10, 20, 40, 60, 5, 8};
    int k = 5;
    int result = findElementInSortedRotatedArray(arr, size, k);
    cout << result;
    return 0;
}
