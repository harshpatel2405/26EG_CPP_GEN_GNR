#include <iostream>
using namespace std;

class Shopping
{
    int price;

public:
    Shopping(int price)
    {
        this->price = price;
    }

    Shopping operator+(Shopping obj)
    {
        Shopping temp = *this;
        temp.price = this->price + obj.price;
        return temp;
    }

    Shopping operator+(int value)
    {
        Shopping temp = *this;
        temp.price = this->price + value;
        return temp;
    }

    void display()
    {
        cout << "Price : " << price << endl;
    }

    bool operator==(Shopping obj)
    {
        return (this->price == obj.price);
    }

    friend Shopping operator+(int value, Shopping obj);
};

Shopping operator+(int value, Shopping obj)
{
    Shopping temp = obj;
    temp.price = value + obj.price;
    return temp;
}

int main()
{
    Shopping s1(1200);
    Shopping s2(2400);
    s1.display();
    s2.display();

    // * object with object
    Shopping s3 = s1 + s2;
    s3.display();

    Shopping s4 = s3 + s2;
    s4.display();

    // * object with value
    Shopping s5 = s4 + 50;
    s5.display();

    // * value with object
    Shopping s6 = 150 + s5;
    s6.display();

    if (s5 == s6)
        cout << "Both are same...";
    else
        cout << "Both are not same...";

    return 0;
}

// 3 + 5