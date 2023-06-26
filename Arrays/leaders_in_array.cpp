#include <iostream>
using namespace std;
/// @brief find leaders in an array, means all the elements to the right of the current leader elements should be smaller
/// LOGIC : print leaders from right to left. set last elem as leader, loop until zero keep prining if current element is greater than the current leader
/// @param arr array
/// @param n size of an array
void leadersInArray(int arr[], int n)
{
    int currentLeader = arr[n - 1];
    cout << currentLeader << " ";
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > currentLeader)
        {
            currentLeader = arr[i];
            cout << currentLeader << " ";
        }
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
    int arr[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    printArray(arr, 9);
    leadersInArray(arr, 9);
    return 0;
}