#include <iostream>
using namespace std;

int fun(int n)
{
    static int x = 1; // * 100001
    int a = 120; // ^ 101000, 101003 , 101003
    // * it shares same memory location for all calls

    if (n == 0)
        return x;

    x += n;
    cout << "X : " << x << endl;
    return fun(n - 1) + x;

    // * 21 + 7 = 28
    // * 14 + 7
    // * 7 + 7
    // * 7
}

int main()
{
    cout << fun(3);
    return 0;
}