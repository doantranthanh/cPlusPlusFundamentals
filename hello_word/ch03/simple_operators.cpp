#include "../include/std_lib_facilities.h"

int main()
{
    cout << "Please enter a floating-point value: ";
    int n;
    cin >> n;
    cout << "n == " << n 
                    << "\nn+1 == " << n+1
                    << "\nthreetimes n == " << 3*n
                    << "\ntwice n == " << n+n
                    << "\nn squared == " << n*n
                    << "\nhalf of n == " << n/2
                    << "\nsquare root of n == " << sqrt(n)
                    << "\ndivision of n == " << n/2
                    << "\nremainder of n == " << n%2
                    << endl;

    cout << "Please enter your first and second names\n";
    string first;
    string second;
    cin >> first >> second;
    if(first == second)
    {
        cout << "that's the same name twice\n";
    }
    if(first < second)
    {
        cout << first << " is alphabetically before " << second << "\n";
    }
    if(first > second)
    {
        cout << first << " is alphabetically after " << second << "\n";
    }
    string name = first + " " + second;
    cout << "Hello, " << name << '\n';
}