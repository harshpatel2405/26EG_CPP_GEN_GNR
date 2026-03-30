#include <iostream>
using namespace std;

template <class T>
class Database
{
public:
    vector<T> data;

    void show()
    {
        T obj;
        data.push_back(obj);

        for (auto x : obj)
        {
            x.show();
        }
    }
};

class Product
{
public:
    int price;

    Product(int p)
    {
        price = p;
    }

    void show()
    {
        cout << "Product Price : " << price << endl;
    }
};

class Employee
{
    int id;

    Employee(int i)
    {
        id = i;
    }

    void show()
    {
        cout << "Employee ID : " << id << endl;
    }
};

int main()
{
    Database<Product> p1;
    p1.show();
    return 0;
}