#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int ans = 0, lastDigit = 0, i = 0;
    while (n != 0)
    {
        lastDigit = n % 10;
        if (lastDigit & 1)
        {
            ans = ans + pow(2, i);
        }
        i++;
        n = n / 10;
    }
    cout << "decimal no." << ans;
    return 0;
}
