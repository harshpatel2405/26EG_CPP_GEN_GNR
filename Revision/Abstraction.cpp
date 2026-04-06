#include <iostream>
using namespace std;

class Payment
{
public:
    virtual void pay() = 0;
    void display()
    {
        cout << "This is display method of payment class\n";
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
    p->display();

    p = &u;
    p->pay();
    return 0;
}