#include <iostream>
using namespace std;

int main()
{
    int age = 22;

    if (age > 18)
    {
        cout << "You Can Vote.." << endl;
    }

    int num = 12;
    if (num > 0)
        cout << "Positive" << endl;
    else
        cout << "Negative" << endl;

    num = 23;
    if (num > 0)
        cout << "Positive" << endl;
    else if (num == 0)
        cout << "Zero" << endl;
    else
        cout << "Negative" << endl;

    int a = 12, b = 24, c = 36;

    if (a > b)
    {
        if (a > c)
            cout << "A";
        else
            cout << "C";
    }
    else
    {
        if (b > c)
            cout << "B";
        else
            cout << "C";
    }

    return 0;
}