#include <iostream>
using namespace std;
/// @brief reverese each word, then reverese whole string
/// @param str word/ string
/// @param s start idx
/// @param e end idx
void reverse(string &str, int s, int e)
{
    while (s <= e)
    {
        swap(str[s], str[e]);
        s++;
        e--;
    }
}
int main()
{
    string str = "welcome to gfg";
    int s = 0;                           // set start idx
    for (int e = 0; e < str.size(); e++) // iterate through string
    {
        if (str[e] == ' ') // when space encountered, send word to reverse, if multiple case use while loop
        {
            reverse(str, s, e - 1); // reverse individual word before space is encountered
            s = e + 1;              // update start idx
        }
    }
    reverse(str, s, str.size() - 1); // explicitly reverse last word as it won't get encountered in prev loop
    reverse(str, 0, str.size() - 1); // reverse whole string
    cout << "reverse : " << str;
    return 0;
}