#include <iostream>
using namespace std;
void prindAllDivisors(int n)
{
    int i = 1;
    for (i = 1; i * i < n; i++) // prints all divisors from 1(inclusive) to Sqrt(n)
        if (n % i == 0)
            cout << i << " ";
    for (; i >= 1; i--) // prints all divisors from Sqrt(n) to n
        if (n % i == 0)
            cout << (n / i) << " ";
}
int main()
{
    int num;
    cout << "enter a number" << endl;
    cin >> num;
    prindAllDivisors(num);
    return 0;
}