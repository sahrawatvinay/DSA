/*
A prime number is a whole number greater than 1 whose only factors are 1 and itself.
A factor is a whole number that can be divided evenly into another number.
The first few prime numbers are 2, 3, 5, 7, 11, 13, 17, 19, 23 and 29.
Numbers that have more than two factors are called composite numbers.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not a prime number";
            return 0;
        }
    }
    cout << n << " is a prime number";
    return 0;
}