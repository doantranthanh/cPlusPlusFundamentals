#include "../include/std_lib_facilities.h"

int main()
{
    int mil = 0;
    double converter = 1.609;
    cin >> mil;
    cout << "You just enter the " << mil << " in miles and it it equivalent to " << mil * converter << " in km\n";
    int val1 = 0;
    int val2 = 0;
    int smallest = 0;
    int largest = 0;
    int diff = val1 - val2;
    cin >> val1;
    cin >> val2;
    if (val1 < val2)
    {
        smallest = val1;
        largest = val2;
    }
    else
    {
        smallest = val2;
        largest = val1;
    }
    cout << "The smallest number is " << smallest << "\n";
    cout << "The largest number is " << largest << "\n";
    cout << "The product number is " << val1 * val2 << "\n";
    cout << "The ratio number is " << val1 / val2 << "\n";

    int val3 = 0;
    int val4 = 0;
    int val5 = 0;
    cin >> val3 >> val4 >> val5;
    int smallestOne = val3;
    int largestOne = val5;
    if (val4 < smallestOne)
    {
        smallestOne = val4;
    }
    if (val5 < smallestOne)
    {
        smallestOne = val5;
    }
    if (val4 > largestOne)
    {
        largestOne = val4;
    }
    if (val3 > largestOne)
    {
        largestOne = val3;
    }
    int middleOne = (val3 + val4 + val5) - (smallestOne + largestOne);
    cout << smallestOne << " " << middleOne << " " << largestOne << "\n";

    string stringOne = "";
    string stringTwo = "";
    string stringThree = "";
    cin >> stringOne >> stringTwo >> stringThree;
    string firstItem = "";
    string middleItem = "";
    string lastItem = "";
    if (stringOne <= stringTwo && stringOne <= stringThree)
    {
        firstItem = stringOne;
        if (stringTwo <= stringThree)
        {
            middleItem = stringTwo;
            lastItem = stringThree;
        }
        else
        {
            middleItem = stringThree;
            lastItem = stringTwo;
        }
    }
    else if (stringTwo <= stringOne && stringTwo <= stringThree)
    {
        firstItem = stringTwo;
        if (stringOne <= stringThree)
        {
            middleItem = stringOne;
            lastItem = stringThree;
        }
        else
        {
            middleItem = stringThree;
            lastItem = stringOne;
        }
    }
    else if (stringThree <= stringOne && stringThree <= stringTwo)
    {
        firstItem = stringThree;
        if (stringOne <= stringTwo)
        {
            middleItem = stringOne;
            lastItem = stringTwo;
        }
        else
        {
            middleItem = stringTwo;
            lastItem = stringOne;
        }
    }
    cout << firstItem << " " << middleItem << " " << lastItem << "\n";
    keep_window_open();
}