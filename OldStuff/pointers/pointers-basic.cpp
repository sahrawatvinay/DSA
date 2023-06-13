#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int bredth;
};

int main()
{
    int a = 10;
    int *p = &a;
    cout << a << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << &a << endl;

    // pointer to an array
    int arr[5] = {2, 4, 6, 8, 10};
    int *pArr;
    pArr = arr; // no need for & here as arr is the starting address of an array, so it can store the address.
    // pArr = &arr[0]; // can also be done
    cout << pArr << endl;
    cout << &arr << endl;
    // accessing all the elements of an array
    for (int i = 0; i < 5; i++)
    {
        cout << pArr[i] << " " << arr[i] << " ";
    }
    cout << endl;

    // sizes
    int a1;
    char a2;
    float a3;
    double a4;
    struct Rectangle a5;

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout << sizeof(a1) << " " << sizeof(p1) << endl;
    cout << sizeof(a2) << " " << sizeof(p2) << endl;
    cout << sizeof(a3) << " " << sizeof(p3) << endl;
    cout << sizeof(a4) << " " << sizeof(p4) << endl;
    cout << sizeof(a5) << " " << sizeof(p5) << endl;

    //references 
    int x = 69;
    int &r = x; // must be initialized during declaration 
    cout << "ref 1- " << x << endl;
    x++;
    cout << "ref 2- " << r << endl;
    r++;
    cout << "ref 3- " << x  << " " << r << endl;
    cout << "end of pointers";
    return 0;
}