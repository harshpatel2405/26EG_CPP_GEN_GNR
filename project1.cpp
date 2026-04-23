#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <ctime>
using namespace std;

time_t now = time(0);   // get current time
char *dt = ctime(&now); // convert to string

// ================= LOGGER =================
class Logger
{
public:
    static void log(string msg)
    {
        ofstream file("log.txt", ios::app);
        file << msg << endl;
    }
};

// ================= AUTH =================
class Auth
{
public:
    void signup()
    {
        string u, p;
        cout << "Username: ";
        cin >> u;
        cout << "Password: ";
        cin >> p;

        ofstream file("users.txt", ios::app);
        file << u << " " << p << endl;

        Logger::log("[INFO] Signup: " + u + "\tTime : " + dt);
    }

    bool login()
    {
        string u, p, fu, fp;
        cout << "Username: ";
        cin >> u;
        cout << "Password: ";
        cin >> p;

        ifstream file("users.txt");

        while (file >> fu >> fp)
        {
            if (u == fu && p == fp)
            {
                Logger::log("[INFO] Login success: " + u + "\tTime : " + dt);
                return true;
            }
        }

        Logger::log("[ERROR] Login failed: " + u + "\tTime : " + dt);
        return false;
    }
};

// ================= BASE CLASS =================
class Record
{
public:
    virtual void input() = 0;
    virtual void display() = 0;
    virtual int getId() = 0;
    virtual string serialize() = 0;
};

// ================= EMPLOYEE =================
class Employee : public Record
{
    int id;
    string name;
    double salary;

public:
    void input()
    {
        cout << "Enter ID Name Salary: ";
        cin >> id >> name >> salary;
    }

    void display()
    {
        cout << id << " " << name << " " << salary << endl;
    }

    int getId() { return id; }

    string serialize()
    {
        return to_string(id) + " " + name + " " + to_string(salary);
    }

    void deserialize(string line)
    {
        stringstream ss(line);
        ss >> id >> name >> salary;
    }
};

// ================= PRODUCT =================
class Product : public Record
{
    int id;
    string name;
    double price;

public:
    void input()
    {
        cout << "Enter ID Name Price: ";
        cin >> id >> name >> price;
    }

    void display()
    {
        cout << id << " " << name << " " << price << endl;
    }

    int getId() { return id; }

    string serialize()
    {
        return to_string(id) + " " + name + " " + to_string(price);
    }

    void deserialize(string line)
    {
        stringstream ss(line);
        ss >> id >> name >> price;
    }
};

// ================= CUSTOMER =================
class Customer : public Record
{
    int id;
    string name;
    string phone;

public:
    void input()
    {
        cout << "Enter ID Name Phone: ";
        cin >> id >> name >> phone;
    }

    void display()
    {
        cout << id << " " << name << " " << phone << endl;
    }

    int getId() { return id; }

    string serialize()
    {
        return to_string(id) + " " + name + " " + phone;
    }

    void deserialize(string line)
    {
        stringstream ss(line);
        ss >> id >> name >> phone;
    }
};

// ================= DATABASE =================
template <typename T>
class Database
{
    vector<T> records;
    string filename;

public:
    Database(string file)
    {
        filename = file;
        load();
    }

    void load()
    {
        records.clear();
        ifstream file(filename);
        string line;

        while (getline(file, line))
        {
            T obj;
            obj.deserialize(line);
            records.push_back(obj);
        }
    }

    void save()
    {
        ofstream file(filename);
        for (auto &r : records)
            file << r.serialize() << endl;
    }

    void add()
    {
        T obj;
        obj.input();

        for (auto &r : records)
        {
            if (r.getId() == obj.getId())
                throw "Duplicate ID!";
        }

        records.push_back(obj);
        save();
        Logger::log("[INFO] Record Added");
    }

    void show()
    {
        int count = 0;
        for (int i = 0; i < records.size(); i++)
        {
            records[i].display();
            count++;

            if (count == 5)
            {
                cout << "Press Enter...";
                cin.ignore();
                cin.get();
                count = 0;
            }
        }
    }

    void search(int id)
    {
        for (auto &r : records)
        {
            if (r.getId() == id)
            {
                r.display();
                return;
            }
        }
        throw "Record not found!";
    }

    void deleteRecord(int id)
    {
        for (auto it = records.begin(); it != records.end(); it++)
        {
            if (it->getId() == id)
            {
                records.erase(it);
                save();
                Logger::log("[INFO] Record Deleted");
                return;
            }
        }
        throw "Record not found!";
    }
};

// ================= MENU =================
template <typename T>
void menu(Database<T> &db)
{
    int ch, id;

    do
    {
        cout << "\n1.Add 2.Show 3.Search 4.Delete 5.Back\n";
        cin >> ch;

        try
        {
            switch (ch)
            {
            case 1:
                db.add();
                break;
            case 2:
                db.show();
                break;
            case 3:
                cout << "Enter ID: ";
                cin >> id;
                db.search(id);
                break;
            case 4:
                cout << "Enter ID: ";
                cin >> id;
                db.deleteRecord(id);
                break;
            }
        }
        catch (const char *msg)
        {
            cout << "Error: " << msg << endl;
            Logger::log("[ERROR] " + string(msg));
        }

    } while (ch != 5);
}

// ================= MAIN =================
int main()
{
    Auth auth; // * object of Auth
    int choice;

    do
    {
        cout << "\n1.Signup 2.Login 3.Exit\n";
        cin >> choice;

        if (choice == 1)
        {
            auth.signup();
        }
        else if (choice == 2)
        {
            if (auth.login())
            {
                Database<Employee> emp("employee.txt");
                Database<Product> prod("product.txt");
                Database<Customer> cust("customer.txt");

                int ch;

                do
                {
                    cout << "\n1.Employee 2.Product 3.Customer 4.Logout\n";
                    cin >> ch;

                    if (ch == 1)
                        menu(emp);
                    else if (ch == 2)
                        menu(prod);
                    else if (ch == 3)
                        menu(cust);

                } while (ch != 4);
            }
            else
            {
                cout << "Invalid Login\n";
            }
        }

    } while (choice != 3);

    return 0;
}