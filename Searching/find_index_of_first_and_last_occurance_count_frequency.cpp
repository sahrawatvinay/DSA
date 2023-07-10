/* Time complexities
    First occurance : O(log n)
    Last occurance : O(log n)
    Frequency : O(log n) + O(log n) = O(log n)
*/
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
/// @brief finds the index of the first element to be found
/// LOGIC : Binary search is used to solve the problem in log n time, we only need to handle cases when finding the mid element the element gets matched
/// @param arr points to the array
/// @param n size of the array
/// @param k element to be found
/// @return index if elmenet is found, otherwise returns -1
int findIndexOfFirstOccurance(int arr[], int n, int k)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] < k)
            low = mid + 1;
        else if (arr[mid] > k)
            high = mid - 1;
        else
        {
            // cases to be handled when the element to find becomes same as arr[mid] i.e. mid index element
            // check for the first occurance and handle edge cases to find the value of valid index in an array
            if (mid == 0 || arr[mid - 1] != arr[mid])
                return mid;
            else
                high = mid - 1;
        }
    }
    return -1;
}
/// @brief find the index of the last element
/// @param arr pointer to the array
/// @param n size of the array
/// @param k element to be found
/// @return index if element is found otherwise returns -1
int findIndexOfLastOccurance(int arr[], int n, int k)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] < k)
            low = mid + 1;
        else if (arr[mid] > k)
            high = mid - 1;
        else
            // cases to handle if the mid element is same as the element to be searched
            // check if mid is not the last index or if next elemnt is not same as the current element, if yes, move to the right
            if (mid == (n - 1) || arr[mid + 1] != arr[mid])
                return mid;
            else
                low = mid + 1;
    }
    return -1;
}
/// @brief find the count of element using first and last index functions
/// LOGIC : find the index of first occurance, if not found return 0, otherwise if 1stindex found there is definately last index also
/// which we calculate as: return (lastIndex + firstIndex + 1)
/// @param arr
/// @param n
/// @param k
/// @return
int findTheCountOfElement(int arr[], int n, int k)
{
    int first_index = findIndexOfFirstOccurance(arr, n, k);
    if (first_index < 0)
        return 0;
    else
        return (findIndexOfLastOccurance(arr, n, k) - first_index + 1);
}
int main()
{
    int size = 9;
    int arr[size] = {6, 6, 6, 9, 6, 9, 9, 6, 9};
    int k = 6;
    sort(arr, arr + size);
    printArray(arr, size);
    int result_first = findIndexOfFirstOccurance(arr, size, k);
    int result_last = findIndexOfLastOccurance(arr, size, k);
    int frequency_count = findTheCountOfElement(arr, size, k);
    cout << "first index of " << k << " is: " << result_first << endl;
    cout << "last index of " << k << " is: " << result_last << endl;
    cout << "element " << k << " is found " << frequency_count << " times";
    return 0;
}
