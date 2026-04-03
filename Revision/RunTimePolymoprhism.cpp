// overriding => works in different class with help of inheritance

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal makes sound\n";
    }
};

class Dog : public Animal
{
    void sound()
    {
        cout << "Dog Barks\n";
    }
};

int main()
{

    Animal *a;
    Dog d;

    a = &d;

    a->sound();
    return 0;
}