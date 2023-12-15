/*
- everthig is placed in sorted order of a key
- no duplicates, all unique keys
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    map <int, int> mp;
    mp[1] = 2;
    mp.insert({2,3});
    mp.insert({5,6});
    mp.emplace(3,8);
    mp.insert({1, 121}); //does not update the value that is already present

    for(auto it : mp)
        cout << it.first << " " << it.second << endl;

    cout << mp[3] << endl;

    auto itr = mp.find(2);
    return 0;
}