// print sum of numbers from 1 to n and display the result;
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the value of n" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "sum of numbers from 1 to " << n << " is : " << sum << endl;
    return 0;
}
