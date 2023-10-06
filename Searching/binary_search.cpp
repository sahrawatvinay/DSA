#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
/// @brief find the index of an element using binary search
/// LOGIC : for binary search, the array should be sorted in increasing order
/// Step1 : take 2 points low = 0 and high = n - 1
/// while (low <= high) find the mid point of the array
/// if arr[mid] == value, return index
/// if arr[mid] < value, move low towards mid, low = mid + 1, we go to the right half
/// if arr[mid] > value, move high towards mid, high = mid - 1, we go to the left half
/// if element found the index gets returned inside the loop, if not, return the index of element outside the loop
/// @param arr pointer to an array
/// @param n size of the array
/// @param k element to be searched
/// @return if element found then index otherwise -1 is returned
/// Time Complexity : log(n)
int findTheElementUsingBinarySearch(int arr[], int n, int k)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2; //mid = low + (high - low)/2; // for bigger numbers
        if (arr[mid] == k)
            return mid;
        else if (arr[mid] < k)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    int size = 9;
    int arr[size] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    sort(arr, arr + size);
    cout << "sorted array" << endl;
    printArray(arr, size);
    int search = 45;
    int result = findTheElementUsingBinarySearch(arr, size, search);
    cout << result;
    return 0;
}