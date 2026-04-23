#include <iostream>
#include <vector>
#include <array>
using namespace std;

class MyException
{
public:
    const char *message()
    {
        return "This is a dummy method used to simulate the behaviour of exception";
    }
};

int main()
{
    int index = 6;
    int size = 5;
    int arr[5];
    try
    {
        if (index >= size)
            throw MyException();
    }
    catch (MyException e)
    {
        cout << e.message();
    }
    catch (...)
    {
        cout << "THis is used to catch any format of data";
    }

    cout << "\nDone!";
    return 0;
}