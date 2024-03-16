#include <iostream>
#include <vector>
using namespace std;
/// @brief prints all substring from string
/// Substring : order + continuity should be maintained
/// no of sub strings of string = n * (n + 1)/2 + 1(if we need to include empty string)
/// LOGIC : take 2 pointers one will contain starting point of string
/// other will contain ending point of screen
/// use substring to extract sub string from given string based on starting index and length of substring
/// @param str pointer to string
void printAllSubStrings(string &str)
{
    vector<string> subStrings;
    for (int s = 0; s < str.size(); s++)
        for (int e = s; e < str.size(); e++)
            subStrings.push_back(str.substr(s, e - s + 1));
    for (string x : subStrings)
        cout << x << endl;
}
int main()
{
    string s = "abcd";
    printAllSubStrings(s);
    return 0;
}