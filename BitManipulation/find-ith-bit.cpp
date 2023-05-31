#include <iostream>
#include <math.h>
using namespace std;
void decimalToBinary(int n)
{
    int ans = 0;
    int i = 0;
    int lastBit = 0;
    while (n != 0)
    {
        lastBit = n & 1;                    // if bit is 1 then we get 1 otherwise 0
        ans = (lastBit * pow(10, i)) + ans; // also formula to reverse
        n = n >> 1;                         // right shift last bit as it is no longer in use
        i++;
    }
    cout << "decimal number is: " << ans <<endl;
}

/// @brief check if bit at ith position is set or not
/// @param num number entered by user
/// @param i position to check
/// @return 1 or zero based on &
int findIthBit(int num, int i)
{
    int mask = 1 << i;
    return (mask & num);
}
int main()
{
    int num, i;
    cout << "enter a number" << endl;
    cin >> num;
    cout << "enter bit position" << endl;
    cin >> i;
    decimalToBinary(num);
    cout << (findIthBit(num, i) ? "Bit = 1" : "Bit = 0");
    return 0;
}