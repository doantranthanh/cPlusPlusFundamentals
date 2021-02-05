#include "../include/std_lib_facilities.h"

int main()
{
    cout << "Please enter your first name: ";
    string first_name = "";
    cin >> first_name;
    cout << "Hello," << first_name << "\n"; 
    cout << "Enter the your friend name you want to write to: ";
    string friend_name = "";
    cin >> friend_name;
    cout << "Dear " << friend_name << "\n";
    cout << "How are you? I am fine. I miss you\n";
    cout << "Have you seen "<<friend_name <<" lately?";
    char friend_sex = 0;
    cin >> friend_sex;
    if(friend_sex == 'm')
    {
        cout << "If you see "<<friend_name <<" please ask him to call me\n";
    }
    if (friend_sex == 'f')
    {
        cout << "If you see "<<friend_name <<" please ask her to call me\n";
    }
    int age = 0;
    cin >> age;
    if(age < 0 || age >=110)
    {
        cout << "you're kidding\n";
    }
    else
    {
        cout << "I hear you just had a birthday and you are "<< age <<" years old";
    }

    if(age < 12)
    {
        cout << "Nex year you will be "<< age + 1 <<"\n";
    }

    if(age == 17)
    {
        cout << "Next year you will be able to vote";
    }

    if(age >= 17)
    {
        cout << "I hope you are enjoying retirement";
    }
    cout << "Yours sincerely\n";
}