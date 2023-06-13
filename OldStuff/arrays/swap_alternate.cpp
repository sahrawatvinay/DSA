#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void swapAlternate(int arr[], int size)
{
    // int start = 0;
    // int next = 1;
    // while (start <= (size - 1) && next <= (size - 1))
    // {
    //     swap(arr[start], arr[next]);
    //     start += 2;
    //     next += 2;
    // }
    for (int i = 0; i < size; i+=2) //less costly, better
    {
        if ((i + 1) < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int arrEven[6] = {1, 2, 3, 4, 5, 6};
    swapAlternate(arrEven, 6);
    printArray(arrEven, 6);
    cout << endl;
    int arrOdd[5] = {1, 2, 3, 4, 5};
    swapAlternate(arrOdd, 5);
    printArray(arrOdd, 5);
    return 0;
}