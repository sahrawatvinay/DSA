/*
calculate the total number of set bits of a and b
*/
#include <iostream>
using namespace std;

/// @brief calculate the number of set bits in a number
/// @param num number passed as an argument
/// @return count of set bits of a number
int calculateSetBits(int num)
{
    int count = 0;
    while (num != 0)
    {
        if (num & 1)
        {
            count++;
        }
        num = num >> 1;
    }
    return count;
}

int main()
{
    int a, b, totalSetBits = 0;
    cout << "enter values of a and b: ";
    cin >> a;
    cin >> b;
    totalSetBits += calculateSetBits(a);
    totalSetBits += calculateSetBits(b);
    cout << "Total set bits of a and b are: " << totalSetBits << endl;
    return 0;
}