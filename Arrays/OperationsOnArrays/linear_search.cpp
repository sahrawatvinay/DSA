#include <iostream>
using namespace std;
/// @brief linear search 
/// @param arr pointer to an array similar as *arr
/// @param n number to find
/// @param size size of an array
/// @return index of the element, if index found = index else -1
/// Time Complexity : O(n)
int linearSearch(int arr[], int n, int size)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == n)
            return i;
    }
    return -1;
}
int main()
{
    int arr[10] = {5, 4, 6, 8, 11, 34, 3, 4, 7, 10};
    cout << "Enter element to find" << endl;
    int num;
    cin >> num;
    cout << "index : " << linearSearch(arr, num, 10);
    return 0;
}