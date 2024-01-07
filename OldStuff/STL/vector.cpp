// Vector : Dynamic array
#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int> &v)
{
    for (int i : v)
        cout << i << " ";
    cout << endl;
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    printVector(v);
    cout << "capacity : " << v.capacity() << endl; // how much space is available
    cout << "size : " << v.size() << endl; // how many elements are stored 
    cout << "Element at index 2: " << v[2] << endl;
    cout << "Element at index 2 using .at(): " << v.at(2) << endl;
    cout << "1st element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;
    vector<int> copyOfV(v); // copy all the elements of v in newly created vector copyOfV with exact size, values and capacity
    printVector(copyOfV);
    cout << "capacity copyOfV: " << v.capacity() << endl; // how much space is available
    cout << "size copyOfV: " << v.size() << endl; // how many elements are stored 
    v.clear(); // removes all the values but the capacity remains same
    cout << "After clearing : ";
    printVector(v);
    vector <int> vec(5,6); // creating vector of size 5 and initializing with value 6
    printVector(vec);
}