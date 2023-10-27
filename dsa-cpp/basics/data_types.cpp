#include <bits/stdc++.h>
using namespace std;

// Prototype of the function
void swap(int &, int &);

// pass by value
void printIntVal(int a) //this is simple pass by value
{
    cout << "fn val a: " << a << endl;
    a += 5;
    cout << "fn val a: " << a << endl;
}

// pass by reference
void printIntRef(int &a) // if we want ot use int *a here the argument should be &a.
{
    cout << "fn ref a: " << a << endl;
    a += 5;
    cout << "fn ref a: " << a << endl;
}

// updating the values of an array
void updateArray(int *arr, int size) //int arr[] can also be used in place of int *arr 
                                     //as array is always passed by reference
{
    for (int i = 0; i < size; i++)
        arr[i] += 5;
}

//prinitng the values of ana array
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
int main()
{
    // int, long, long long, float, double
    // string "" and getline
    // char ''

    // pass by reference : use & with the parameter in function,
    // arrays : no need it always gets passwd by reference otherwise all other with &

    int a = 5;
    printIntVal(a);
    cout << "main after val: " << a << endl;
    printIntRef(a);
    cout << "main after ref: " << a << endl;
    int arr[3] = {0, 1, 2};
    updateArray(arr, 3);
    printArray(arr, 3);
    // void printArray(int *arr /*or arr[] can be used*/, int n)

    return 0;
}