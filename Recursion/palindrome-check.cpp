/*
Time Complexity : O(n)
Space Complexity : O(n)
*/
#include <iostream>
using namespace std;
bool isPalindrome(string str, int s, int e)
{
    if (s >= e)
        return true;
    return ((str[s] == str[e]) && isPalindrome(str, s + 1, e - 1));
}
int main()
{
    string str = "abbcbba";
    bool res = isPalindrome(str, 0, str.length() - 1);
    cout << " Plaindrome : " << res << endl;
    return 0;
}