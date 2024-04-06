#include <iostream>
#include <vector>
using namespace std;
void printSnakePattern(vector<vector<int>> &v)
{
    int rows = v.size();
    int columns = v[0].size();
    for (int i = 0; i < rows; i++) // traverse row wise
    {
        if (i % 2 == 0) // if row is even, print elements from left to right
        {
            for (int j = 0; j < rows; j++)
                cout << v[i][j] << " ";
        }
        else // if odd, print elements from right to left
        {
            for (int j = columns - 1; j >= 0; j--)
                cout << v[i][j] << " ";
        }
    }
}
int main()
{
    vector<vector<int>> vect{
        {1, 2, 3},
        {2, 3, 4},
        {5, 6, 7}};
    printSnakePattern(vect);
    return 0;
}