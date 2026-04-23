#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception
{
public:
    const char *what()  const noexcept override
    {
        return "This is what method";
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
        cout << e.what();
    }
    catch (...)
    {
        cout << "THis is used to catch any format of data";
    }

    cout << "\nDone!";
    return 0;
}