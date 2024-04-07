#include <iostream>
#include <vector>
using namespace std;
void printBoundary(vector<vector<int>> &v)
{
    int rows = v.size();
    int columns = v[0].size();

    // if there is only 1 row
    if (rows == 1)
    {
        for (int i = 0; i < columns; i++)
            cout << v[0][i];
    }
    // if there is only 1 column
    else if (columns == 1)
    {
        for (int i = 0; i < rows; i++)
            cout << v[i][0];
    }
    else
    {
        for (int i = 0; i < columns; i++) // print 1sr row
            cout << v[0][i] << " ";
        for (int i = 1; i < rows; i++) // print last column
            cout << v[i][columns - 1] << " ";
        for (int i = columns - 2; i >= 0; i--) // print last row
            cout << v[rows - 1][i] << " ";
        for (int i = rows - 2; i >= 1; i--) // print fisrt column
            cout << v[i][0] << " ";
    }
}
int main()
{
    vector<vector<int>> v{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};
    printBoundary(v);
    return 0;
}