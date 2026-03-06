#include <iostream>
using namespace std;

class College
{
    int cid;
    string cname;
    string address;

protected:
    College(int c, string cn, string ad)
    {
        cid = c;
        cname = cn;
        address = ad;
        cout << "College class initialised....\n";
    }

    void displayCollege()
    {
        cout << "Cid : " << cid << endl;
        cout << "College Name : " << cname << endl;
        cout << "Address : " << address << endl;
    }
};

class Faculty : protected College
{
    int fid;
    string fname;
    float salary;

protected:
    Faculty(int f, string fn, float s, int c, string cn, string ad) : College(c, cn, ad)
    {
        fid = f;
        salary = s;
        fname = fn;
        cout << "Faculty class initialised....\n";
    }

    void displayFaculty()
    {
        displayCollege();
        cout << "FID : " << fid << endl;
        cout << "faulty Name : " << fname << endl;
        cout << "Salary : " << salary << endl;
    }
};

class Student : protected Faculty
{
    int sid;
    int eno;
    int sem;

public:
    Student(int si, int e, int sem, int f, string fn, float s, int c, string cn, string ad) : Faculty(f, fn, s, c, cn, ad)
    {
        sid = si;
        eno = e;
        this->sem = sem;
        cout << "Student class initialised....\n";
    }

    void displayStudent()
    {
        // displayCollege();
        displayFaculty();
        cout << "Sid : " << sid << endl;
        cout << "Enrollment Number : " << eno << endl;
        cout << "Semester : " << sem << endl;
    }
};

int main()
{
    Student s(101, 100203, 5, 230, "Harsh", 56230, 895623, "XYZ", "ABC ROAD");
    s.displayStudent();
    return 0;
}