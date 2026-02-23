#include <iostream>
using namespace std;

int main()
{
    int a = 12, b = 24;
    int *p1, *p2;

    p1 = &a;
    p2 = &b;

    cout << "Before Swapping\n";
    // cout << "A : " << a << "\tB : " << b << endl;
    cout << "A : " << *p1 << "\tB : " << *p2 << endl;

    a = *p1 + *p2;
    b = *p1 - *p2;
    a = *p1 - *p2;
    cout << "After Swapping\n";
    // cout << "A : " << a << "\tB : " << b << endl;
    cout << "A : " << *p1 << "\tB : " << *p2 << endl;
    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 12, b = 24;
//     int *p1, *p2;

//     p1 = &a;
//     p2 = &b;

//     cout << "Before Swapping\n";
//     cout << "A : " << *p1 << "\tB : " << *p2 << endl;

//     p1 = &b;
//     p2 = &a;
//     cout << "After Swapping\n";
//     cout << "A : " << *p1 << "\tB : " << *p2 << endl;
//     return 0;
// }