#include <iostream>
using namespace std;
int getSumOfDigits(int n)
{
    if (n <= 9)
        return n;
    return (n%10) + getSumOfDigits(n/10);
}
int main()
{
    int num;
    cout << "enter a number" << endl;
    cin >> num;
    int x = getSumOfDigits(num);
    cout << "Sum of digits : " << x << endl;
    return 0;
}