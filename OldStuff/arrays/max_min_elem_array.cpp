
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// max and min element in an array
void maxMinElement(int arr[], int size)
{
    int minElement = INT_MAX;
    int maxElement = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        // if (arr[i] < minElement)
        // {
        //     minElement = arr[i];
        // }
        // if (arr[i] > maxElement)
        // {
        //     maxElement = arr[i];
        // }

        // inbuit fn max, min, takes 2 arguments and returns which one is greater or smaller as per max and min respectively
        minElement = min(minElement, arr[i]);
        maxElement = max(maxElement, arr[i]);
    }
    cout << "Max Element : " << maxElement << endl;
    cout << "Min Element : " << minElement << endl;
}

int main()
{
    int arr[10] = {7, -4, 5, -8, 4, -1, 0, 44, -99, -69};
    maxMinElement(arr, 10);
    return 0;
}