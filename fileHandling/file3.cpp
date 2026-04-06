#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    fstream fp("student.bin", ios::out);

    int a = 100;

    fp.write((char *)&a, sizeof(a));


    fp.close();
    return 0;
}