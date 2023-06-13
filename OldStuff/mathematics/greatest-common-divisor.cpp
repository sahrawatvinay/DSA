#include <iostream>
using namespace std;
int greatestCommonDivisor(int num1, int num2)
{
    int result = min(num1, num2);
    while (result > 0)
    {
        if (num1 % result == 0 && num2 % result == 0)
        {
            break;
        }
        result--;
    }
    return result;
}
// optimized eucladian gcd
int gcdOptimized(int num1, int num2)
{
    if (num2 == 0)
        return num1;
    else
        gcdOptimized(num2, num1 % num2);
}
int main()
{
    int num1, num2, result;
    cout << "enter number 1" << endl;
    cin >> num1;
    cout << "enter number 2" << endl;
    cin >> num2;
    cout << "The greatest divisor is: " << greatestCommonDivisor(num1, num2) << endl;
    return 0;
}