#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter age : ";
    //*    >> -> extraction operator
    cin >> age;

    cout << "Your age is " << age;

    int a, b;

    // cout << "\nEnter a : ";
    // cin >> a;
    // cout << "Enter b : ";
    // cin >> b;

    // cout << "A : " << a << endl;
    // cout << "B : " << b << endl;

    cout << "\n\nEnter a and b : ";
    cin >> a >> b;

    cout << "A : " << a << "\tB : " << b << endl;
    return 0;
}