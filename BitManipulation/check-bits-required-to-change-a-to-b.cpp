#include <iostream>
#include <math.h>
using namespace std;
int checkBitsRequiredToChangeFromAToB(int a, int b)
{
    int counter = 0;
    int numberWithDifferentBits = a ^ b;
    while (numberWithDifferentBits > 0)
    {
        numberWithDifferentBits = numberWithDifferentBits & (numberWithDifferentBits - 1);
        counter++;
    }
    return counter;
}
int main()
{
    int a, b;
    cout << "enter a" << endl;
    cin >> a;
    cout << "enter b" << endl;
    cin >> b;
    cout << checkBitsRequiredToChangeFromAToB(a, b);
    return 0;
}