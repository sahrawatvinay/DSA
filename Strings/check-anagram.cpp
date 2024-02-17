/*
Anagram : whether 2 string are permutaion of each other or not
every character in s1 should be avaialble in s2 with same freq, order may differ
*/
#include <iostream>
#include <vector>
using namespace std;
bool areAnagram(string s1, string s2)
{
    if (s2.size() != s1.size()) // s2 should always be smaller than s1
        return false;
    const int chars = 256;              // since there are 256 ascii values avaialble
    vector<int> v(256, 0);              // create an array all init with 0 of 256 size
    for (int i = 0; i < s1.size(); i++) // iterate over each and every character of both s1 and s2
    {
        // automatically computer to int and ascii value index value can be updated
        v[s1[i]]++; // for s1's character value increment the count
        v[s2[i]]--; // for s2's character value decrement the count
    }
    for (auto x : v)
        if (x != 0) // if in any case we find different value, we break otherwise we can conclude they are anagram
            return false;
    return true;
}
int main()
{
    string s1 = "listen";
    string s2 = "silent";
    bool res = areAnagram(s1, s2);
    if (res)
        cout << "YESSS";
    else
        cout << "NOOO";
    return 0;
}