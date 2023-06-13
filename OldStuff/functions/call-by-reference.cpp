#include <iostream>
using namespace std;
/// @brief logic to swap using the reference variables where actual and formal parameters both are alias to each other
/// @param x reference variable pointing to a
/// @param y reference variable pointing to b
/// @return nothing
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 55;
    int b = 69;
    cout << "before swap: " << a << " " << b << endl;
    swap(a, b);
    cout << "after swap: " << a << " " << b << endl;
    return 0;
}