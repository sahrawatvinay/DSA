#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printVector(vector<int> &v)
{
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    cout << "Finding 5 -> " << binary_search(v.begin(), v.end(), 5) << endl;
    cout << "Lower bound -> " << lower_bound(v.begin(), v.end(), 4) - v.begin() << endl;
    cout << "Upper bound -> " << upper_bound(v.begin(), v.end(), 7) - v.begin() << endl;

    int a = 2;
    int b = 9;
    cout << "max -> " << max(a, b) << endl;
    cout << "min -> " << min(a, b) << endl;
    swap(a, b);
    cout << "After swap -> a: " << a << " b: " << b << endl;

    string s = "abcd";
    reverse(s.begin(), s.end());
    cout << "Reverse -> " << s << endl;

    cout << "Elements in vector -> " << endl;
    printVector(v);

    // rotate first 2 elements, to the right
    rotate(v.begin(), v.begin() + 2, v.end());
    printVector(v);

    // based on intro sort
    // quick, heap and insertion sort combo
    sort(v.begin(), v.end());
    printVector(v);
    return 0;
}