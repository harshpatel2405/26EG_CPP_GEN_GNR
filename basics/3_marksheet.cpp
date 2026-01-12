#include <iostream>
using namespace std;

int main()
{
    string name;
    string address;
    int marks;
    int rollNo;
    bool isPresent;

    cout << "Enter name : ";
    cin >> name;

    cout << "Enter address : ";
    cin >> address;

    cout << "Enter marks : ";
    cin >> marks;

    cout << "Enter Roll NUmber : ";
    cin >> rollNo;

    cout << "Is Student present : ";
    cin >> isPresent;

    cout << "\nName : " << name << endl
         << "address : " << address << endl;
    cout << "marks : " << marks << endl;
    cout << "rollNo : " << rollNo << endl;
    cout << "isPresent : " << isPresent << endl;
    return 0;
}