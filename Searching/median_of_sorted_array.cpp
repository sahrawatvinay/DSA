#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <climits>
#include <deque>
using namespace std;

double getMedian(int a1[], int a2[], int n1, int n2)
{
    // we will perform binary search on smaller ie 1st array
    int low = 0, high = n1 - 1; //compute low and high pointers
    while (low <= high)
    {
        int i1 = (low + high) / 2; //find mid of 1st array
        int i2 = ((n1 + n2 + 1) / 2 - i1); // find mid of 2nd array based on i1
        int min1 = (i1 == n1) ? INT_MAX : a1[i1]; // minimum element in right side of a1
        int max1 = (i1 == 0) ? INT_MIN : a1[i1 - 1]; //  maximum element in left side of a1
        int min2 = (i2 == n2) ? INT_MAX : a2[i2]; // minimum element in right side of a2
        int max2 = (i2 == 0) ? INT_MIN : a2[i2 - 1]; // maximum element in right side of a2
        if (max1 <= min2 && max2 <= min1) // condition to check if there are all smaller elements on the left set than the right set
        {
            if ((n1 + n2) % 2 == 0) // if total no. of elements are even
                return (double)((max(max1, max2) + min(min1, min2)) / 2);
            else // if total no. of elements are odd, then return max value form left set as we can have 1 extra element on left set
                return (double)max(max1, max2);
        }
        else if (max1 > min2) // go and move to the left side
            high = i1 - 1;
        else // go to the right side
            low = i1 + 1;
    }
}

int main()
{
    int a1[] = {10, 20, 30, 40, 50}, n1 = 5, a2[] = {5, 15, 25, 35, 45}, n2 = 5;
    cout << getMedian(a1, a2, n1, n2);
    return 0;
}