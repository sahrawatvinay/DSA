#include <iostream>
using namespace std;
bool checkIfPalindrome(int n)
{
    int temp = n, reverse = 0, digit = 0;
    while (temp > 0)
    {
        digit = temp % 10;
        reverse = (reverse * 10) + digit;
        temp = temp / 10;
    }
    return (reverse == n);
}
int main()
{
    int num;
    cout << "enter a number" << endl;
    cin >> num;
    cout << (checkIfPalindrome(num) ? "Yes, it's a palindrome" : "Not a plaindrome");
    return 0;
}