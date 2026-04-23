#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "Exception";

    cout << "Name : " << name << endl;
    cout << "Name[0] : " << name[0] << endl;

    cout << "Length of " << name << " is " << name.length() << endl;

    name.append(" Handling");
    cout << "Name After append : " << name << endl;

    name.insert(3, "SHYAM");
    cout << "Name after insert : " << name << endl;

    int index = name.find("tion");
    cout << "Index of tion : " << index << endl;

    name.replace(2, 3, "HelloWorld");
    cout << "Name after replace : " << name << endl;

    name.erase(1, 7);
    cout << "Name after erase : " << name << endl;

    string str = name.substr(1, 7);
    cout << "Substring str : " << str << endl;

    char ch = name.at(4);
    cout << "Character at 4 : " << ch << endl;


    return 0;
}
/*
* Replace Each Letter with the Next in the Alphabet
* 
* Write a C++ program to change every letter in a given string with the letter following it in the alphabet (i.e. a becomes b, p becomes q, z becomes a).
* Example:
* Sample Input: w3resource
* Sample Output: x3sftpvsdf
*/
