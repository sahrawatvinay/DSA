#include <iostream>
using namespace std;
/// @brief check if equillibrium point exists in an array or not, a point is equillibrium if there is a point at which both sum of elements on left and right side is same
/// @param arr pointer to an array
/// @param n size of an array
/// @return true false if there is an element which is there
bool checkIfEquilibriumPointExists(int arr[], int n)
{
    int rs = 0;
    for (int i = 0; i < n; i++)
        rs += arr[i]; // cout sum of all the elements 
    int ls = 0;
    for (int i = 0; i < n; i++)
    {
        rs -= arr[i]; // calculate right sum by subtracting the current value of element from total sum 
        if (ls == rs) // check if left sum and right sum is same
            return true;
        ls += arr[i]; // update left sum by adding current sum to ls
    }
    return false;
}
int main()
{
    int size = 6;
    int arr[size] = {3, 4, 8, -9, 9, 7};
    bool result = checkIfEquilibriumPointExists(arr, size);
    cout << result;
    return 0;
}