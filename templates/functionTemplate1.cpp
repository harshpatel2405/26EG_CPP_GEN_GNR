#include <iostream>
using namespace std;

template <typename T>
void add(T a, T b)
{
    cout << "Addition of " << a << " and " << b << " is " << a + b << endl;
}

template <typename T, typename U>
void subtract(T a, U b)
{
    cout << "Subtraction of " << a << " and " << b << " is " << a - b << endl;
}

template <typename T>
T square(T num)
{
    return num * num;
}

int main()
{
    add(10, 15);
    add(10.5, 15.2);
    add(11.2f, 45.1f);

    subtract(10,12);
    subtract(10.2,5.3);
    subtract(1.3f , 10.2);

    subtract('c', 12);

    cout << square(7)<<endl;
    cout << square(1.7)<<endl;
    cout << square(12.89f)<<endl;

    // add(10, 10.5);
    // add('a', 'b');
    return 0;
}