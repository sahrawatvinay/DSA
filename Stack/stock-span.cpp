#include <iostream>
#include <vector>
#include <stack>
using namespace std;
/// @brief find out prices of stocks on n consecutive days
/// no. of consecutive days including current day and days just before it which has equal or smaller value
/// @param v stock prices on n consecutive days
void findStockSpan(vector<int> &v)
{
    stack<int> st;
    for (int i = 0; i < v.size(); i++) // traversing through elements
    {
        while (!st.empty() && v[st.top()] <= v[i]) // keep removing the smaller elements which are in stack as they are of no use
            st.pop();
        int span = st.empty() ? i + 1 : i - st.top(); // compute span, if stack is empty, this means that there is no greater element available in stack that is greater than current element so, store i+1 in stack
                                                      // otherwise compute span = index of current element - index of closest greater element on left
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