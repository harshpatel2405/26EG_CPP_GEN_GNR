#include <iostream>
using namespace std;

class IceCream
{
    int id;
    string flavor;
    string type;

public:
    IceCream(int id, string f, string t)
    {
        this->id = id;
        flavor = f;
        type = t;
        cout << "Data Set Successfully." << endl;
    }

    void displayData()
    {
        cout << id << "\t" << flavor << "\t" << type << endl;
    }
};

int main()
{
    IceCream CookiesAndCream(101, "Choco", "scoop"), Pista(102, "Sweet", "cone");

    cout << "\n\nID\tFlavor\tType\n--\t------\t----\n";
    CookiesAndCream.displayData();
    Pista.displayData();

    // IceCream ic(103, "Bubble", "scoop");
    return 0;
}