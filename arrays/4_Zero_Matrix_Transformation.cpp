#include <iostream>
using namespace std;
#define r 3
#define c 4
int arr[r][c];

void displayData()
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
void updateZero(int arr[r][c], int i, int j)
{
    for (int index = 0; index < c; index++)
    {
        arr[i][index] = 0; // 10,11,12,13
        arr[index][j] = 0;
        // arr[index][i] = 0; // 01,11,21,23

        displayData();
        cout << endl;
    }
    // for (int index = 0; index < r; index++)
    // {
    //     // arr[i][index] = 0; // 10,11,12,13
    //     // 01 , 11 , 21
    //     displayData();
    //     cout << endl;
    // }
}

int main()
{

    bool row[r * c], column[r * c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter arr[" << i << "][" << j << "] : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 0)
            {
                row[i] = true;
                column[j] = true;
                // updateZero(arr, i, j);
                // found = true;
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (row[i] == true || column[j] == true)
            {
                arr[i][j] = 0;
            }
        }
    }
    displayData();
    return 0;
}