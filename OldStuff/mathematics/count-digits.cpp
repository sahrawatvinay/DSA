// logic : start removing digits from end, divisor
#include <iostream>
using namespace std;
/// @brief count the number of digits
/// @param number number input by user
/// @return count
int countDigits(int number)
{
    int count = 0;
    while (number > 0)
    {
        number = number /10;
        count++;
    }
    return count;
}
int main()
{
    int num, digits;
    cout << "enter a number" << endl;
    cin >> num;
    digits = countDigits(num);
    cout << "digits: " << digits;
    return 0;
}