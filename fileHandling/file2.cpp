#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fp;
    string line;

    fp.open("data.txt"); // default : read

    // getline(fp, line); // single for single line

    while (getline(fp, line))
    {
        cout << line << "\n";
    }
    
    fp.close();

    return 0;
}