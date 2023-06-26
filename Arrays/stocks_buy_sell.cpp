#include <iostream>
using namespace std;
/// @brief We have prices of stocks for n days, one can buy and sell stocks on any day, we need to maximize the profit.
/// Logic : We will buy the stocks when we hit the bottom. and sell the stocks when we reach the peek. Idea is simple start loop from 2nd element,
/// check if next no. is larger, keep adding the profit otherwise do nothing.
/// @param arr array containing prices of stock for n days
/// @param size no of days 
/// @return max profit one can earn by buying and selling stock on any day.
int maximizeProfit(int arr[], int size)
{
    int profit = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[i - 1])
            profit += (arr[i] - arr[i - 1]);
    }
    return profit;
}
int main()
{
    int arr[9] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    cout << "max profit : " << maximizeProfit(arr, 9);
    return 0;
}