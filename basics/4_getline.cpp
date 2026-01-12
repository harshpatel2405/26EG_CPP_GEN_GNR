#include <iostream>
using namespace std;

int main()
{
    string name;

    cout << "Enter name : ";
    //*  cin >> name;    input :   abc xyz  -> output : abc

    getline(cin, name); //* input :   abc xyz  -> output : abc xyz

    cout << "Your name is " << name << endl;
    return 0;
}