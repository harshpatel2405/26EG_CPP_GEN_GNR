/*
*  Student Counter System
^  Create a Student class with attributes like name and roll_number. Use a static data member to count the number of students created. Implement functions to:
?  Add new students and increment the counter.
?  Display the total number of students using a friend function
*/

#include <iostream>
using namespace std;

class Student
{
    string name;
    int rno;
    static int count;

public:
    void inputData(string name, int rno)
    {
        this->name = name;
        this->rno = rno;
        count++;
        cout << "Data Has been Added Successfully...\n";
    }
    friend int countTotalStudents(Student &s);
    friend void displayData(Student &s);
};

int Student ::count = 0;

int countTotalStudents(Student &s)
{
    return s.count;
}

void displayData(Student &s)
{
    cout << s.name << "\t" << s.rno << endl;
    // s.inputData("kjnbb",6556);
}

int main()
{
    Student s, s1, s2;
    s.inputData("Harsh", 101);
    s1.inputData("Vasu", 102);
    s2.inputData("Dev", 103);

    cout << "\nTotal Number of Students Added : " << countTotalStudents(s) << endl
         << endl;

    cout << "Name\tRollNo\n----\t------\n";
    displayData(s);
    displayData(s1);
    displayData(s2);

    return 0;
}