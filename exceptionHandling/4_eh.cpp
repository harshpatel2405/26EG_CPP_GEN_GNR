/*
 Task : take marks of three subjects
if(marks <0 and marks > 100 then throw "invalid marks")
if(any subject marks < 33 then throw "Fail")
*/
#include <iostream>
using namespace std;

int main()
{

    int marks[] = {-90, 32, 97};

    for (int i = 0; i < 3; i++)
    {
        try
        {
            if (marks[i] < 0 || marks[i] > 100)
            {
                throw 0;
            }

            else if (marks[i] < 33)
            {

                throw true;
            }

            else
            {
                throw 'c';
            }
        }
        catch (int x)
        {
            cout << "invalid marks..." << endl;
        }
        catch (bool x)
        {
            cout << "Fail" << endl;
        }
        catch (char x)
        {
            cout << "marks of subject " << i << " : " << marks[i] << endl;
        }
    }
}