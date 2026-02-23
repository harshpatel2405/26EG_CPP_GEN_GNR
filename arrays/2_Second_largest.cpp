#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    if(n < 2)
    {
        cout << "Second largest not possible";
        return 0;
    }

    int largest = arr[0];
    int secondLargest = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    if(largest == secondLargest)
        cout << "No second largest element";
    else
        cout << "Second largest element is: " << secondLargest;

    return 0;
}