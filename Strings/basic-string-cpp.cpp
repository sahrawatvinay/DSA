#include <iostream>
using namespace std;
int main()
{
    string str = "geeksforgeeks";
    cout << "length -> " << str.length() << " or size -> " << str.size() << endl;
    str += "xxxx";
    cout << "after adding xxxx -> " << str << endl;
    cout << str.substr(1, 3) << endl; // starting index of character, length of sub string to findF
    cout << str.find("eek") << endl;  // returns first index where it is found
    string s1 = "abc";
    string s2 = "bcd";
    if (s1 == s2)
        cout << "equal" << endl;
    else if (s1 > s2)
        cout << "s1 is greater" << endl;
    else
        cout << "s2 is greater" << endl; // s2 is greater because it is lexographically greater
    return 0;
}