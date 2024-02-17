#include <iostream>
using namespace std;
/// @brief check Sub Sequence
/// Subsequence : remove 0 or more character from s2 such that order in which characters appear in s2 remains same as in s1
/// O(n+m)
/// @param s1 string s1 : original string
/// @param s2 string s2 : check for sub sequence
bool checkIfSubSequence(string s1, string s2)
{
    if (s2.size() > s1.size()) //s2 should always be smaller than s1
        return false;
    int j = 0;                                           // start a counter, points to 1st character in s2
    for (int i = 0; i < s1.size() && j < s2.size(); i++) // iterate over original string
        if (s1[i] == s2[j])                              // if character matches to current character in original
            j++;                                         // incremenet j pointer, i is already incrementing
    return (j == s2.size());
}
int main()
{
    string s1 = "ABCDEF";
    string s2 = "ADE";
    bool res = checkIfSubSequence(s1, s2);
    if (res)
        cout << "YESSS";
    else
        cout << "NOOO";
    return 0;
}