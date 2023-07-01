#include <iostream>
using namespace std;
void printIndexesOfValuesToBeFlipped(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            if (arr[i] != arr[0])
                cout << "From indexes " << i << " to ";
            else
                cout << (i - 1) << endl;
        }
    }
    if (arr[n - 1] != arr[0])
        cout << (n - 1) << endl;
}
int main()
{
    int arr[10] = {1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    printIndexesOfValuesToBeFlipped(arr, 10);
    return 0;
}