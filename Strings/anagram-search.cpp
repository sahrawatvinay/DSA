#include <iostream>
#include <vector>
using namespace std;
/// @brief check if given pattern string is available in string
/// create 2 vectors which contains count of characters of string s and string p
/// if both vectors are equal, means they are anagram
/// now slide the window of pattern by adding the current character of string s and
/// removing previous first character of pattern in vector cs 
/// @param s string
/// @param p pattern to seacrnh
void anagramSearch(string &s, string &p)
{
    vector<int> res;
    vector<int> cs(256, 0);
    vector<int> cp(256, 0);
    for (int i = 0; i < p.size(); i++)
    {
        cs[s[i]]++;
        cp[p[i]]++;
    }
    if (cs == cp)
        res.push_back(0);
    for (int i = p.size(); i < s.size(); i++)
    {
        cs[s[i]]++;
        cs[s[i - p.size()]]--;
        if (cs == cp)
            res.push_back(i - p.size() + 1);
    }
    for (int x : res)
        cout << x << " ";
}
int main()
{
    string s = "abab";
    string p = "ab";
    anagramSearch(s, p);
    return 0;
}