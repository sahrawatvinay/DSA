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
    cout << "Binary number is: " << ans << endl;
}
/// @brief clear bit position 
/// @param num number entered by user
/// @param i position to clear the bit
void clearIthBit(int num, int i)
{
    int mask = 1 << i;
    mask = ~mask;
    int ans = num & mask;
    decimalToBinary(ans);
}
int main()
{
    int num, i;
    cout << "enter a number" << endl;
    cin >> num;
    cout << "set bit position" << endl;
    cin >> i;
    decimalToBinary(num);
    clearIthBit(num, i);
    return 0;
}