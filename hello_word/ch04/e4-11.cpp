#include "../include/std_lib_facilities.h"

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> primes;
    for (int i = 0; i <= 100; ++i)
    {
        if(isPrime(i))
        {
            primes.push_back(i);
        }
    }
    cout << "Primes: " << primes.size() << " numbers" << endl;
    for (int i = 0; i < primes.size(); ++i)
    {
        cout <<  primes[i] << endl;
    }
    keep_window_open();
}