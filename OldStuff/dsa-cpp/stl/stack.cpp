/*
- Follows LIFO : Last in First out
- new element is added at one end (top) and an element is removed from that end only
- no index based retreival of elemnets
- only 3 fns : push, pop, top
- all the operations are O(1)
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.emplace(4); //{4,3,2,1}

    cout << st.top() << endl; //prints 4
    st.pop(); //will remove 4
    cout << st.top() << endl; //prints 3
    st.push(4);
    cout << st.size() << endl; //prints 4
    cout << st.empty() << endl; //prints 0 or 1 if stack is empty, prints 1, else 0
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << st.empty();
    return 0;
}