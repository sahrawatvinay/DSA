#include <iostream>
using namespace std;
int main()
{
    int arr[11] = {2, 3, 4, 5, 4, 3, 2, 5, 7};
    int res = 0;
    for (int i = 0; i < 11; i++)
    {
        res = res ^ arr[i];
    }
    cout << res;
    return 0;
}