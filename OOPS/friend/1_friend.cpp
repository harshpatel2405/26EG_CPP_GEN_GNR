#include <iostream>
using namespace std;

class Apple
{
private:
    int xyz;

    friend void inputData(Apple &a);
};

void inputData(Apple &a)
{
    a.xyz = 120;
    cout << a.xyz;
}

int main()
{
    Apple a;
    // a.xyz = 120;
    // cout << a.xyz;

    inputData(a);
    return 0;
}