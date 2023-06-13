#include <iostream>
using namespace std;
/// @brief logic to print an array
/// @param arr pointer to the actual array, updating here will update the value in actual array
/// @param n size of an array
void printArray(int *arr /*or arr[] can be used*/, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

/// @brief logic to create a new dynamic array in heap memory and return pointer to new dynamically created array
/// @param n size of the new array to be created
/// @return pointer to the new array
int *newArray(int n)
{
    int *newArr = new int[n];
    for (int i = 0; i < n; i++)
    {
        newArr[i] = i + 1;
    }
    return newArr;
}

int main()
{
    int arr[5] = {1, 2, 3};
    printArray(arr, 5);
    cout << endl;
    int *newArrPointer = newArray(10);
    for (int i = 0; i < 10; i++)
    {
        cout << newArrPointer[i] << " ";
    }
    return 0;
}