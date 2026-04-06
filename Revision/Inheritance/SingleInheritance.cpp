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

    void display()
    {
        cout << "A : " << a << endl;
        cout << "B : " << b << endl;
    }
};

class A1C : protected A1P
{
    int c;

public:
    A1C(int a, int b, int c) : A1P(a, b)
    {
        this->c = c;
    }

    void displayChild()
    {
        display();
        cout << "C : " << c << endl;
    }
};

int main()
{
    A1C k(12, 24, 36);
    k.displayChild();
    return 0;
}