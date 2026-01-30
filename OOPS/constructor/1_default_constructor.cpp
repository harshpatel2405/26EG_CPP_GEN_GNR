#include <iostream>
using namespace std;

class IceCream
{
    int id;
    string flavor;
    string type;

public:
    IceCream()
    {
        id = 101;
        flavor = "choco";
        type = "cone";
        cout << "Data Set Successfully." << endl;
    } // default constructor

    void displayData()
    {
        cout << id << "\t" << flavor << "\t" << type << endl;
    }
};

int main()
{
    IceCream CookiesAndCream, Pista;
    
    cout << "ID\tFlavor\tType\n";
    CookiesAndCream.displayData();
    Pista.displayData();
    IceCream ic;
    return 0;
}