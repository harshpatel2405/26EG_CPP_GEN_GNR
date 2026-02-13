#include <iostream>
using namespace std;
/* target - 45
3       20      45      50      56      60      89  -- 7
        m        l h
m = l+h/  2
*/

void sort(int clean[], int size)
{
    for (int i = 0; i < (size)-1; i++)
    {
        for (int j = 0; j < (size)-i - 1; j++)
        {
            if (clean[j] > clean[j + 1])
            {
                int temp = clean[j];
                clean[j] = clean[j + 1];
                clean[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[1000], target;
    for (int i = 0; i < 1000; i++)
    {
        arr[i] = i * 2;
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);

    cout << "\n\nEnter the target Element : ";
    cin >> target;
    int low = 0;
    int count = 1;
    int high = size - 1;
    bool found = false;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            cout << "Element Found at " << mid << " index";
            cout << "\nCount : " << count << endl;
            found = true;
            break;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        count++;
    }

    if (found == false)
    {
        cout << "No Element Found \n";
    }

    return 0;
}