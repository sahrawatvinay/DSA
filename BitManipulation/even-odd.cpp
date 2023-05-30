#include <iostream>
using namespace std;
/// @brief checks is no. is odd or even based on bits, bit masking
/// even numbers have 0 bit at end, odd no. have 1 bit at end
/// @param n number input by user
/// @return 1 if last bit is 1, 0 if last bit is 0
int checkEvenOdd(int n)
{
    return (n & 1);
}
int main()
{
    int num;
    cout << "enter a number" << endl;
    cin >> num;
    cout << (checkEvenOdd(num) ? "Number is Odd" : "Number is Even");
    return 0;
}