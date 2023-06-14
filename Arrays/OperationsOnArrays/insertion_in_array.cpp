#include <iostream>
using namespace std;
/// @brief insert an elemnt at a particular position, assuming we are inserting if there is a space available. 
/// @param arr pointer to an array
/// @param size size of array
/// @param num number to insert
/// @param pos position at which number should be insert
/// Time Complexity : O(n)
void insertElement(int arr[], int size, int num, int pos)
{
    int index = size - 1;
    while (index >= pos)
    {
        arr[index] = arr[index - 1];
        index--;
    }
    arr[pos - 1] = num;
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
    int arr[10] = {5, 4, 6, 8, 11, 34};
    cout << "Before insertion: " << endl;
    printArray(arr, 10);
    cout << "Enter number to insert: " << endl;
    int num;
    cin >> num;
    cout << "Enter position: " << endl;
    int pos;
    cin >> pos;
    insertElement(arr, 10, num, pos);
    printArray(arr, 10);
    return 0;
}