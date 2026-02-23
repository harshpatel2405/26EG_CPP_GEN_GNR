// * Task : Write a function to convert binary to decimal (pass binary as int).

#include <iostream>
using namespace std;

void reverse(int n, int num)
{
    int rev = 0;
    while (n > 0)
    {
        int ld = n % 10;
        rev = rev * 10 + ld;
        n /= 10;
    }

    cout << "\nBinary of " << num << " is " << rev << endl;
}

void binary(int *n)
{
    int digits = 0;
    int temp = *n;
    while (*n > 0)
    {
        int ans = *n % 2;
        digits = digits * 10 + ans;
        *n /= 2;
    }

    cout << digits;

    reverse(digits, temp);
}

int main()
{
    int n = 25; // 11001

    binary(&n);
    return 0;
}