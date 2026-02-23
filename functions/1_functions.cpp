#include <iostream>
using namespace std;

void greeting()
{
    cout << "Is there you chief?" << endl;
} // declaration and definition

int trophies()
{
    return 4235;
}

int calculate(int a, int b)
{
    return a + b;
}
void hello(string);

int main()
{
    greeting();
    hello("Bot"); // parameter /  actual parameter
    cout << "Chief , Your trophies has increased to " << trophies() << endl;
    cout << "Your Elixir is " << calculate(120, 560);
    return 0;
}

void hello(string a) //  argument / formal parameters
{
    cout << "Hello, " << a << endl;
}

// * Task : Find number of prime numbers between sp and ep
// * Task : Find a number is prime and palindrome between sp and ep