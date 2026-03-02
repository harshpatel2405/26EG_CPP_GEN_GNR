#include <iostream>
using namespace std;

class Person
{
    // * default : private
    int age;
    float height;
    float weight;
    string name;

protected:
    // Person() {}
    Person(int age, float weight, float height, string name)
    {
        this->age = age;
        this->weight = weight;
        this->height = height;
        this->name = name;
        cout << "Person Class Initialised Successfully...\n";
    }

    void displayData()
    {
        cout << "\nAge : " << age << endl;
        cout << "Weight : " << weight << endl;
        cout << "Height : " << height << endl;
        cout << "Name : " << name << endl;
    }
};

class Employee : protected Person
{
    float salary;
    string dept;
    int eid;

public:
    Employee(float s, string d, int e, int age, float weight, float height, string name) : Person(age, weight, height, name)
    {
        salary = s;
        dept = d;
        eid = e;
        cout << "Employee Class Initialised Successfully...\n";
    }

    void displayEmployee()
    {
        // Person::displayData();
        displayData();
        cout << "Employee ID : " << eid << endl;
        cout << "Department : " << dept << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main()
{
    // Person p;

    // p.displayData();

    Employee e(12000, "IT", 101, 26, 70, 170, "Harsh");
    e.displayEmployee();
    return 0;
}

// #include <iostream>
// using namespace std;

// class Person
// {
//     // * default : private
//     int age = 12;
//     float height = 70;
//     float weight = 70;
//     string name = "Kedar";

//     // Person(int age, float weight, float height, string name)
//     // {
//     //     this->age = age;
//     //     this->weight = weight;
//     //     this->height = height;
//     //     this->name = name;
//     //     cout << "Person Class Initialised Successfully...\n";
//     // }

// protected:
//     void displayData()
//     {
//         cout << "Age : " << age << endl;
//         cout << "Weight : " << weight << endl;
//         cout << "Height : " << height << endl;
//         cout << "Name : " << name << endl;
//     }
// };

// class Employee : protected Person
// {
//     float salary = 36589;
//     string dept = "IT";
//     int eid = 101;

// public:
//     void displayEmployee()
//     {
//         // Person::displayData();
//         displayData();
//         cout << "Employee ID : " << eid << endl;
//         cout << "Department : " << dept << endl;
//         cout << "Salary : " << salary << endl;
//     }
// };

// int main()
// {
//     // Person p;

//     // p.displayData();

//     Employee e;
//     e.displayEmployee();
//     return 0;
// }