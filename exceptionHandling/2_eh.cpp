#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    try
    {
        if (n > 0)
            throw n;
        else if (n < 0)
            throw true;
        else
            throw 'c';
    }
    catch (int x)
    {
        cout << "Number is positive";
    }
    catch (bool x)
    {
        cout << "Number is negative";
    }
    catch (char x)
    {
        cout << "Number is Zero";
    }
    return 0;
}