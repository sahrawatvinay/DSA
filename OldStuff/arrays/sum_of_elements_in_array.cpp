#include <iostream>
using namespace std;

/// @brief this function is used to calculate the sum of elements in an array
/// @param array array name, and address of the first element of array
/// @param size size of an array
/// @return sum of elements
int sumOfElements(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cout << "Enter the size of an array: " << endl;
    cin >> size;
    int arr[100] = {};
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    //printArray(arr, size);
    cout << "The sum of elements in an array is: " << sumOfElements(arr, size);

    return 0;
}