#include <iostream>
using namespace std;

int main()
{
    int a = 12002, b = 56, c = 203;

    (a > b) ? cout << "A is Greater" : cout << "B is Greater";

    cout << endl;
    cout << ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c)) << " is greater";

    bool isOn = true;
    cout << endl;
    isOn ? cout << "on" : cout << "off";

    cout << endl;
    int balance = 20000;

    cout << ((balance == 0) ? "NO BALANCE" : (balance > 2000) ? "PROFIT"
                                         : (balance >= 0)     ? "BREAKEVEN"
                                                              : "LOSS");

    return 0;
}