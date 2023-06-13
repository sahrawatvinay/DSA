#include <iostream>
using namespace std;
int main()
{
    int x = 56, y = 89, temp;
    cout << "value of x and y before: " << x << " " << y << endl;
    temp = x;
    x = y;
    y = temp;
    cout << "value of x and y after swap: " << x << " " << y;
    return 0;
}
