#include <iostream>
using namespace std;

class Apple
{
public:
    void displayA()
    {
        cout << "Apple Class Display Method Called..\n";
    }
};

class Banana : protected Apple
{
public:
    void displayB()
    {
        displayA();
        cout << "Banana Class Display Method Called..\n";
    }
};

class Chikoo : public Apple
{
public:
    void displayC()
    {
        cout << "Chikoo Class Display Method Called..\n";
    }
};

int main()
{
    Banana b;
    b.displayB();
    // b.displayA();

    Chikoo C;
    C.displayA();
    C.displayC();

    return 0;
}