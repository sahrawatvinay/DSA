#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int getFirstSetBit(int n)
{
    return log2(n & -n) + 1;
}
int main()
{
    int arr[11] = {2, 3, 4, 5, 4, 3, 2, 5, 7, 9};
    vector<int> temp;
    int res = 0;
    int final = 0;
    for (int i = 0; i < 11; i++)
    {
        res = res ^ arr[i];
    }
    int pos = getFirstSetBit(res);
    int mask = 1 << pos;
    for (int i = 0; i < 11; i++)
    {
        if (arr[i] & mask)
        {
            temp.push_back(arr[i]);
        }
    }
    for (int i = 0; i < temp.size(); i++)
    {
        final = res ^ temp[i];
    }
    cout << final << endl;
    final = final ^ res;
    cout << final;
    return 0;
}