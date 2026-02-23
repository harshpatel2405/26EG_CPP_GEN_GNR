
#include <iostream>
using namespace std;

// * function declaration
int sum(int a, int b = 5);

int sum(int a, int b)
{
    cout << "A : " << a << "\tB: " << b << endl;
    return a + b;
}

int main()
{
    cout << "Sum(10) : " << sum(10) << endl
         << endl;
    cout << "Sum(10,20) : " << sum(10, 20) << endl
         << endl;
}