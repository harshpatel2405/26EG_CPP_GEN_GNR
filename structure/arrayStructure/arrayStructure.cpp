#include <iostream>
using namespace std;
#define SIZE 3

int eCount = 0;

struct Earbuds
{
    int id;
    bool anc;
    bool tws;
    int mah;
    float price;
    string company;
} e[SIZE];

int getIndex(int id)
{
    int index = -1;
    for (int i = 0; i < eCount; i++)
    {
        if (id == e[i].id)
        {
            index = i;
        }
    }
    return index;
}

void addEarbud()
{
    if (eCount < SIZE)
    {
        e[eCount].id = 101 + eCount;
        cout << "Enter Name of Company : ";
        cin >> e[eCount].company;
        cout << "Enter ANC (0/1) : ";
        cin >> e[eCount].anc;
        cout << "Enter TWS (0/1) : ";
        cin >> e[eCount].tws;
        cout << "Enter Battery (in maH) : ";
        cin >> e[eCount].mah;
        cout << "Enter Price : ";
        cin >> e[eCount].price;

        cout << "Earbuds with Id - " << e[eCount].id << " added Successfully..\n\n";
        eCount++;
    }
    else
    {
        cout << "No More Earbuds can be added..\n\n";
    }
}

void displayEarbuds()
{
    if (eCount > 0)
    {
        cout << "ID\tANC\tTWS\tMaH\tPrice\tCompany\n--\t---\t---\t---\t-----\t-------\n";
        for (int i = 0; i < eCount; i++)
        {
            cout << e[i].id << " \t" << (e[i].anc ? "true" : "false") << " \t" << (e[i].tws ? "true" : "false") << " \t" << e[i].mah << " \t" << e[i].price << " \t" << e[i].company << endl;
        }
        cout << endl;
    }
    else
    {
        cout << "No Earbuds to display....\n\n";
    }
}

void deleteEarBuds()
{
    int id;
    int index;
    if (eCount > 0)
    {
        cout << "Enter ID you want to delete : ";
        cin >> id;
        index = getIndex(id);
        if (index == -1)
        {
            cout << "no such id exists..\n\n";
            return;
        }
        eCount--;
        cout << "Earbud with Id - " << e[index].id << " deleted Successfully..\n\n";
        for (int i = index; i <= eCount; i++)
        {
            e[i] = e[i + 1];
        }
    }
    else
    {
        cout << "no Earbuds present...\n\n";
    }
}

void updateEarBuds()
{
    int id;
    int index;
    if (eCount > 0)
    {
        cout << "Enter ID you want to update : ";
        cin >> id;

        index = getIndex(id);
        if (index == -1)
        {
            cout << "no such id exists..\n\n";
            return;
        }

        cout << "Enter Name of Company (" << e[index].company << ") : ";
        cin >> e[index].company;
        cout << "Enter ANC (0/1) (" << e[index].anc << ") : ";
        cin >> e[index].anc;
        cout << "Enter TWS (0/1) (" << e[index].tws << ") : ";
        cin >> e[index].tws;
        cout << "Enter Battery (in maH) (" << e[index].mah << ") : ";
        cin >> e[index].mah;
        cout << "Enter Price (" << e[index].price << ") : ";
        cin >> e[index].price;
        cout << "Earbud with Id - " << e[index].id << " updated Successfully..\n\n";
    }
    else
    {
        cout << "no Earbuds present...\n\n";
    }
}

int main()
{
    int choice = 0;

    while (choice != 5)
    {
        cout << "1. Add Earbud\n2. Display Earbuds\n3.Delete Earbuds\n4. Update Earbuds\n5. Exit\nEnter Your Choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            addEarbud();
            break;
        case 2:
            displayEarbuds();
            break;
        case 3:
            deleteEarBuds();
            break;
        case 4:
            updateEarBuds();
            break;
        case 5:
            cout << "Exiting the program..\n";
            break;
        default:
            cout << "Try Again..\n\n";
        }
    }

    // e[1].inputData();
    return 0;
}