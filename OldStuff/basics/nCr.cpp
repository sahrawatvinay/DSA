/*
nCr : n!/r!x(n-r)!
*/
#include <iostream>
using namespace std;

// function to calculate factorial of a given number
// int num : i/p params
// int in start is return type
int factorial(int num)
{
    int factorial = 1;
    for (int i = num; i > 0; i--)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n, r;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << "Enter the value of r" << endl;
    cin >> r;
    if (n < r)
    {
        cout << "The value of n should be greater than r";
        return 0;
    }
    int answer = factorial(n) / (factorial(r) * factorial(n - r)); // n,r,n-r are arguments
    cout << "nCr: " << n << "C" << r << ": " << answer;
    return 0;
}