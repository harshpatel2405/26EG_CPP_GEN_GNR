#include <iostream>
using namespace std;

class MyException
{
public:
    const char *message()
    {
        return "This is a custom exception";
    }
};

int main()
{

    MyException m;
    try
    {
        if (true)
            throw m;

        cout << "Normal execution occured";
    }
    catch (MyException &e)
    {
        cout << e.message();
    }
    return 0;
}