#include <iostream>
using namespace std;
int maxConsecutiveOnes(int arr[], int n)
{
    int res = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            count = 0;
        else
        {
            count++;
            res = max(count, res);
        }
    }
    return res;
}
int main()
{
    int arr[6] = {0, 1, 1, 0, 1, 0};
    cout << "max consecutive ones : " << maxConsecutiveOnes(arr, 6);
    return 0;
}