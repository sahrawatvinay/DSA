#include <iostream>
using namespace std;
int countTrailingZeroes(int num)
{
    int result = 0;
    for (int i = 5; i <= num; i = i * 5)
    {
        result += num/i;
    }
    return result;
}
int main()
{
    int num;
    cout << "enter a number" << endl;
    cin >> num;
    cout << countTrailingZeroes(num);
    return 0;
}