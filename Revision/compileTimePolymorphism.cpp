// * compile time -> pre decided
// * Overloading -- works in same class only
// * 1. Constructor Overloading , 2. Method overloading , 3. Operator Overloading

#include <iostream>
using namespace std;

class Bag
{
    string materialType;
    int price;
    int capacity;
    string color;
    string brand;
    int chain;

public:
    // * constructor overloading
    Bag()
    {
        materialType = "Faux Leather";
        price = 1159;
        capacity = 39;
        color = "brown";
        brand = "FGear";
        chain = 4;
    }

    Bag(string mt, string co, int ch)
    {
        materialType = mt;
        color = co;
        chain = ch;
        price = 1250;
        brand = "Water Bags";
        capacity = 41;
    }

    Bag(string mt, int cap, string co, int p, string br, int ch)
    {
        materialType = mt;
        capacity = cap;
        color = co;
        price = p;
        brand = br;
        chain = ch;
    }

    // * method overloading
    /*
    void display() {}
    void display(int a) {}
    void display(float a) {}

    */

    void display()
    {
        cout << "Material Type : " << materialType << endl;
        cout << "Capacity : " << capacity << endl;
        cout << "Color : " << color << endl;
        cout << "Price : " << price << endl;
        cout << "Chain : " << chain << endl
             << endl;
    }

    // * operator overloading

    // ^ object object
    Bag operator+(Bag obj)
    {
        // Bag temp; calls default constructor
        Bag temp = *this;
        temp.materialType = "Real Faux Leather";
        temp.price = this->price + obj.price;
        temp.color = "Black and White";

        return temp;
    }

    // ^ object value
    Bag operator+(int price)
    {
        // Bag temp; calls default constructor
        Bag temp = *this;
        temp.price = this->price + price;
        temp.color = "Blue";
        temp.capacity = 23;

        return temp;
    }
    // ^ value object

    friend Bag operator+(int price, Bag obj);
};

Bag operator+(int price, Bag obj)
{
    Bag temp = obj;
    temp.price = obj.price + price;
    temp.color = "Red";
    temp.chain = 9;

    return temp;
}
int main()
{
    Bag b1;
    Bag b2("Real Leather", "Yellow", 6);
    Bag b3("Plastic", 56, "Black", 4569, "LV", 7);

    b1.display();
    b2.display();
    b3.display();

    // object object
    Bag b4 = b1 + b2;
    b4.display();

    // object with value
    Bag b5 = b4 + 600;
    b5.display();

    // value with object
    Bag b6 = 800 + b5;
    b6.display();

    return 0;
}