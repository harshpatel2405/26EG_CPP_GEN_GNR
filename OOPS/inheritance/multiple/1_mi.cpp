#include <iostream>
using namespace std;

/*
Multiple Parents and single child

A & B -> C (a , b)
*/

// * parent 1 / base class
class Vehicle
{
    string brand;
    int speed;

public:
    Vehicle(string brand, int speed)
    {
        this->brand = brand;
        this->speed = speed;
        cout << "Vehicle Class Initialised Successfully...\n";
    }

    void displayVehicle()
    {
        cout << "\nBrand : " << brand << endl;
        cout << "Speed : " << speed << endl;
    }
};

// *parent 2 / base class
class Engine
{
    string engineType;
    int horsePower;

public:
    Engine(string engineType, int horsePower)
    {
        this->engineType = engineType;
        this->horsePower = horsePower;
        cout << "Engine Class Initialised Successfully...\n";
    }

    void displayEngine()
    {
        cout << "Engine Type : " << engineType << endl;
        cout << "Horse Power : " << horsePower << endl;
    }
};

// * child class
class Car : public Engine, public Vehicle
{
    string model;

public:
    Car(string brand, int speed, string engineType, int horsePower, string model) : Vehicle(brand, speed), Engine(engineType, horsePower)
    {
        this->model = model;
        cout << "Car Class Initialised Successfully...\n";
    }

    void displayCar()
    {
        displayVehicle();
        displayEngine();
        cout << "Model : " << model << endl;
    }
};

int main()
{
    Car c("Honda", 190, "Diesel", 800, "City");
    c.displayCar();
    return 0;
}