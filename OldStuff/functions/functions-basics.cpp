#include <iostream>
using namespace std;
/// @brief function to add 2 numbers
/// @param a 1st param
/// @param b 2nd param
/// @return sum of 2 params
int add(int a, int b /*formal parameters*/) // method signature, call by value method
{
    return a + b;
}
int main()
{
    int a = 5;
    int b = 10;
    int sum = add(a, b); // actual parameters
    cout << sum;
    return 0;
}