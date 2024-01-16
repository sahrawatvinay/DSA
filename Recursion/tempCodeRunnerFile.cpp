#include <iostream>
using namespace std;
int getSum(int n)
{
    if(n == 0)
        return 0;
    return n + getSum(n-1);
}
int main()
{
    int num;
    cout << "enter a number" << endl;
    cin >> num;
    cout << getSum(num);
    return 0;
}