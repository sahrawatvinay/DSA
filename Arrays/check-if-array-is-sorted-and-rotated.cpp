/*
Given an array arr[] of N distinct integers, check if this array is Sorted (non-increasing or non-decreasing) and Rotated counter-clockwise. Note that input array may be sorted in either increasing or decreasing order, then rotated.
A sorted array is not considered as sorted and rotated, i.e., there should be at least one rotation.
Input:
N = 4
arr[] = {3,4,1,2}
Output: Yes
Explanation: The array is sorted
(1, 2, 3, 4) and rotated twice
(3, 4, 1, 2).

N = 3
arr[] = {1,2,3}
Output: No
Explanation: The array is sorted
(1, 2, 3) is not rotated.
*/
#include <iostream>
using namespace std;
bool checkIfSortedAndRotated(int arr[], int size)
{
    int pivPts = 0;
    if (arr[size - 1] < arr[0]) // ascending case
    {
        for (int i = 0; i < size - 1; i++) // finding pivot point i.e. where we get an elemnt that is decresing after increasing
            if (arr[i + 1] < arr[i])
                pivPts++;
        return (pivPts == 1);
    }
    else if (arr[size - 1] > arr[0]) // descending case
    {
        for (int i = 0; i < size - 1; i++) // finding pivot point where the element is increasing after decresing
            if (arr[i + 1] > arr[i])
                pivPts++;
        return (pivPts == 1);
    }
    return false;
}
int main()
{
    int arr[4] = {3, 4, 1, 2};
    cout << (checkIfSortedAndRotated(arr, 4) ? "Yes" : "No");
    return 0;
}