#include <iostream>
using namespace std;

int main()
{
    // * this could be due to allocation of memory .....
    // * from where does memory gets allocated
    int q = 101;
    int *ptr = &q;

    cout << *ptr << endl;
    cout << ptr << endl;
    int a = 10, b = 20, c = 30;

    // * int *arr = new int[3];

    int *arr[3];
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;

    for (int i = 0; i < 3; i++)
    {
        cout << *arr[i] << endl;
    }

    return 0;
}