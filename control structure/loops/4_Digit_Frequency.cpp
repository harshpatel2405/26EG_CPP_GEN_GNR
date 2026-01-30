//* Write a program that counts and prints how many times each digit appears in a number. Each digit should be printed only once, in the order of its first appearance

/*
^       INPUT : 12233421
^       OUTPUT :
^               1 -> 2
^               2 -> 3
^               3 -> 2
^               4 -> 1
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

int removeRepeatedDigit(int n)
{
    long int output = 0;
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
    return output;
}

void checkFrequency()
{
}

int main()
{
    int no = 1221;
    int ans = removeRepeatedDigit(1221);
    cout << ans;

    while (no > 0)
    {
        checkFrequency(ans, ld);
    }

    return 0;
}