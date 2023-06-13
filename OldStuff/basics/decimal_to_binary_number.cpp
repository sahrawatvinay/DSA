#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
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
    cout << "decimal number is: " << ans;
    return 0;
}