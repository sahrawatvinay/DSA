#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "enter a number1" << endl;
    cin >> num1;
    cout << "enter a number2" << endl;
    cin >> num2;
    cout << "Values before swap: num1: " << num1 << " num2: " << num2 << endl;
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    cout << "Values after swap: num1: " << num1 << " num2: " << num2;
    return 0;
}