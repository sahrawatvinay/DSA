#include <iostream>
using namespace std;
/// @brief finds the second largest number in an array
/// @param arr array
/// @param size size of an array
/// @return the second largest element
int findSecondLargest(int arr[], int size)
{
    int largest = arr[0], secondLargest = -1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest)
        {
            if (arr[i] > secondLargest)
                secondLargest = arr[i];
        }
    }
    return secondLargest;
}
int main()
{
    int arr[10] = {5, 4, 101, 8, 11, 99, 55, 1, 2, 99};
    cout << findSecondLargest(arr, 10) << " is second largest number";
    return 0;
}