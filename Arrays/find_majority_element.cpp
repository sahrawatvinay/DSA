#include <iostream>
using namespace std;
int findMajorityElement(int arr[], int n)
{
    int counter = 1, res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[res] == arr[i])
            counter++;
        else
            counter--;
        if (counter == 0)
        {
            res = i;
            counter = 1;
        }
    }
    counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[res])
            counter++;
    }
    if (counter < (n / 2))
        return -1;
    else
        return counter;
}
int main()
{
    int arr[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = findMajorityElement(arr, 9);
    cout << "majority element index : " << result;
    return 0;
}