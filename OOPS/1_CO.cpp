#include <iostream>
using namespace std;

/*
*  Access Specifiers
& 1. Public -- accessible everywhere
& 2. protected -- accessible within class and inherited class
& 3. private -- accessible only within class (default)

*/
class Pizza
{
    //* data members / variables / properties
    // private:
    // protected:
public:
    string name;
    string toppings;
    bool doubleCheese;
    int pizzaId;
    int size = 6;
    float price;

    //* Member functions /  methods
    void insert(string n, string t, bool d, int pi, float pr)
    {
        name = n;
        toppings = t;
        doubleCheese = d;
        pizzaId = pi;
        price = pr;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Toppings : " << toppings << endl;
        cout << "Double Cheese : " << (doubleCheese ? "Yes" : "No") << endl;
        cout << "Pizza id : " << pizzaId << endl;
        cout << "Size : " << size << endl;
        cout << "Price : " << price << endl;
    }
};

int main()
{
    // struct Pizza
    Pizza p;
    p.insert("7 Cheese", "Basil", true, 101, 459);
    p.display();

    cout << "P1 OBJECT DATA\n";
    Pizza p1;
    p1.insert("Paneer Delight", "Korean toppings", false, 102, 559);
    p1.display();

    return 0;
}