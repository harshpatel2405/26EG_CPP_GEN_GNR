#include <iostream>
#include <vector>
using namespace std;

class Student
{
public:
    int id;

    Student(int i)
    {
        id = i;
    }
};

void display(const vector<Student> &v)
{
    for (Student x : v)
    {
        cout << x.id << endl;
    }
}

int main()
{
    vector<Student> v;

    v.push_back(Student(1));
    v.push_back(Student(2));
    v.push_back(Student(3));

    display(v);
    return 0;
}
/*
What is pass by value? // a copy of original is created 
What is pass by refernce ? // original is used directly 

const with pass by reference
*/