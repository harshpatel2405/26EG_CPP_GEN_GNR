#include <iostream>
using namespace std;

class A1P
{
    // private :
    int a;
    int b;

protected:
    A1P(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void displayParent()
    {
        cout << "A : " << a << endl;
        cout << "B : " << b << endl;
    }
};

class A1C1 : protected A1P
{
    int c;

public:
    A1C1(int a, int b, int c) : A1P(a, b)
    {
        this->c = c;
    }

    void displayChild1()
    {
        displayParent();
        cout << "C : " << c << endl;
    }
};

class A1C2 : protected A1P
{
    int d;

public:
    A1C2(int a, int b, int d) : A1P(a, b)
    {
        this->d = d;
    }

    void displayChild2()
    {
        displayParent();
        cout << "D : " << d << endl;
    }
};

int main()
{
    A1C1 k(12, 24, 36); // A1P , A1C1
    k.displayChild1();

    A1C2 m(10, 20, 30); // A1P ,A1C2
    m.displayChild2();
    return 0;
}