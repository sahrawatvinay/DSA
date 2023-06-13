#include <iostream>
using namespace std;
bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
bool isPrimeOptimized(int num)
{
    if (num == 1)
        return false;
    if (num == 2 || num == 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (int i = 5; i * i <= num; i=i + 6)
    {   
        if((num % i == 0) || (num %(i+2)==0))
            return false;
    }
    return true;
}
int main()
{
    int num;
    cout << "enter a number" << endl;
    cin >> num;
    // bool prime = isPrime(num); noob solution
    bool prime = isPrimeOptimized(num);
    cout << ((prime) ? "Yes, its prime" : "No, its not prime");
    return 0;
}