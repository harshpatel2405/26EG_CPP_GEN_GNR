#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 0;

    try
    {
        if (b == 0)
            throw 0;
        cout << a / b;
    }
    catch (int x)
    {
        cout << "Not possible";
    }

    cout
        << "This is after divide is complete";

    return 0;
}