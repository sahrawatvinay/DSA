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
int getSum(int pSum[], int l, int r)
{
    if (l == 0)
        return pSum[r];
    return pSum[r] - pSum[l - 1];
}
int main()
{
    int size = 7;
    int arr[size] = {2, 8, 3, 9, 6, 5, 4};
    int pSum[size];
    pSum[0] = arr[0];
    for (int i = 1; i < size; i++)
        pSum[i] = arr[i] + pSum[i - 1];
    printArray(pSum, size);
    cout << getSum(pSum, 0, 4) << endl;
    cout << getSum(pSum, 1, 3) << endl;
    cout << getSum(pSum, 2, 6) << endl;
    return 0;
}