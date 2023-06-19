#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
/// @brief counter clockwise rotation
/// logic : copy 1st elem value in temp var. loop from 1 to n move ith val to i-1, in the end temp val to last
/// @param arr array
/// @param size size of array
void leftRotateArrayByOne(int arr[], int size)
{
    int temp = arr[0];
    for (int i = 1; i < size; i++)
        arr[i - 1] = arr[i];
    arr[size - 1] = temp;
}
int main()
{
    int arr[9] = {5, 4, 6, 8, 11, 34, 1, 2, 3};
    printArray(arr, 9);
    leftRotateArrayByOne(arr, 9);
    printArray(arr, 9);
    return 0;
}