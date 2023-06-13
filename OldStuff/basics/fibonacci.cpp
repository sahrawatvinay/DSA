/*
The sequence follows the rule that each number is equal to the sum of the preceding two numbers.
The Fibonacci sequence begins with the following 14 integers: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233 ...
Each number, starting with the third, adheres to the prescribed formula.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n, start to n numbers we have to print" << endl;
    cin >> n; // count of numbers to be printed
    if (n == 0)
    {
        cout << "input should not be less than 1";
    }
    else if (n == 1)
    {
        cout << "0";
    }
    else if (n == 2)
    {
        cout << "0 1";
    }
    else
    {
        int prev = 0;
        int curr = 1;
        cout << prev << " " << curr << " ";
        int next;
        for (int i = 2; i < n; i++)
        {
            next = prev + curr;
            cout << next << " ";
            prev = curr;
            curr = next;
        }
    }
    return 0;
}