#include <iostream>
using namespace std;
void printFreq(string &s)
{
    int freqChar[26] = {0};
    for (auto x : s)
        freqChar[x - 'a']++; // used to calculate index based array 26 value and map it, based on ASCII
    for (int i = 0; i < 26; i++)
        if (freqChar[i] > 0)
            cout << (char)(i + 'a') << " -> " << freqChar[i] << endl; // casting back to character value by adding ascii of 'a'
}
int main()
{
    string s = "geeksforgeeks";
    printFreq(s);
    return 0;
}