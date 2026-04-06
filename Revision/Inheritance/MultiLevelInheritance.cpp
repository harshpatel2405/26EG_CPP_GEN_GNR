#include <iostream>
using namespace std;

class A1GP
{
    // private :
    int a;
    int b;

protected:
    A1GP(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void displayGrandParents()
    {
        cout << "A : " << a << endl;
        cout << "B : " << b << endl;
    }
};

class A1P: protected A1GP
{
    int c;

protected:
    A1P(int a, int b, int c) : A1GP(a, b)
    {
        this->c = c;
    }

    void displayParents()
    {
        cout << "C : " << c << endl;
    }
};

class A1C: protected A1P
{
    int d;

public:
    A1C(int a, int b, int c, int d) : A1P(a, b , c)
    {
        this->d = d;
    }

    void displayChild()
    {
        displayGrandParents();
        displayParents();
        cout << "D : " << d << endl;
    }
};

int main()
{
    A1C k(12, 24, 36, 48);
    k.displayChild();
    return 0;
}