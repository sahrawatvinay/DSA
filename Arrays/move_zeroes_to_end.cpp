#include <iostream>
using namespace std;
/// @brief move all zeroes to the end of array
/// LOGIC : keep a counter to keep count of all non zeroes as it will give the index of 1st zero that need to get swapped with next non zero
/// @param arr array
/// @param size size of an array
void moveZeroesToEnd(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[count], arr[i]);
            count++;
        }
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[9] = {5, 4, 6, 0, 0, 34, 0, 2, 3};
    printArray(arr, 9);
    moveZeroesToEnd(arr, 9);
    printArray(arr, 9);
    return 0;
}