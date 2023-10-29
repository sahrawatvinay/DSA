/*
container that is dynamic in nature, size can be increased
used when size is unknown
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // faster than push back
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);

    vector<int> v1(5, 100); //{100, 100, 100, 100, 100}

    vector<int> v2(5);  //{gb val, gb val, gb val, gb val, gb val}
    vector<int> v3(v1); // create vector v2 and copy elements of v1 into v2

    // accessing the elemnts using index directly
    cout << "1st elem v: " << v[0] << " or " << v.at(0) << endl;

    // using iterators
    vector<int>::iterator itb = v.begin(); // points to the starting memory address i.e. 1 in this case
    vector<int>::iterator ite = v.end();   // points to memory location right after the last address, we need to it--, to get last value
    // vector<int>::iterator it = v.back(); //error
    cout << *(itb) << endl;
    cout << v.back() << endl; // does not print anything but points to last element in vector

    cout << endl;

    // iterating on a vector
    vector<int> vec = {10, 20, 30, 40, 500};
    for (auto itr = vec.begin(); itr != vec.end(); itr++)
        cout << *(itr) << " ";

    cout << endl;

    // simplest way to iterate on vector
    for (auto itr : vec)
        cout << itr << " ";

    // most important processes in vector
    vector<int> vector;
    vector.push_back(11);
    vector.push_back(12);
    vector.push_back(13);
    vector.push_back(14);
    vector.push_back(15);
    vector.push_back(16);

    // insert at begin
    vector.insert(vector.begin(), 10);

    // insert at an index
    vector.insert(vector.begin() + 2, 20);

    // insert multiple instances at a particular index
    vector.insert(vector.begin() + 3, 2, 50);

    cout << "after insert " << endl;
    for (auto it : vector)
        cout << it << " ";

    cout << endl;

    vector.pop_back(); //removes last element
    vector.erase(vector.begin() + 4); //removes element at 4th index
    vector.erase(vector.begin() + 2, vector.begin() + 4); // to remove elements at idx 2 & 3, to is exclusive so provide ened addr next to that till where removed

    cout << "after deletion " << endl;
    for (auto it : vector)
        cout << it << " ";
        
    return 0;
}