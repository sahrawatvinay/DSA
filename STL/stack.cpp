/*
- Linear Data Structure
- Insert(push) and remove(pop) happens only from one end
- Works on LIFO (Last In First Out) principle
- push, pop, top (See the last pushed element), empty are main functions
- A stack is a data structure you should use when you are interested in placing elements on top and getting elements from the top
- All operations O(1)
*/

#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<string> &stack)
{
    while (!stack.empty())
    {
        cout << stack.top() << " ";
        stack.pop();
    }
}

int main()
{
    stack<string> s;
    s.push("Vinay");
    s.push("Is");
    s.push("Pro");
    s.push("Guy");
    cout << "Top element -> " << s.top() << endl;
    cout << "Size of Stack -> " << s.size() << endl;
    cout << "Is Stack Empty -> " << s.empty() << endl;
    s.pop();
    cout << "Top after last element -> " << s.top() << endl;
    return 0;
}