// What is friend Function ? -> it will allow you to access even private properties of class
// syntax : friend function prototype
// friend void add();

#include <iostream>
using namespace std;

class AdobePhotoshop
{
    bool subsriptionActive;
    int price;
    int aiCredits;

public:
    AdobePhotoshop(bool sa, int p, int a)
    {
        subsriptionActive = sa;
        price = p;
        aiCredits = a;
        cout << "Adobe Photoshop class initialised Successfully..\n";
    }

    void display()
    {
        cout << "Subscription Active : " << (subsriptionActive ? "True" : "false") << endl;
        cout << "AI Credits : " << aiCredits << endl;
        cout << "Price : " << price << endl;
    }

    friend void getAiCredits(AdobePhotoshop &ap, int credits);
};

void getAiCredits(AdobePhotoshop &ap, int credits)
{
    ap.aiCredits += credits;
    cout << "AI Credits updated by " << credits << endl
         << endl;
}

int main()
{
    AdobePhotoshop ap(true, 1599, 520);
    getAiCredits(ap, 500);
    ap.display();
    return 0;
}
