#include <iostream>
using namespace std;
/// @brief logic to swap the values of two variables just by changing the values using pointer variables
/// @param a pointer variable pointing to a
/// @param b pointer variable pointing to b
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    cout << "before swap: " << a << " " << b << endl;
    swap(&a, &b);
    cout << "after swap: " << a << " " << b << endl;
    return 0;
}