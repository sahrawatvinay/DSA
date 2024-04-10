/*
Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.
Input:
N = 10, D = 3
arr[] = {2,4,6,8,10,12,14,16,18,20}
Output: 8 10 12 14 16 18 20 2 4 6
Explanation: 2 4 6 8 10 12 14 16 18 20
when rotated by 3 elements, it becomes
8 10 12 14 16 18 20 2 4 6.
*/
#include <iostream>
#include <vector>
using namespace std;
void reverseInGroups(vector<long long> &arr, int n, int k)
{
    // code here
    for (int i = 0; i < n; i = i + k)
    {
        int s = i;
        int e = min(i + k - 1, n - 1);
        while (s < e)
        {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }
    for(int x: arr)
        cout << x << " ";
}
int main()
{
    vector<long long> v = {2,4,6,8,10,12,14,16,18,20};
    reverseInGroups(v, 10, 3);
    return 0;
}