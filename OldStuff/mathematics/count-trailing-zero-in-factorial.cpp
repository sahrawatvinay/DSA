#include <iostream>
using namespace std;
// noob solution as it will overflow the range of int
int countTrailingZeros(int num)
{
    int zeroes = 0, factorial = 1;
    if (num > 0)
    {
        // calculate factorial
        for (int i = 2; i <= num; i++)
        {
            factorial = factorial * i;
        }
        while ((factorial % 10) == 0)
        {
            zeroes++;
            factorial = factorial / 10;
        }
    }
    return zeroes;
}
// logic we just need to count 2 * 5 which are responsible for 0 in the end
// actually we need only 5's
// [n/5] + [n/25] + [n/125]
// [n/5] : gives no of 5's
// [n/25] : since 25 = 5x5 there is an extra 5, so
// [n/125] : since 125 = 5x5x5 there is an extra 5 (5x5 earlier calculated by 25) now we need that extra 5 .... so on based on value of n
int countTrailingZerosOptimized(int num)
{
    int count = 0;
    for (int i = 5; i <= num; i = i * 5)
    {
        /* code */
        count = count + num / i;
    }
    return count;
}
int main()
{
    try
    {
        /* code */
        int num;
        cout << "enter a number" << endl;
        cin >> num;
        // cout << countTrailingZeros(num) << " trailing zeroes" << endl;
        cout << countTrailingZerosOptimized(num) << " trailing zeroes" << endl;
        return 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}