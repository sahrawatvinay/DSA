#include <iostream>
using namespace std;
void print1toN(int n)
{
    if (n == 0)
        return;
    print1toN(n - 1);
    cout << n << " ";
}
void printNto1(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    printNto1(n - 1);
}
int main()
{
    int num;
    cout << "enter a number" << endl;
    cin >> num;
    print1toN(num);
    cout << endl;
    printNto1(num);
    return 0;
}