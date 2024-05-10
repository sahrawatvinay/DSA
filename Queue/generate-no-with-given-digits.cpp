#include <iostream>
#include <set>
#include <queue>
using namespace std;
void print10Numbers(set<int> &s, int &x)
{
    queue<string> q;
    for (int x : s)
        q.push(to_string(x));   // initially push the digits using which we need to generate further n digits in queue
    for (int i = 0; i < x; i++) // run a loop from 0 to n
    {
        string curr = q.front(); // get 1st element
        cout << curr << " ";
        q.pop();
        q.push(curr + "5"); // append 1st to n digits to currently popped item from front
        q.push(curr + "6");
    }
}
int main()
{
    set<int> s{5, 6};
    int range = 10;
    print10Numbers(s, range);
    return 0;
}