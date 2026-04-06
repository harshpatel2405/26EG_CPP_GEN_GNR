#include <iostream>
#include <fstream>
using namespace std;

// fstream - ofstream (write), ifstream (read)
// fstream -- r+, w+, a+ , ab , rb, wb  --

int main()
{
    ofstream fp;
    // fp.open("data.txt"); // * default mode : write
    // fp.open("data.txt", ios :: out ); // * default mode : write
    // fp.open("data.txt", ios :: app); // * mode : append
    fp.open("data.txt", ios::app | ios::binary); // * mode : append + binary

    fp << "This is first line\n";
    fp << "This is Second line\n";

    fp.close(); // * closes the file and sets the cursor to ZERO
    return 0;
}