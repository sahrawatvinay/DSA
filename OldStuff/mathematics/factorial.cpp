// iterative solution is better because recursive solution will take more space in function call stack will take
#include <iostream>
using namespace std;
/// @brief calculates the factorial of a number
/// @param num number entered by user
/// @return factorial
int calcFactorial(int num)
{
    if (num == 0)
        return 1;
    return num * calcFactorial(num - 1);
}
/// @brief factorial calculation iterative method
/// @param num number entered by user
/// @return factorial
int factorialIterative(int num)
{
    int result = 1;
    for (int i = num; i >= 1; i--)
    {
        result = result * i;
    }
    return result;
}
int main()
{
    int num, factorial = 0, factorialRes = 0;
    cout << "enter a number" << endl;
    cin >> num;
    factorial = calcFactorial(num);
    factorialRes = factorialIterative(num);
    cout << "factorial of a number is: " << factorial << " " << factorialRes;
    return 0;
}