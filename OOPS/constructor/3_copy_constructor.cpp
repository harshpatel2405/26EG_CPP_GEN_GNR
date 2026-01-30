#include <iostream>
using namespace std;

class SuperModel
{
    int a = 0, b = 0, c = 0, d = 0, e = 0;

public:
    SuperModel(int a, int b, int c, int d, int e)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->e = e;
        cout << "Data set..\n";
    }//parameterized constructor

    SuperModel(SuperModel &obj)
    {
        a = obj.a;
        c = obj.c;
        e = obj.e;
    } //copy constructor

    void displayData()
    {
        cout << (a ? "true" : "false") << "\t";
        cout << (b ? "true" : "false") << "\t";
        cout << (c ? "true" : "false") << "\t";
        cout << (d ? "true" : "false") << "\t";
        cout << (e ? "true" : "false") << "\t" << endl;
    }
};

int main()
{
    SuperModel v3(1, 1, 1, 1, 1);
    SuperModel v2(v3); // 3

    cout << "A\tB\tC\tD\tE\n-----\t-----\t-----\t-----\t-----\n";
    v3.displayData();
    v2.displayData();
    return 0;
}