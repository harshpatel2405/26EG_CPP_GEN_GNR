//  *  N = 102030201
//  *  cleaned = 12321
//  *  rev = reverse of cleaned
//  *  rev == cleaned --> palindrome

#include <iostream>
using namespace std;

int main()
{
    long int n = 120200001;
    long int cleaned = 0;
    while (n > 0)
    {
        int ld = n % 10;
        if (ld != 0)
        {
            cleaned = cleaned * 10 + ld;
        }
        n /= 10;
    }
    long int temp = cleaned;
    long int rev = 0;
    while (temp > 0)
    {
        int ld = temp % 10;
        rev = rev * 10 + ld;
        temp /= 10;
    }

    cout << "Cleaned : " << cleaned << endl;
    cout << "rev: " << rev << endl;
    if (cleaned == rev)
        cout << cleaned << " is Hidden Palindrome Number...";
    else
        cout << cleaned << " is not Hidden Palindrome Number...";
    return 0;
}