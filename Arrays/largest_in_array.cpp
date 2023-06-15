#include <iostream>
using namespace std;
/// @brief finds the largest number in ana array
/// @param arr array
/// @param size size of an array
/// @return the largest element
int findLargest(int arr[], int size)
{
    int largest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }
    return largest;
}
int main()
{
    int arr[10] = {5, 4, 6, 8, 11, 34, 55, 1, 2, 99};
    cout << findLargest(arr, 10) << " is largest number";
    return 0;
}