#include <iostream>
using namespace std;

class A1GP
{
    // private :
    int a;
    int b;

protected:
    A1GP() {}
    A1GP(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void displayGrandParent()
    {
        cout << "A : " << a << endl;
        cout << "B : " << b << endl;
    }
};

class A1P1 : virtual protected A1GP
{
    int c;

protected:
    A1P1(int c)
    {
        this->c = c;
    }

    void displayParent1()
    {
        cout << "C : " << c << endl;
    }
};

class A1P2 : virtual protected A1GP
{
    int d;

protected:
    A1P2(int d)
    {
        this->d = d;
    }

    void displayParent2()
    {
        cout << "D : " << d << endl;
    }
};

class A1C : protected A1P1, protected A1P2
{
    int e;

public:
    A1C(int a, int b, int c, int d, int e) : A1P1(c), A1P2(d), A1GP(a, b)
    {
        this->e = e;
    }

    void displayChild()
    {
        displayGrandParent();
        displayParent1();
        displayParent2();
        cout << "E : " << e << endl;
    }
};

int main()
{
    A1C k(12, 24, 36, 48, 60);
    k.displayChild();
    return 0;
}