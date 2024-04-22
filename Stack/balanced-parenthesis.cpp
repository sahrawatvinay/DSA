#include <iostream>
#include <stack>
using namespace std;
/// @brief checkes if popped item at top of stack is matching the current character that is to be checked
/// @param a opening bracket [popped item]
/// @param b closing bracket [current item]
/// @return true/false if matching/not matching
bool matching(char a, char b)
{
    return ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
}
/// @brief check if the string to be checked is balanced or not
/// @param s string to be checked
/// @return true/false if balanced or not
bool isBalanced(string &s)
{
    stack<char> st;
    for (char x : s)
    {
        if (x == '(' || x == '[' || x == '{') // if it is an opening bracket, push into stack
            st.push(x);
        else // if it is a closed bracket, then we need to match and handle edge cases also
        {
            if (st.empty()) // edge case, if there is curr elem available but nothing in stack to match corresponding to
                return false;
            if (!matching(st.top(), x)) // match open and closed brackets, if not matching, string is not balanced, break out of loop return false
                return false;
            else // if there is a match, simply pop out the item from stack
                st.pop();
        }
    }
    return (st.empty()); // edge case to handle that all the opening and closing brackets matches and nothing is left in the stack for matching
}
int main()
{
    string s = "";
    s = "([])";
    cout << isBalanced(s) << endl;
    s = "((())";
    cout << isBalanced(s) << endl;
    s = "([)]";
    cout << isBalanced(s) << endl;
    s = "{}([()])";
    cout << isBalanced(s) << endl;
    s = "(()))";
    cout << isBalanced(s) << endl;
    return 0;
}