#include <iostream>
using namespace std;

struct Student
{
    int age;
    float marks[3];
    char name[20];
};

void inputData(struct Student *stud)
{
    cout << "Enter Age: ";
    cin >> stud->age;

    cout << "Enter name : ";
    cin >> (*stud).name;

    cout << "Enter marks : ";
    for (int j = 0; j < 3; j++)
    {
        cin >> stud->marks[j];
    }

    cout << "\nData Added Successfully...\n";
}

void displayData(struct Student *s)
{
    cout << "\nName :  " << s->name << endl;
    cout << "age :  " << s->age << endl;
    cout << "Marks :  ";
    for (int j = 0; j < 3; j++)
    {
        cout << s->marks[j] << "\t";
    }
}

int main()
{
    struct Student s;

    inputData(&s);
    displayData(&s);
    return 0;
}

// * Input  , display , update , delete