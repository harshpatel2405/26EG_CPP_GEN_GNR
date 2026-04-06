#include <iostream>
using namespace std;

class A1P1
{
    // private :
    int a;
    int b;

protected:
    A1P1(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void displayParent1()
    {
        cout << "A : " << a << endl;
        cout << "B : " << b << endl;
    }
};

class A1P2
{
    int c;

protected:
    A1P2(int c)
    {
        this->c = c;
    }

    void displayParent2()
    {
        cout << "C : " << c << endl;
    }
};

class A1C: protected A1P1, protected A1P2
{
    int d;

public:
    A1C(int a, int b, int c, int d) : A1P1(a, b ), A1P2(c)
    {
        this->d = d;
    }

    void displayChild()
    {
        displayParent1();
        displayParent2();
        cout << "D : " << d << endl;
    }
};

int main()
{
    A1C k(12, 24, 36, 48);
    k.displayChild();
    return 0;
}