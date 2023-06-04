#include <iostream>
using namespace std;
int factorial(int num)
{
    if (num == 0)
        return 1;
    return num * factorial(num - 1);
}
int main()
{
    int num;
    cout << "enter a number" << endl;
    cin >> num;
    cout << factorial(num);
    return 0;
}