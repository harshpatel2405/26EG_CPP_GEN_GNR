#include <iostream>
using namespace std;

int main()
{
    int n = 150;

    cout << "Enter a number between 1 and 4 : ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "SUMMER";
        break;
    case 2:
        cout << "MONSOON";  
        break;
    case 3:
        cout << "Winter";
        break;
    case 4:
        cout << "SPRING";
        break;
    default:
        cout << "WRONG CHOICE";
    }
    return 0;
}