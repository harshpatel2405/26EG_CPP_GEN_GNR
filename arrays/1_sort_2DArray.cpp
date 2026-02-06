#include <iostream>
using namespace std;

/*
9 8 7
6 5 4
3 2 1

1 2 3
4 5 6
7 8 9

*/

int main()
{
    int r = 3, c = 3;
    int arr[r][c] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}};
    int clean[r * c];

    int k = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            clean[k++] = arr[i][j];
        }
    }

    for (int i = 0; i < (r * c); i++)
    {
        cout << clean[i] << "\t";
    }
    // 1 8 7 4 5 6 1 2 3
    //    8 7 4 5 6 1 2 3
    for (int i = 0; i < (r * c) - 1; i++)
    {
        for (int j = 0; j < (r * c) - i - 1; j++)
        {
            if (clean[j] > clean[j + 1])
            {
                int temp = clean[j];
                clean[j] = clean[j + 1];
                clean[j + 1] = temp;
            }
        }
    }
    cout << endl;
    // for (int i = 0; i < (r * c); i++)
    // {
    //     cout << clean[i] << "\t";
    // }
    k = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = clean[k++];
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}