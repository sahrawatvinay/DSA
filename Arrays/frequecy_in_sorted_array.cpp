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
void countFrequenciesInSortedArray(int arr[], int n)
{
    int count = 0;
    int currentNumber = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == currentNumber)
        {
            count++;
            //prinitng last element
            if (i == (n - 1))
            {
                cout << "current number : " << currentNumber << " frequency : " << count << endl;
            }
        }
        else
        {
            // print the frequency and count of previous number and set counter to 1
            cout << "current number : " << currentNumber << " frequency : " << count << endl;
            currentNumber = arr[i];
            count = 1;
        }
    }
}
int main()
{
    int arr[6] = {10, 10, 10, 15, 30, 30};
    countFrequenciesInSortedArray(arr, 6);
    return 0;
}