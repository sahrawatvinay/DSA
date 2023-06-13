#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

/// @brief check if a particular element is present in the array or not
/// @param arr the address of 1st elemnt of an array
/// @param size size of an array
/// @param element element to be searched
/// @return true/false based on search
bool isElementFound(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (element == arr[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[10] = {1, 2, 5, 6, -3, 33, 9, 78, 34, 12};
    int element;
    printArray(arr, 10);
    cout << "Enter the element to find: ";
    cin >> element;
    bool elemFound = isElementFound(arr, 10, element);
    if (elemFound)
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Element not Found";
    }
    return 0;
}