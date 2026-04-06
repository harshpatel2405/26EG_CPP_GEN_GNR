#include <iostream>
using namespace std;

class Payment
{
public:
    virtual void pay()
    {
        cout << "Payment needs to be done..\n";
    }
};

class UPI : public Payment
{
    void pay()
    {
        cout << "Payment Mode : UPI\nUPI Transaction Successful...\n";
    }
};

class CreditCard : public Payment
{
    void pay()
    {
        cout << "Payment Mode : Credit Card\nTransaction Completed Successfully..\n";
    }
};

int main()
{
    Payment *p;
    CreditCard cd;
    UPI u;

    p = &cd;
    p->pay();

    p = &u;
    p->pay();
    return 0;
}