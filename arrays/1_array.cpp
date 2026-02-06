#include <iostream>
using namespace std;

void inputData(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter arr[" << i << "] : ";
        cin >> arr[i];
    }
}

void displayData(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << "\narr[" << i << "] : " << arr[i];
}

int main()
{
    int arr[3];
    int n = 3;
    // arr = &arr[0]
    inputData(arr, n);
    displayData(arr, n);

    return 0;
}