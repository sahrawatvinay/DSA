#include <iostream>
using namespace std;
/// @brief delete the entered element
/// @param arr array
/// @param size size of array
/// @param num num to be deleted
void deleteElement(int arr[], int size, int num)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == num)
            break;
    }
    for (int j = i; j < size - 1; j++)
    {
        arr[j] = arr[j + 1];
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
    int arr[10] = {5, 4, 6, 8, 11, 34, 55, 1, 2, 7};
    cout << "Before deletion: " << endl;
    printArray(arr, 10);
    cout << "Enter number to delete: " << endl;
    int num;
    cin >> num;
    deleteElement(arr, 10, num);
    printArray(arr, 10);
    return 0;
}