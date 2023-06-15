#include <iostream>
using namespace std;
/// @brief checks if array is sorted or not
/// @param arr array
/// @param size it's size
/// @return true or false
bool checkIfSorted(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}
int main()
{
    int arr[5] = {1, 2, 8, 4, 5};
    cout << (checkIfSorted(arr, 5) ? "Sorted" : "Not Sorted");
    return 0;
}