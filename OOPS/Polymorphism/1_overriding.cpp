#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal makes Sound..\n";
    }

    void display()
    {
        cout << "Displaying the display method names display..\n";
    }
};

class Dog : public Animal
{
    void sound() override
    {
        cout << "dog Barks..\n";
    }
};

int main()
{
    Animal *a;
    Dog d;
    // d.sound();

    a = &d;
    a->sound();
    a->display();
    return 0;
}
