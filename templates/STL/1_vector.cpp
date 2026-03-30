// * STL - Standard template library
// * vector , list , dequeue
// * algorithms - sort , find , reverse

// * Vector -- Dynamic Array push_back , begin , end , size ,

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {3, 2, 1};

    for (int x : v)
    {
        cout << x << endl;
    }

    v.push_back(40);
    for (int x : v)
    {
        cout << x << endl;
    }

    v.pop_back();
    for (int x : v)
    {
        cout << x << endl;
    }

    sort(v.begin(), v.end());
    for (int x : v)
    {
        cout << x << endl;
    }


    return 0;
}