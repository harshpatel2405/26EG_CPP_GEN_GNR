#include <iostream>
using namespace std;

class School
{
public:
    static int count;
    void NumberOfStudents()
    {
        count++;
    }
};

int School::count = 0;

int main()
{
    School s, s1, s2;
    s.NumberOfStudents();
    s1.NumberOfStudents();
    s2.NumberOfStudents();

    cout << "Number Of Students Added : " << s.count;
    return 0;
}