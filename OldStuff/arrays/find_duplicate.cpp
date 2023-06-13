/*
Q: Given an array from 1 to n-1. There is a number that is present twice. Find that number
Approach: we can xor the whole array, the similar numbers from 1 to n-1 will get cancelled out and the duplicate will remain there.
First xor all the elements of an array and store it in a variable.
Then xor from 1 to n-1 with the stored xor ans of the complete array, that we know they are definately present.
Then we will get the remianing element.
*/
#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int findDuplicate(int arr[], int size)
{
    int result = 0;
    // xor the complete array and store it in a variable
    for (int i = 0; i < size; i++)
    {
        result = result ^ arr[i];
    }

    // xor the stored variable with 1 to n-1 as it was given that it is present
    for (int i = 1; i < size; i++)
    {
        result = result ^ i;
    }
    return result;
}

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 5};
    cout << "The duplicate number is: " << findDuplicate(array, 10);
    return 0;
}