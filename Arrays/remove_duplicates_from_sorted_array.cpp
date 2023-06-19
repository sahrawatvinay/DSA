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
int removeDuplicatesFromSortedArray(int arr[], int size)
{
    int res = 1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] != arr[res - 1])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}
int main()
{
    int arr[9] = {10, 10, 20, 20, 20, 30, 30, 30};
    int currentSize = removeDuplicatesFromSortedArray(arr, 9);
    cout << "Current Size of an array : " << currentSize << endl;
    printArray(arr, currentSize);
    return 0;
}