#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int bredth;
} rect;

int main()
{
    rect = {10, 20};
    Rectangle *p = &rect;
    // when pointer to structure always use arrow operators to access properties, when not accessing using pointer, simply access using.
    // the reson using arrow is because when you access using *p.length, . has higher priority so the pointer value will be invalid.
    // (*p).length is correct though
    p->length = 69; 
    p->bredth = 101;
    cout << p << endl;
    cout << rect.length << endl;
    cout << rect.bredth << endl;

    // creating a rectangle object in heap
    // first we need a pointer variable
    struct Rectangle *heapStructPtr = new Rectangle; //object created dynamically
    heapStructPtr->bredth = 111;
    heapStructPtr->length = 222;
    cout << heapStructPtr << endl;
    cout << heapStructPtr->bredth << endl;
    cout << heapStructPtr->length << endl;
    return 0;
}