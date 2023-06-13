#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int ans = 0, lastDigit = 0;
    while (n != 0)
    {
        lastDigit = n % 10;
        ans = (ans * 10) + lastDigit;
        n = n / 10;
    }
    cout << "The reversed number is : " << ans;
    return 0;
}