#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int main()
{
    const int CHAR = 256;
    vector<int> firstIndex(CHAR, -1); // init char based index vector with -1
    string str = "zbbcbda";
    for (int i = 0; i < str.size(); i++) // traverse from left to right
    {
        if (firstIndex[str[i]] == -1) // means 1st occurance, store it's index at that posi
            firstIndex[str[i]] = i;
        else // means repetion, we cant mark -1, bec in multiple char case, prev. if will work
            firstIndex[str[i]] = -2;
    }
    int minIdx = INT_MAX;
    for (int i = 0; i < CHAR; i++)
    {
        if (firstIndex[i] >= 0)                  // these +ve's means they are not repeting and has their indexes stored
            minIdx = min(minIdx, firstIndex[i]); // traverse 256 times through ascii values to find the min index stored in these pos values so as to find which is left most non repeting char
    }
    if (minIdx == INT_MAX)
        cout << -1;
    else
        cout << "leftmost non rep : " << str[minIdx];
    return 0;
}