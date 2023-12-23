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
/// @brief revrese  elements of arrays from start to end index
/// @param arr array
/// @param low lower bound of en element
/// @param high upper bound of an element
void reverseArrayElements(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[high], arr[low]);
        low++;
        high--;
    }
}
//using reversal algorithm
void leftRotateArrayDTimes(int arr[], int n, int d)
{
    d = d % n; //to make sure d is in range
    reverseArrayElements(arr, 0, n-1); // reverse whole array
    reverseArrayElements(arr, 0, d-1); // reverse 1st d elements
    reverseArrayElements(arr, d, n-1); // reverse remaining elements
}
int main()
{
    int arr[3] = {1, 2, 3};
    printArray(arr, 3);
    int d;
    cout << "Enter no. of times you need to rotate";
    cin >> d;
    leftRotateArrayDTimes(arr, 3, d);
    printArray(arr, 3);
    return 0;
}