#include <iostream>
using namespace std;
int main()
{
    string s = "abdbghsdhhsedkk";
    int hash[26] = {0}; // since there are 26 characters and we assume here that there are lower case letters only,
                        // in case of all characters 256 size array will be taken and [s[i] - 'a'] and hash[c - 'a'] will get replaced to s[i] and [c] respectively
    for (int i = 0; i < s.size(); i++)
        hash[s[i] - 'a']++; // gives me indexes 0,1,2... by subtracting a's ascii value from current character
    int queries;
    cin >> queries;
    while (queries--)
    {
        char c;
        cin >> c;              // input characters whose count you want to see in string
        cout << hash[c - 'a']; // get index using same as above
    }
    return 0;
}