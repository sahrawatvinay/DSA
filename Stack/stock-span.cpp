#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void findStockSpan(vector<int> &v)
{
    stack<int> st;
    st.push(0); // store indexes of previous greater element in stack, initially there will be atleast 1 element and since we including so there will be 1, and idx 0 in stack
    cout << "1 "; // because current element is also taken into account
    for (int i = 1; i < v.size(); i++) // traversing through remaining elements
    {
        while (!st.empty() && v[st.top()] <= v[i]) // keep removing the smaller elements which are in stack as they are of no use
            st.pop();
        int span = st.empty() ? i + 1 : i - st.top(); // compute span, if stack is empty, this means that there is no greater element available in stack that is greater than current element so, store i+1 in stack
                                                      // otherwise compute span  = index of current element - index of closest greater element on left
        cout << span << " ";                          // print span
        st.push(i);                                   // push the current element in stack
    }
}
int main()
{
    vector<int> v{13, 15, 12, 14, 16, 8, 6, 4, 10, 30};
    findStockSpan(v);
    return 0;
}