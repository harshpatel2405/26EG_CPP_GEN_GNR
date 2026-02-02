#include <iostream>
using namespace std;

class Apple
{
    int abc;

public:
    Apple()
    {
        abc = 120;
        cout << "Apple Class initialized through Default constructor...\n";
    } // * default constructor

    Apple(int abc)
    {
        this->abc = abc;
        cout << "Apple Class initialized through parameterized constructor...\n";
    } // * parameterized constructor

    Apple(Apple &obj)
    {
        abc = 456;
        // abc = obj.a; --> this will take value of passed object
        cout << "Apple Class initialized through copy constructor...\n";
    } //* copy constructor

    void display()
    {
        cout << "ABC : " << abc << endl;
    }

    ~Apple()
    {
        cout << "Destructor called...." << abc << endl;
    }
};

int main()
{
    Apple a;      //^ default
    Apple b(789); //^ parameterized
    Apple c(b);   //^ copy

    cout << "\n";
    a.display();
    b.display();
    c.display();
    cout << "\n";
    return 0;
}