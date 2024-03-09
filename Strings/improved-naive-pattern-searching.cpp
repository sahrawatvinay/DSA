#include <iostream>
using namespace std;
void checkNaivePattern(string &text, string &pattern)
{
    int m = pattern.size();
    int n = text.size();
    for (int i = 0; i <= n - m;) // traverse through text string
    {
        int j;
        for (j = 0; j < m; j++)            // traverse through pattern
            if (pattern[j] != text[i + j]) // if any character mismatch in current window, break loop and move to next window
                break;
        if (j == m)
            cout << i << " ";
        if (j == 0)
            i++;
        else
            i = (i + j);
    }
}
int main()
{
    string text = "geeksforgeeks";
    string pattern = "eks";
    checkNaivePattern(text, pattern);
    return 0;
}