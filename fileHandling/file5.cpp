#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream fp;

    fp.open("writeRead.bin", ios::out | ios::in | ios::binary | ios::trunc);
    cout << "Cursor Before Data is set : " << fp.tellp() << endl;

    // array
    int arr[] = {10, 20, 30, 40, 50, 60};
    int b[6];
    fp.write((char *)arr, sizeof(arr));

    cout << "Cursor After Data is set : " << fp.tellp() << endl;

    fp.seekg(0, ios::beg);

    fp.read((char *)b, sizeof(b));

    for (auto i = 0; i < 6; i++)
    {
        cout << b[i] << endl;
    }

    fp.close();

    auto a = 23;
    cout << sizeof(a);
    return 0;
}