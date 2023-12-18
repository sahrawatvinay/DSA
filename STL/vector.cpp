/*
* vector : dynamic arrays
* if vector capacity is full and we try to insert new element then,
    new vector of double size is created and all the elements of previous vector are copied
    to this newly created vector and old one is dropped.
* random access is possible
* Characteristic	            Array	                Vector
    Static/Dynamic Size	        Static (Fixed size)	    Dynamic (Resizable)
    TC Access	                O(1)	                O(1)
    TC Insertion	            O(n) (Average)	        O(1) (amortized)
    TC Deletion	                O(n) (Average)	        O(1) (amortized)
    Size and Flexibility	    Fixed size, determined  Dynamic size, can grow or shrink
                                at compile time
    Memory Management	        Manual	                Automatic (Managed by STL)
* vectors and arrays both have contiguous memory locations to store data
*/

#include <iostream>
#include <vector>
using namespace std;

/// @brief printing elements of vector using iterator
/// @param v address of vector
void printVectorElements(vector<int> &v)
{
    for (auto i : v)
        cout << i << " ";
    cout << endl;
}

/// @brief print vector elements using index at and []
/// @param v address of vector 1st elements
void printVectorElementsUsingIndex(vector<int> &v)
{
    cout << "using .at v.at(i) -> " << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v.at(i) << " ";

    cout << endl
         << "using .at v[i] -> " << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}

/// @brief printing the values of vector using iterator
/// @param v address pointing to the address of first element of an array
void printVectorUsingIterator(vector<int> &v)
{
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);
    cout << "Capacity -> " << v.capacity() << endl; // capacity is now 8 because old vector is dropped, new vector : size doubled and old copied to new
    cout << "Size -> " << v.size() << endl;         // size : 5 because size is the number of elements present in vector
    printVectorElements(v);

    cout << "Random access of element in vector -> " << endl;
    cout << "2nd element -> " << v.at(1) << endl; // index starts with 0
    cout << "3rd element -> " << v[2] << endl;

    cout << "Check front and back of elements ->" << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;

    v.pop_back();
    cout << "after using pop back ->";
    printVectorElements(v);

    cout << "after removing element at index 1 ->" << endl;

    // position : argument
    v.erase(v.begin() + 1); // remove element at index 1, iterator instance pointing to position
    printVectorUsingIterator(v);

    // position, value : argument(s)
    v.insert(v.end(), 7);
    v.insert(v.end(), 8);
    v.insert(v.end(), 9);
    v.insert(v.begin() + 2, 10);

    cout << "adding four values (7,8,9,10) in the vector using insert -> " << endl;
    printVectorUsingIterator(v);

    v.clear(); // all the elements deleted, size : 0
    cout << "after clearing the vector -> " << endl;
    cout << "Size -> " << v.size() << endl;
    cout << "Capacity -> " << v.capacity() << endl;

    vector<int> x(5, 69);
    vector<int> copyOfX(x); // copy of vector x
    cout << "copy of vector x -> " << endl;
    printVectorElementsUsingIndex(copyOfX);
    return 0;
}