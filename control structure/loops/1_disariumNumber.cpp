// *   175 = 1^1 + 7^2 + 5^3 = 175

#include <iostream>
using namespace std;

int main()
{
    int no = 1750;
    int rev = 0;
    int temp = no;

    while (no > 0)
    {
        int ld = no % 10;
        rev = rev * 10 + ld;
        no /= 10;
    };

    no = rev;
    int sum = 0;
    int count = 0;
    while (no > 0)
    {
        count++;
        int mul = 1;
        int ld = no % 10;
        for (int i = 1; i <= count; i++)
        {
            mul *= ld;
        }
        sum += mul;
        no /= 10;
    }

    if (sum == temp)
        cout << temp << " is Disarium Number....";
    else
        cout << temp << " is not Disarium Number....";
    return 0;
}