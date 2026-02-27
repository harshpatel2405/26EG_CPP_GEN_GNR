#include <iostream>
using namespace std;

struct Student
{
    int id;
    int age;
    float marks;
};

struct School
{
    int sid;
    // * 1st way
    //  struct Student s[5];
    // * 2nd way
    struct Student
    {
        int id;
        int age;
        float marks[3];
    } s[2];
} sc[2];

/*
1 school
sc.sid;
sc.age;

1 school , 1 student
sc.s.id;
sc.s.age;
sc.s.marks;

1 school , 2 student
sc.s[0].id
sc.s[0].age
sc.s[0].marks

sc.s[1].id
sc.s[1].age
sc.s[1].marks

1 school , 2 students , 3 subjects marks
sc.s[0].id
sc.s[0].age
sc.s[0].marks[0]
sc.s[0].marks[1]
sc.s[0].marks[2]

sc.s[1].id
sc.s[1].age
sc.s[1].marks[0]
sc.s[1].marks[1]
sc.s[1].marks[2]

2 school , 2 students , 3 subjects marks

sc[0].s[0].id
sc[0].s[0].age
sc[0].s[0].marks[0]
sc[0].s[0].marks[1]
sc[0].s[0].marks[2]
sc[0].s[1].id
sc[0].s[1].age
sc[0].s[1].marks[0]
sc[0].s[1].marks[1]
sc[0].s[1].marks[2]

sc[1].s[0].id
sc[1].s[0].age
sc[1].s[0].marks[0]
sc[1].s[0].marks[1]
sc[1].s[0].marks[2]
sc[1].s[1].id
sc[1].s[1].age
sc[1].s[1].marks[0]
sc[1].s[1].marks[1]
sc[1].s[1].marks[2]
*/
int main()
{

    return 0;
}