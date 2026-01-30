//* Write a program that removes repeated digits from a number and forms a new number containing only the first occurrence of each digit (order preserved)

/*
^      INPUT : 12134215
^      OUTPUT : 1234
*/

#include <iostream>
using namespace std;

int reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int main()
{
    long int n = 12134215, output = 0;
    bool found = false;

    long int no = reverse(n);
    long int temp;
    cout << "Reverse : " << no << endl;
    while (no > 0) // 0
    {
        int ld = no % 10; // 3
        temp = output;    // 12

        while (output > 0) // 0 > 0
        {
            found = false;
            int old = output % 10; // 2
            if (ld == old)
            {
                found = true;
                break;
            }
            output /= 10;
        }
        if (found == false)
        {
            output = temp * 10 + ld; // 1
        }
        else
        {
            output = temp;
        }
        no /= 10;
    }
    cout << output;
    return 0;
}