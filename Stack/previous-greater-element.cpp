#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void previousGreaterElement(vector<int> &v)
{
    stack<int> st;
    for (int i = 0; i < v.size(); i++) // traverse remaining elements
    {
        while (!st.empty() && st.top() <= v[i]) // while stack is not empty and the element on top of stack is smaller than current element keep popping as they are of no use
            st.pop();
        int pg = st.empty() ? -1 : st.top(); // compute previous greater
                                             // if stack is empty, means there is nothing greater available on left, so print -1
                                             // if not, prev greater will be on top of stack
        cout << pg << " ";                   // print previous greater
        st.push(v[i]);                       // push current element to stack for further computation
    }
}
int main()
{
    vector<int> v{20, 30, 10, 5, 15};
    previousGreaterElement(v);
    return 0;
}