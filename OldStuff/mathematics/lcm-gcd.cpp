#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int num1, num2, result;
    cout << "enter number 1" << endl;
    cin >> num1;
    cout << "enter number 2" << endl;
    cin >> num2;
    cout << "The gcd is: " << gcd(num1, num2) << endl;
    cout << "The lcm is: " << lcm(num1, num2) << endl;
    return 0;
}