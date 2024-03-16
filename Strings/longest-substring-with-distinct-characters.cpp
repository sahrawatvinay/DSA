#include <iostream>
#include <vector>
using namespace std;
int longestSubStringWithDistinctCharacters(string &str)
{
    vector<int> prev(256, -1);
    int res = 0;
    int i = 0;                           // starting index of substring, prev starting index
    for (int j = 0; j < str.size(); j++) // ending index of substring
    {
        i = max(i, prev[str[j]] + 1); // computing starting index of substring, based on index of current character in string, +1 because substring will start from the following index
        int maxEnd = j - i + 1;       // computing maxEnd for every index j(last char of substring, all substring char's must be unique)
        res = max(res, maxEnd);       // find the max out of maxEnds
        prev[str[j]] = j;             // keep updating the index of character where it's found
                                      // useful to update starting index, if char in substring is found earlier, the starting point of substring will be that index
    }
    return res;
}
int main()
{
    string s = "abcadbd";
    int res = longestSubStringWithDistinctCharacters(s);
    cout << res << endl;
    return 0;
}