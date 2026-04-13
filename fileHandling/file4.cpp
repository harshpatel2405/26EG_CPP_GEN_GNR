#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream fp;

    fp.open("writeRead.bin", ios::out | ios::in | ios::binary | ios::trunc);

    // 1. normal variable
    int x = 100;
    int y;
    fp.write((char *)&x, sizeof(x));

    fp.seekg(0);

    fp.read((char *)&y, sizeof(y));
    cout << "Y : " << y << endl;

    fp.close();
    return 0;
}
