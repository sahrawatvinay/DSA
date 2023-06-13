/// the logic behind reversing the elements of an array is that take 2 variables one points to start and other to end
/// keep swapping the left most and right most element to one another.
/// after every swap increment start and decrement end points
/// keep reversing the elements jab tak start <= end
#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

/// @brief reverses the elements in an array and prints the elemnts
/// @param arr the address of an array
/// @param size size of an array
void reverseAndPrintArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    // int temp;
    while (start <= end)
    {
        // temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    printArray(arr, size);
}
int main()
{
    int arrEven[10] = {1, 2, 5, 6, -3, 33, 9, 78, 34, 12};
    int arrOdd[7] = {4, -2, 7, 0, -6, 1, 8};
    reverseAndPrintArray(arrEven, 10);
    cout << endl;
    reverseAndPrintArray(arrOdd, 7);
    return 0;
}