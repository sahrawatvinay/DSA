// logic : take remainder and divisor, rev = 0 initialize, rev * 10 + rem(remainder)
#include <iostream>
using namespace std;
/// @brief checks if string is palindrome or not
/// @param number inputs number
/// @return bool if entered number is palindrome or not
bool checkPalindrome(int number)
{
    int temp = number; // just to save value entered by user
    int reverse = 0, remainder;
    while (temp > 0)
    {
        remainder = temp % 10;
        temp = temp / 10;
        reverse = (reverse * 10) + remainder;
    }
    return (reverse == number);
}
int main()
{
    int num, digits;
    bool isPalindrome;
    cout << "enter a number" << endl;
    cin >> num;
    isPalindrome = checkPalindrome(num);
    cout << ((isPalindrome) ? "Yes, it is a plaindrome" : "No, it's not a plaindrome");
    return 0;
}