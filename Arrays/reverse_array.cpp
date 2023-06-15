#include <iostream>
using namespace std;
void reverseArray(int arr[], int size)
{
    int low = 0, high = size - 1;
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
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
    int arr[9] = {5, 4, 6, 8, 11, 34, 1, 2, 3};
    cout << "Before reverse: " << endl;
    printArray(arr, 9);
    reverseArray(arr, 9);
    printArray(arr, 9);
    return 0;
}