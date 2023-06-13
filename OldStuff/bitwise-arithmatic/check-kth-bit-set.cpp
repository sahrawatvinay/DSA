#include <iostream>
using namespace std;
bool checkKthBitSetOrNot(int num, int k)
{
    int x = (num << (k-1));
    return 0;
}
int main()
{
    int num, k;
    cout << "enter a number" << endl;
    cin >> num;
    cout << "check kth bit to check";
    cin >> k;
    bool isSet = checkKthBitSetOrNot(num, k);
    return 0;
}