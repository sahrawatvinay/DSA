#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 6;

    // bitwise operations
    cout << "a&b : " << (a & b) << endl;
    cout << "a|b : " << (a | b) << endl;
    cout << "a^b : " << (a ^ b) << endl;
    cout << "~a : " << (~a) << endl;

    // right shift operation, gets divided by 2 based on the no. of padding i.e. if padding is 2 then 17/(2x2)
    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;

    // left shift operation, gets multiplied by 2 based on the no. of padding i.e. if padding is 2 then 19*(2x2)
    cout << (19 << 1) << endl;
    cout << (19 << 2) << endl;

    int i = 5;
    cout << (i++) << endl; // 5, after printing the no becomes 6
    cout << (++i) << endl; // 7
    cout << (i--) << endl; // 7, after printing the no becomes 6
    cout << (--i) << endl; // 5

    int x = 1;
    int y = 2;
    if (x-- > 0 || ++y > 2) //
    {
        cout << "inside if" << endl;
    }
    else
    {
        cout << "inside else" << endl;
    }
    cout << x << " " << y << endl; //y's value remains unchanged because in || if we get first condition as true, the second condition wont even gets executed
    return 0;
}