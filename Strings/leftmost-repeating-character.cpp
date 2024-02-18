#include <iostream>
#include <vector>
using namespace std;
int main()
{
    const int CHAR = 256;
    vector<bool> visited(CHAR, false); // create character based index vector, init with false
    string str = "bbacaxxd";
    int idx = -1;                             // make var idx so as to store index of left most character
    for (int i = str.size() - 1; i >= 0; i--) // traverse string from right to left
    {
        if (visited[str[i]]) // if the char in string is visited earlier, we update index
            idx = i;
        else // otherwise just set flag that it is visited
            visited[str[i]] = true;
    }
    cout << "leftmost character : " << str[idx];
    return 0;
}