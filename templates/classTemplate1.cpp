#include <iostream>
using namespace std;

template <class T>
class Demo
{
    int a;
    T b;

public:
    Demo(int a, T b)
    {
        this->a = a;
        this->b = b;
    }

    void show()
    {
        cout << "This is without return type.." << endl;
    }

    T display()
    {
        return a + b;
    }
};

int main()
{
    Demo <int> d(15, 10.5);
    d.show();
    cout << d.display();
    return 0;
}