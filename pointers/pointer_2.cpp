#include <iostream>
using namespace std;

void fun(int *x) // 1002
{
    *x = 24; // 24
}

int main()
{
    int a = 12; // 1002
    fun(&a);  // fun(1002)
    cout << "A : " << a << endl;
    return 0;
}