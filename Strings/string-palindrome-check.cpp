#include <iostream>
using namespace std;
/// @brief check if entered string is palindrome or not
/// Logic : take 2 ptr l and r, keep checking leftmost rightmost and keep checking till you reach middle
/// if at any point == fails, return false, other wise return true if no such case arrived
/// @param s string
/// @return true/false based on result
bool isPalindrome(string s)
{
    int l = 0;
    int r = s.size() - 1;
    while (l < r)
    {
        if (s[l] != s[r])
            return false;
        l++;
        r--;
    }
    return true;
}
int main()
{
    string str;
    getline(cin, str);
    bool check = isPalindrome(str);
    cout << check << endl;
    return 0;
}