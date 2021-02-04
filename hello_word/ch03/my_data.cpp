#include "../include/std_lib_facilities.h"

int main()
{
    cout << "Please enter your first name, second name and age(followed by 'enter'):\n";
    string first_name;
    string second_name;
    double age = -1.0;
    cin >> first_name >> second_name >> age;
    cout << "Hello, " << first_name << " "<<second_name<<"" << " has age is "<<age*12<<" month(s) or "<< age<<" year(s)\n";
}