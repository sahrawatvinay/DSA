/*
- key, value pair
- key is always unique, no duplicacy
- 1 key will point to only 1 value
map                                 unordered map
sorted                              unordered
ins, del, search O(log n)           avg O(1), worst O(n)
implemented usingbalanced BST       Hash table
slower search                       faster search
*/
#include <iostream>
#include <map>
using namespace std;

void printMap(map<int, string> map)
{
    for (auto x : map)
        cout << x.first << " " << x.second << endl;
}

int main()
{
    map<int, string> m;
    m[2] = "Mr";
    m.insert({3, "Vinay"});
    m.insert({5, "Sahrawat"});
    m.insert({10, "Code"});
    cout << "checking direct access : " << endl;
    cout << m[3] << " -- " << m[10] << " -- " << m[2] << " -- " << m[1] << " ~~ " << m[68]; //not present;

    printMap(m);
    cout << "Finding 5 -> " << m.count(5) << endl;
    m.erase(5); // only provide key value, the entry will be deleted
    cout << "Printing values after erasing 5 -> " << endl;
    printMap(m);
    auto it = m.find(2);
    cout << (*it).first << " " << (*it).second << endl;
    for (auto i = it; i != m.end(); i++)
        cout << (*i).first << " " << (*i).second << endl;
    return 0;
}