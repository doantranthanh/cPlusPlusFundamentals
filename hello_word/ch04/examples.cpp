#include "../include/std_lib_facilities.h"

int main()
{
    const double cm_per_inch = 2.54;
    int length = 1;
    char unit =0;
    cout << "Please enter a length followed by a unit (c or i): \n";
    cin >> length >> unit;

    if(unit == 'i')
    {
        cout << length << "in == " << cm_per_inch * length << " cm\n";
    }
    else if(unit == 'c')
    {
        cout << length << "cm == " << length/cm_per_inch << " in\n";
    }
    else
    {
        cout << "Sorry, I dont know a unit called '" << unit << "'\n"; 
    }
    int i = 0;
    int lengthLetters = 26;
    char currentChar = 'a';
    while(i < lengthLetters)
    {
        cout << currentChar << " " << (int)currentChar << "\n";
        currentChar = char(currentChar + 1);
        ++i;
    }
    for(int i = 0; i < 100;++i)
    {
        cout << square(i) << '\n';
    }
}

int square(int n)
{
    return n*n;
}