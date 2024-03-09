#include <iostream>
using namespace std;
void checkNaivePattern(string &text, string &pattern)
{
    int m = pattern.size();
    int n = text.size();
    for (int i = 0; i <= n - m; i++) // traverse through text string
    {
        for (int j = 0; j < m; j++)
        {                                  // traverse through pattern
            if (pattern[j] != text[i + j]) // if any character mismatch in current window, break loop and move to next window
                break;
            if (j == m - 1) // otherwise this window matches and print index where it is found
                cout << i << " ";
        }
    }
}
int main()
{
    string text = "geeksforgeeks";
    string pattern = "eks";
    checkNaivePattern(text, pattern);
    return 0;
}