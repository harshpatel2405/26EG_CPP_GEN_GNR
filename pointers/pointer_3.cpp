#include <iostream>
using namespace std;

void displayData(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\narr[" << i << "] : " << arr[i];
    }
}
void inputData(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter arr[" << i << "] : ";
        cin >> arr[i];
    }
}

int main()
{
    int n = 3;
    int arr[3]; //

    inputData(arr, n);
    displayData(arr, n);
    return 0;
}
