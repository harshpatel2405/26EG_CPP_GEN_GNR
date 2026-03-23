#include <iostream>
using namespace std;

class Pizza
{
protected:
    string size;
    float price;

public:
    void setPizza(string s)
    {
        size = s;
        if (s == "small")
            price = 100;
        else if (s == "medium")
            price = 200;
        else if (s == "large")
            price = 300;
    }

    virtual void displayPizza()
    {
        cout << "Pizza Size: " << size << endl;
        cout << "Price: " << price << endl
             << endl;
    }
};

class ToppingPizza : public Pizza
{
protected:
    string topping;

public:
    void setTopping(string t)
    {
        topping = t;
        if (t == "cheese")
            price += 50;
        else if (t == "veg")
            price += 70;
        else if (t == "paneer")
            price += 100;
    }

    void displayPizza() override
    {
        cout << "Pizza Size: " << size << endl;
        cout << "Topping: " << topping << endl;
        cout << "Total Price: " << price << endl
             << endl;
    }
};

class DeluxPizza : public ToppingPizza
{
    bool drinkIncluded;

public:
    void setDrink(bool d)
    {
        drinkIncluded = d;
        if (d == true)
            price += 80;
    }
    void displayPizza() override
    {
        cout << "Pizza Size: " << size << endl;
        cout << "Topping: " << topping << endl;
        cout << "Drink Included: " << (drinkIncluded ? "Yes" : "No") << endl;
        cout << "Final Price: " << price << endl
             << endl;
    }
};

int main()
{
    Pizza p;
    p.setPizza("medium");
    p.displayPizza();

    ToppingPizza tp;
    tp.setPizza("large");
    tp.setTopping("veg");
    tp.displayPizza();

    DeluxPizza dp;
    dp.setPizza("small");
    dp.setTopping("paneer");
    dp.setDrink(true);
    dp.displayPizza();

    Pizza *margherrita;                         
    margherrita = &dp;                         
    margherrita ->displayPizza();                         
    return 0;
}