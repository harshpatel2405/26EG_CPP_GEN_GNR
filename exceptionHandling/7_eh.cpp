#include <iostream>
using namespace std;

int main()
{
    try
    {
        int choice;
        cout << "1. Invalid Argument\n2. Out_of_range\nEnter your choice : ";
        cin >> choice;

        if (choice == 1)
        {
            throw invalid_argument("Invalid argument exception called..");
        }
        else if (choice == 2)
        {
            throw out_of_range("out of range exception called..");
        }
    }
    catch (invalid_argument e)
    {
        cout << e.what();
    }
    catch (out_of_range e)
    {
        cout << e.what();
    }
    catch (...)
    {
        cout << "Any type of exception called..";
    }

    cout << "Done!";
    return 0;
}