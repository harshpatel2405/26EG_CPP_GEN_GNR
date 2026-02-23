#include <iostream>
using namespace std;

int main()
{
    int *ptr, a;

    ptr = &a;
    a = 12;
    cout << "A : " << a << endl;
    cout << "&A : " << &a << endl;
    cout << "ptr : " << ptr << endl;
    cout << "*ptr : " << *ptr << endl;
    cout << "&ptr : " << &ptr << endl;
    return 0;
}