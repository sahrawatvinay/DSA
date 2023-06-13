
#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[10];
    int arr1[10] = {5};
    printArray(arr, 10);
    cout << endl;
    printArray(arr1, 10);
    return 0;
}