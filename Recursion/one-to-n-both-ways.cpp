#include <iostream>
using namespace std;
void print1toN(int n)
{
    if (n == 0)
        return;
    print1toN(n - 1);
    cout << n << " ";
}
/// @brief prints numbers from n to 1
/// Tail recursion : A recrsive fn is tail recursive when parent fn has nothing more to do when child fn has finished.
/// Why is it faster than normal rec fn : beacuse it does not have to maintain state, takes less time and less auxillary space for execution
/// Can we convert every non tail recursive sln to tail recursive sln : NO
/// @param n nth value
void printNto1(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    printNto1(n - 1);
}
int main()
{
    int num;
    cout << "enter a number" << endl;
    cin >> num;
    print1toN(num);
    cout << endl;
    printNto1(num);
    return 0;
}