#include <iostream>
using namespace std;
int vs = 1;
void counter()
{
    static int count = 0;
    count++;
    cout << "Count : " << count << "\t VS : " << vs++ << endl;
}

int main()
{
    counter(); //* 1
    counter(); //* 2
    counter(); //* 3
    counter(); //* 4
    counter(); //* 5
    return 0;
}